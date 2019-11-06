#include <iostream>
#include <string>

using namespace std;

int main()
{

	string A,B;
	cin >> A;
	cin >> B;

	for (int i = 0;i < A.length();i++) {
		if (A[i] == '5') { A[i]='6'; }
	}
	for (int j = 0;j < B.length();j++) {
		if (B[j] == '5') { B[j]='6'; }
	}

	int a = stoi(A) + stoi(B);

	for (int i = 0;i < A.length();i++) {
		if (A[i] == '6') { A[i] = '5'; }
	}
	for (int j = 0;j < B.length();j++) {
		if (B[j] == '6') { B[j] = '5'; }
	}

	int b = stoi(A) + stoi(B);

	cout << b;
	cout << ' ';
	cout << a;

}


