

#include "pch.h"
#include <iostream>
#include <cstdio>
#define MAX 1000000

int main()
{
	int P,B,M,cnt= 0;
	int arr[MAX] = { 0, };
	int arr2[1000] = { 0, };
	scanf_s("%d", &P);
	arr[0] = 1;arr[1] = 1;
	for (int i = 0;i < P;i++) {
		scanf_s("%d %d", &B, &M);
		for (int j = 2;;j++) {
			arr[j] = ((arr[j - 2] % M) + (arr[j - 1] % M) % M);
			if (arr[j - 1] == 1 && arr[j] == 1) {
				break;
			}
			cnt++;
		}
		arr2[i] = cnt;
		cnt = 0;
	}
	for (int k = 0;k < P;k++) {
		printf("%d %d\n", k+1, arr2[k]+1);
	}

}

