#include <iostream>

using namespace std;

int main()
{
	int N;
	int x[50], y[50];
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0;i < N;i++) {
		int k = 1;
		for (int j = 0;j < N;j++) {
			if ((x[i] < x[j]) && (y[i] < y[j])) k++; 
		}
			cout << k << ' ';
	}
}
