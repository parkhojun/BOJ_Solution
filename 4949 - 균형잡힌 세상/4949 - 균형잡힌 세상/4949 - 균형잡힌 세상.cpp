#include "pch.h"
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {


	string str;
	stack<int> s;
	
	

	while (1) {

		getline(cin, str);
		if (str.length() == 1 && str[0] == '.')	break;


		while (!s.empty())
			s.pop();

		bool flag = true;
		
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(')	s.push(1);
			else if (str[i] == '[')	s.push(2);
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == 1)	s.pop();
				else {	flag = false;	break;	}
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == 2)	s.pop();
				else {	flag = false;	break;	}
			}
		}
		if (flag && s.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}


	return 0;
}

