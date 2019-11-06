#include <iostream>
#include <string>

using namespace std;

int main()
{
	string N;
	int F,tmp;
	cin >> N;
	cin >> F;
	string n = N.substr(N.length() - 2, N.length());
	int a = stoi(N); int b = stoi(n);
	for (int i = (a - b);i <= 20000000000;i++) {
		if (i % F == 0) {
			tmp = i;
			break;
		}
	}
	string Z = to_string(tmp);
	string z = Z.substr(Z.length() - 2, Z.length());
	cout << z;
}

