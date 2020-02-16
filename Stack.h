#ifndef STACK_H
#define STACK_H

#include <vector>
using namespace std;

class Stack {
public:
		void push(const char& i);
		char pop();
		bool isEmpty();
		char top();


private:
		vector<char> stack;
};
#endif
