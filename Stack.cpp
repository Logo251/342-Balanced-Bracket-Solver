#include "Stack.h"
#include <iostream>

using namespace std;

void Stack::push(const char& i)
{
	stack.push_back(i);
}

char Stack::pop()
{
	char returnMe = stack.back();
	stack.pop_back();
	return returnMe;
}

bool Stack::isEmpty()
{
	if(stack.size() == 0)
	{
		return true;
	}
	return false;
}

char Stack::top()
{
	return stack.back();
}
