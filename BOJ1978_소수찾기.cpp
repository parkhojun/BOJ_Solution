// 1987 소수찾기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>

using namespace std;
bool *PrimeArray;

void Eratos(int n)
{
	
	if (n <= 1) return;

	PrimeArray = new bool[n + 1];


	for (int i = 2; i <= n; i++)
		PrimeArray[i] = true;

	PrimeArray[0] = false;
	PrimeArray[1] = false;

	for (int i = 2; i* i <= n; i++){

		if (PrimeArray[i]) {
			for (int j = i * 2; j <= n; j += i)
				PrimeArray[j] = false;
		}
	}

}


int main()
{
	int N;
	int cnt = 0;

	cin >> N;

	int *arr = new int[N];

	for (int i = 0; i < N; i++) 	cin >> arr[i];

	Eratos(1000);

	for (int i = 0; i < N; i++) {
		if (PrimeArray[arr[i]]) cnt++;
	}
	
	cout << cnt;

}



