#include <iostream>
#include <algorithm>

using namespace std;

bool asc(int a, int b) { return a < b; }
bool desc(int a, int b) { return a > b; }

int main()
{
	int N;
	int sum = 0;
	
	cin >> N;

	int *A = new int[N];
	int *B = new int[N];

	for (int i = 0; i < N; i++) 	cin >> A[i];


	for (int i = 0; i < N; i++) 	cin >> B[i];


	sort(A, A+N, asc);
	sort(B, B+N, desc);  



	for (int i = 0; i < N; i++) { sum += A[i] * B[i]; }


	cout << sum << endl;


}

