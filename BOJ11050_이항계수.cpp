#include <iostream>
#include <cstdio>

int fact(int n) {

	if (n <= 1) { return 1; }
	return n * fact(n - 1);
}


int main()
{
	int N, K, R, res = 0;
	scanf("%d %d", &N, &K);
	R = N - K;
	N = fact(N);
	K = fact(K);
	R = fact(R);
	res = N / (K*R);
	printf("%d", res);

}

