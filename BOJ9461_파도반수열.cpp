#include <iostream>

using namespace std;

int main()
{
    long long int T, N;
	long long int A[100];

	for (int i = 0; i < 100; i++) {

		if (i < 3)
			A[i] = 1;
		else
			A[i] = A[i - 2] + A[i - 3];

	}

	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> N;
		cout << A[N-1] << endl;
	}

}
