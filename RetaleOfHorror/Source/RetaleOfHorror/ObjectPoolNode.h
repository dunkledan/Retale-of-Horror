// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
//a node for a circularly linked list of objects in an object pool, WARNING: performing multiple operations on this linked list simultaneously will cause errors due to list not being able to track what has been searched
template <typename T> class RETALEOFHORROR_API TObjectPoolNode
{
//variables
private:
	T* Data;
	TObjectPoolNode* NextNode;
	//if the object is being used in the scene
	bool ObjectInUse;
	//if the object has already been selected by an operation (for internal use only)
	bool ObjectSelected;

//methods
public:
	//constructor 
	TObjectPoolNode();
	TObjectPoolNode(T* NewData);
	TObjectPoolNode(TObjectPoolNode* NextNode, T* Data);
	//destructor
	~TObjectPoolNode();
	
	//get next node
	TObjectPoolNode* GetNextNode(); 
	//get next unused node
	TObjectPoolNode* GetNextNodeNotInUse();
	//count how many objects are in pool
	int ObjectCount();
	//insert new node in after current node
	void NewNode(T* NewData);
	//delete the node after this node, this does not delete the data it is pointing to
	void DeleteNextNode();
	//delete this node, return if it was successful
	bool DeleteThisNode();
	//delete linked list
	void DeleteList();
	//change if using object based on bool parameter
	void ChangeObjectInUse(bool InUse);
	//get the pointer to the data in the node
	T* GetData();
	//search for item with pointer to node
	TObjectPoolNode* SearchForNodeWithPointer(TObjectPoolNode* Pointer);
	//search for item with pointer to data
	TObjectPoolNode* SearchForNodeWithData(T* NewData);
};
