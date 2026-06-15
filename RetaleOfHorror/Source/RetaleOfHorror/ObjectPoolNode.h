// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
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
	ObjectPoolNode(UObject* data);
	ObjectPoolNode(ObjectPoolNode* nextNode, UObject* data);
	//destructor
	~ObjectPoolNode();
	//get next node
	ObjectPoolNode* GetNextNode();
	//get previous node
	ObjectPoolNode* GetPreviousNode();
	//get next unused node
	ObjectPoolNode* GetNextNodeNotInUse();
	//count how many objects are in pool
	int ObjectCount();
	//insert new node
	void NewNode(UObject* data);
	//delete node
	void DeleteNode();
	//using object
	void ChangeObjectInUse(bool inUse);
	//delete linked list
	void DeleteList();
};
