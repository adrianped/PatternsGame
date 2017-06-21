#pragma once
#include "DynamicArray.h"

template <typename T>
class Stack
{
public:

	Stack()
	{
	}
	~Stack()
	{
	}

	bool empty()
	{
		return s.empty();
	}
	
	int size()
	{
		return s.GetSize();
	}

	void push(T value)
	{
		s.PushBack(value);
	}

	T pop()
	{
		return s.PopBack();
	}

	T top()
	{
		return s.back();
	}

	void Clear()
	{
		s.Clear();
	}

	DynamicArray<T> s;
};