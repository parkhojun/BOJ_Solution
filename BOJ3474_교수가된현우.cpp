#include <iostream>
#include <cstdio>



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
	scanf("%d", &TestCase);
	for (int i = 0; i < TestCase;i++) {
		scanf("%d", &Input); arr[i] = ZeroCalc(Input);
	}
	for (int j = 0; j < TestCase;j++)
		printf("%d\n", arr[j]);
}


