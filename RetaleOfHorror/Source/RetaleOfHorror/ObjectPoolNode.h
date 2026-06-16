// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
//a node for a circularly linked list of objects in an object pool, WARNING: performing multiple operations on this linked list simultaneously will cause errors due to list not being able to track what has been searched
class RETALEOFHORROR_API ObjectPoolNode
{
//variables
private:
	UObject* data;
	ObjectPoolNode* nextNode;
	//if the object is being used in the scene
	bool objectInUse;
	//if the object has already been selected by an operation (for internal use only)
	bool objectSelected;

//methods
public:
	//constructor 
	ObjectPoolNode();
	ObjectPoolNode(UObject* newData);
	ObjectPoolNode(ObjectPoolNode* nextNode, UObject* data);
	//destructor
	~ObjectPoolNode();
	
	//get next node
	ObjectPoolNode* GetNextNode(); 
	//get next unused node
	ObjectPoolNode* GetNextNodeNotInUse();
	//count how many objects are in pool
	int ObjectCount();
	//insert new node in after current node
	void NewNode(UObject* newData);
	//delete the node after this node, this does not delete the data it is pointing to
	void DeleteNextNode();
	//delete this node, return if it was successful
	bool DeleteThisNode();
	//delete linked list
	void DeleteList();
	//change if using object based on bool parameter
	void ChangeObjectInUse(bool inUse);
	//search for item with pointer to node
	ObjectPoolNode* SearchForNodeWithPointer(ObjectPoolNode* pointer);
	//search for item with pointer to data
	ObjectPoolNode* SearchForNodeWithData(UObject* newData);
};
