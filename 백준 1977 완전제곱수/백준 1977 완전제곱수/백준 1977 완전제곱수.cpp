// 백준 1977 완전제곱수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <cstdio>
int main()
{
	int M, N = 0;
	int cnt = 1;
	int tmp = 0;
	
	int arr[1000] = { 0, };
	scanf_s("%d %d",&M , &N);
	for (int i = 1;i <= 10000;i++) {
		if ((i*i >= M) && (i*i <= N)) {
			tmp += i * i;
			arr[cnt] = i * i;
			cnt++;
		}
	}
	if(cnt==1) printf("%d\n", -1);
	else {
		printf("%d\n", tmp);
		printf("%d\n", arr[1]);
	}
}
