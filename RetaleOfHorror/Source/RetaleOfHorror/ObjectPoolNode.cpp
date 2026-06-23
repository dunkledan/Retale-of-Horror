// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolNode.h"

template <typename T> TObjectPoolNode<T>::TObjectPoolNode()
{
	Data = nullptr;
	NextNode = this;	//if this is the only node in list point to self, this allows circular methods to still run without changes
	ObjectInUse = false;
	ObjectSelected = false;
}

template <typename T> TObjectPoolNode<T>::TObjectPoolNode(T* NewData)
{
	Data = NewData;
	NextNode = this;
	ObjectInUse = false;
	ObjectSelected = false;
}

template <typename T> TObjectPoolNode<T>::TObjectPoolNode(TObjectPoolNode<T>* NextNode, T* NewData)
{
	Data = NewData;
	this->NextNode = NextNode;
	ObjectInUse = false;
	ObjectSelected = false;
}

template <typename T> TObjectPoolNode<T>* TObjectPoolNode<T>::GetNextNode()
{
	return NextNode;
}

template <typename T> TObjectPoolNode<T>* TObjectPoolNode<T>::GetNextNodeNotInUse()
{
	//recursively search through list until you find a node already searched or node you are looking for
	if (ObjectSelected == true)	//if node's already been selected, break condition 1
	{
		return nullptr;
	}
	if (ObjectInUse == false)	//if not being used return self, break condition 2
	{
		return this;
	}
	ObjectSelected = true;
	TObjectPoolNode* tempHolder = GetNextNode()->GetNextNodeNotInUse();	//search next node
	ObjectSelected = false;
	return tempHolder;
	
}

template <typename T> int TObjectPoolNode<T>::ObjectCount()
{
	//use a recursive loop to count how many objects are in the list
	if (ObjectSelected == true)	//if node has already been selected, break condition 
	{
		return 0;
	}
	ObjectSelected = true;
	int count = GetNextNode()->ObjectCount() + 1;
	ObjectSelected = false;
	return count;
}

//insert new node in after current node
template <typename T> void TObjectPoolNode<T>::NewNode(T* NewData)
{
	//create new node after this one 
	//pointer = this nodes pointer
	TObjectPoolNode<T>* newNode = new TObjectPoolNode<T>(NextNode, NewData);
	//this nodes pointer = to new node
	NextNode = newNode;
}

//delete the node after this node, this does not delete the data it is pointing to
template <typename T> void TObjectPoolNode<T>::DeleteNextNode()
{
	TObjectPoolNode* newNextNode = GetNextNode()->GetNextNode();	//the nextNode of the node to be deleted
	delete GetNextNode(); //delete next node
	NextNode = newNextNode; //set new next node
}

//delete this node, return if it was successful
template <typename T> bool TObjectPoolNode<T>::DeleteThisNode()
{
	//search for node pointing to this one
	TObjectPoolNode* previousNode = SearchForNodeWithPointer(this);
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
template <typename T> void TObjectPoolNode<T>::DeleteList()
{
	//make recursive function that backtracks and deletes stuff
}

template <typename T> void TObjectPoolNode<T>::ChangeObjectInUse(bool InUse)
{
	ObjectInUse = InUse;
}

template <typename T> T* TObjectPoolNode<T>::GetData()
{
	return Data;
}

//search for item with pointer to node
template <typename T> TObjectPoolNode<T>* TObjectPoolNode<T>::SearchForNodeWithPointer(TObjectPoolNode<T>* Pointer)
{
	if (ObjectSelected == true) //if object has already been searched
	{
		//throw warning for object can't be found in list
		UE_LOG(LogTemp, Warning, TEXT("Warning in ObjectPoolNode::SearchForNodeWithPointer() : object being searched for isn't in list"));
		return nullptr;
	}
	else if (NextNode == nullptr)
	{
		//throw error for item in circular linked list with nullptr
		UE_LOG(LogTemp, Error, TEXT("ERROR in ObjectPoolNode::SearchForNodeWithPointer() : nextNode is nullptr"));
		return nullptr;
	}
	else if (Pointer == NextNode)
	{
		return this;
	}
	//recursive call
	ObjectSelected = true;
	TObjectPoolNode* tempHolder = GetNextNode()->SearchForNodeWithPointer(Pointer);
	ObjectSelected = false;
	return tempHolder;
}

//search for item with pointer to data
template <typename T> TObjectPoolNode<T>* TObjectPoolNode<T>::SearchForNodeWithData(T* NewData)
{
	if (ObjectSelected == true) //if object has already been searched
	{
		//throw warning for object can't be found in list
		UE_LOG(LogTemp, Warning, TEXT("Warning in ObjectPoolNode::SearchForNodeWithData() : object being searched for isn't in list"));
		return nullptr;
	}
	else if (this->Data == NewData)
	{
		return this;
	}
	//recursive call
	ObjectSelected = true;
	TObjectPoolNode* TempHolder = GetNextNode()->SearchForNodeWithData(NewData);
	ObjectSelected = false;
	return TempHolder;
}

template <typename T> TObjectPoolNode<T>::~TObjectPoolNode()
{
}
