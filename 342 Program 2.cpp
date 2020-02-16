#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
	//local variables
	Stack stack;
	string inputString;
	string leftBrackets = "[{(";
	string rightBrackets = "]})";
	while(inputString != "done")
	{
		cout << "\nEnter string to check if brackets are balanced (typing done exits).\n";
		getline(cin, inputString);

		if(inputString == "")
		{
			cout << "\n" << inputString << " is balanced\ntrue";
		}

		if(inputString.length() == 1 && (leftBrackets.find(inputString) != string::npos || rightBrackets.find(inputString) == string::npos))
		{
			cout << "\n" << inputString << " is unbalanced\nfalse";
		}
		else
		{
			for(char i : inputString)
			{
				if(leftBrackets.find(i) != string::npos)
				{
					stack.push(i);
				}
				if(rightBrackets.find(i) != string::npos && rightBrackets.find(i) == leftBrackets.find(stack.top()))
				{
					stack.pop();
				}
			}

			if(stack.isEmpty())
			{
				cout << "\n" << inputString << " is balanced\ntrue";
			}
			else
			{
				cout << "\n" << inputString << " is unbalanced\nfalse";
			}
			inputString.clear();
			while(!stack.isEmpty())
			{
				stack.pop();
			}
		}
	}

}
