// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolNode.h"

ObjectPoolNode::ObjectPoolNode()
{
	data = nullptr;
	nextNode = nullptr;
	objectInUse = false;
	objectSelected = false;
}

ObjectPoolNode::ObjectPoolNode(UObject* data)
{
	this->data = data;
	nextNode = nullptr;
	objectInUse = false;
	objectSelected = false;
}

ObjectPoolNode::ObjectPoolNode(ObjectPoolNode* nextNode, UObject* data)
{
	this->data = data;
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
void ObjectPoolNode::NewNode(UObject* data)
{

}

ObjectPoolNode::~ObjectPoolNode()
{
}
