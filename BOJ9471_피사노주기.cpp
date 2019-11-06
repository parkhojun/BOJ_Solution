#include <iostream>
#include <cstdio>


int main()
{
	int P,B,M,T= 0;
	int arr[1000000] = { 0, };
	int arr2[1000] = { 0, };
	scanf("%d", &P);
	arr[0] = 1;arr[1] = 1;
	for (int i = 0;i < P;i++) {
		scanf("%d %d", &B, &M);
		for (int j = 2;;j++) {
			arr[j] = ((arr[j - 2] % M) + (arr[j - 1] % M) % M);
			if (arr[j - 1] == 1 && arr[j] == 1) {
				break;
			}
			T++;
		}
		arr2[i] = T;
		T = 0;
	}
	for (int k = 0;k < P;k++) {
		printf("%d %d\n", k+1, arr2[k]+1);
	}

}

