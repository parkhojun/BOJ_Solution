

#include "pch.h"
#include <iostream>
#include <cstdio>


using namespace std;



int ZeroCalc(int a) {

	int cnt = 0;

	while (a!=0) {

		a /= 5;
		cnt += a;

	}

	return cnt;
}





int main(void)
{
	int Input, TestCase;
	int arr[100000];

	//cin >> TestCase;
	scanf_s("%d", &TestCase);
	for (int i = 0; i < TestCase;i++) {
		//cin >> Input;
		scanf_s("%d", &Input);
		arr[i] = ZeroCalc(Input);

	}
	for (int j = 0; j < TestCase;j++) {
		//cout << arr[j] << endl;
		printf("%d\n", arr[j]);

	}
}

