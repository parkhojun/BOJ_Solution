#include <iostream>
#include <cstdio>
int main()
{
	int M, N = 0;
	int cnt = 1;
	int tmp = 0;
	
	int arr[100] = { 0, };
	scanf("%d %d",&M , &N);
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

