#pragma once

#include "CoreMinimal.h"

template<typename T>
class RETALEOFHORROR_API TObjectPoolNode
{
private:
	T* Data;
	TObjectPoolNode* NextNode;
	bool ObjectInUse;
	bool ObjectSelected;

public:
	TObjectPoolNode();
	TObjectPoolNode(T* NewData);
	TObjectPoolNode(TObjectPoolNode* NextNode, T* Data);

	~TObjectPoolNode();

	TObjectPoolNode* GetNextNode();
	TObjectPoolNode* GetNextNodeNotInUse();

	int ObjectCount();

	void NewNode(T* NewData);
	void DeleteNextNode();
	bool DeleteThisNode();

	void DeleteList();

	void ChangeObjectInUse(bool InUse);

	T* GetData();

	TObjectPoolNode* SearchForNodeWithPointer(TObjectPoolNode* Pointer);
	TObjectPoolNode* SearchForNodeWithData(T* NewData);
};


// MOVE ALL IMPLEMENTATIONS HERE ↓↓↓

template<typename T>
TObjectPoolNode<T>::TObjectPoolNode()
{
	Data = nullptr;
	NextNode = this;
	ObjectInUse = false;
	ObjectSelected = false;
}

template<typename T>
TObjectPoolNode<T>::~TObjectPoolNode()
{
}