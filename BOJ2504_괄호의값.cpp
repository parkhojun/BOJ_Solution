#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int res = 0;
	int sum = 0;
	int top;
	bool flag = false;
	stack <int> s;
	string str;

	cin >> str;

	
	for (int i = 0;i < str.length();i++) {

		if (str[i] == '(' || str[i] == '[') { s.push(str[i]); }
		else if (str[i] == ')') {

			while (1) {

				if (s.empty()) {
					flag = true;
					break;
				}
				top = s.top();
				s.pop();

				if (top == '(') {
					if (sum == 0) {
						sum = 1;
					}
					s.push(sum * 2);
					sum = 0;
					break;
				}
				else if (top == '[') {
					flag = true;
					break;
				}
				else {
					sum += top;
				}
			}

		}
		

		else if (str[i] == ']') {

			while (1) {

				if (s.empty()) {
					flag = true;
					break;
				}
				top = s.top();
				s.pop();

				if (top == '[') {
					if (sum == 0) {
						sum = 1;
					}
					s.push(sum * 3);
					sum = 0;
					break;
				}
				else if (top == '(') {
					flag = true;
					break;
				}
				else {
					sum += top;
				}
			}

		}

	}

	while (!s.empty()) {
		if (s.top() == '(' || s.top() == ')' || s.top() == '[' || s.top() == ']')
        { flag = true; break; }
		top = s.top();
		res += top;
		s.pop();
	}

	if (flag) cout << 0 << endl;
	else cout << res << endl;

}


