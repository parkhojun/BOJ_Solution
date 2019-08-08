// 9461번 - 파도반수열.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
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