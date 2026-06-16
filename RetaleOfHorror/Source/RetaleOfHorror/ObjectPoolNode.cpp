// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolNode.h"

ObjectPoolNode::ObjectPoolNode()
{
	data = nullptr;
	nextNode = this;	//if this is the only node in list point to self, this allows circular methods to still run without changes
	objectInUse = false;
	objectSelected = false;
}

ObjectPoolNode::ObjectPoolNode(UObject* newData)
{
	this->data = newData;
	nextNode = this;
	objectInUse = false;
	objectSelected = false;
}

ObjectPoolNode::ObjectPoolNode(ObjectPoolNode* nextNode, UObject* newData)
{
	this->data = newData;
	this->nextNode = nextNode;
	objectInUse = false;
	objectSelected = false;
}

ObjectPoolNode* ObjectPoolNode::GetNextNode()
{
	return nextNode;
}

ObjectPoolNode* ObjectPoolNode::GetNextNodeNotInUse()
{
	//recursively search through list until you find a node already searched or node you are looking for
	if (objectSelected == true)	//if node's already been selected, break condition 1
	{
		return nullptr;
	}
	else if (objectInUse == false)	//if not being used return self, break condition 2
	{
		return this;
	}
	else
	{
		objectSelected = true;
		ObjectPoolNode* tempHolder = GetNextNode()->GetNextNodeNotInUse();	//search next node
		objectSelected = false;
		return tempHolder;
	}
}

int ObjectPoolNode::ObjectCount()
{
	//use a recursive loop to count how many objects are in the list
	if (objectSelected == true)	//if node has already been selected, break condition 
	{
		return 0;
	}
	objectSelected = true;
	int count = GetNextNode()->ObjectCount() + 1;
	objectSelected = false;
	return count;
}

//insert new node in after current node
void ObjectPoolNode::NewNode(UObject* newData)
{
	//create new node after this one 
	//pointer = this nodes pointer
	ObjectPoolNode* newNode = new ObjectPoolNode(nextNode, newData);
	//this nodes pointer = to new node
	nextNode = newNode;
	//delete pointer to prevent memory leak
	delete newNode;
}

//delete the node after this node, this does not delete the data it is pointing to
void ObjectPoolNode::DeleteNextNode()
{
	ObjectPoolNode* newNextNode = GetNextNode()->GetNextNode();	//the nextNode of the node to be deleted
	delete GetNextNode(); //delete next node
	nextNode = newNextNode; //set new next node
}

//delete this node, return if it was successful
bool ObjectPoolNode::DeleteThisNode()
{
	//search for node pointing to this one
	ObjectPoolNode* previousNode = SearchForNodeWithPointer(this);
	if (previousNode == nullptr)	//if no node is pointing to this
	{
		//throw error
		UE_LOG(LogTemp, Error, TEXT("Error in ObjectPoolNode::DeleteThisNode() : previousNode is nullptr"));
		return false;
	}
	//use previous node to delete next node (this one)
	previousNode->DeleteThisNode();
	delete previousNode; //delete pointer to prevent memory leak
	return true;
}

//delete linked list - NEEDS TO BE DONE
void ObjectPoolNode::DeleteList()
{
	//make recursive function that backtracks and deletes stuff
}

void ObjectPoolNode::ChangeObjectInUse(bool inUse)
{
	objectInUse = inUse;
}

//search for item with pointer to node
ObjectPoolNode* ObjectPoolNode::SearchForNodeWithPointer(ObjectPoolNode* pointer)
{
	if (objectSelected == true) //if object has already been searched
	{
		//throw warning for object can't be found in list
		UE_LOG(LogTemp, Warning, TEXT("Warning in ObjectPoolNode::SearchForNodeWithPointer() : object being searched for isn't in list"));
		return nullptr;
	}
	else if (nextNode == nullptr)
	{
		//throw error for item in circular linked list with nullptr
		UE_LOG(LogTemp, Error, TEXT("ERROR in ObjectPoolNode::SearchForNodeWithPointer() : nextNode is nullptr"));
		return nullptr;
	}
	else if (pointer == nextNode)
	{
		return this;
	}
	//recursive call
	objectSelected = true;
	ObjectPoolNode* tempHolder = GetNextNode()->SearchForNodeWithPointer(pointer);
	objectSelected = false;
	return tempHolder;
}

//search for item with pointer to data
ObjectPoolNode* ObjectPoolNode::SearchForNodeWithData(UObject* newData)
{
	if (objectSelected == true) //if object has already been searched
	{
		//throw warning for object can't be found in list
		UE_LOG(LogTemp, Warning, TEXT("Warning in ObjectPoolNode::SearchForNodeWithData() : object being searched for isn't in list"));
		return nullptr;
	}
	else if (this->data == newData)
	{
		return this;
	}
	//recursive call
	objectSelected = true;
	ObjectPoolNode* tempHolder = GetNextNode()->SearchForNodeWithData(newData);
	objectSelected = false;
	return tempHolder;
}

ObjectPoolNode::~ObjectPoolNode()
{
}
