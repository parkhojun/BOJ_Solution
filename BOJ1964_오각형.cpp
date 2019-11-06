#include <iostream>
#include <cstdio>



int main()
{	

		long long N, r;
		scanf("%d", &N);

		r = 1 + 4 * N + 3 * N * (N - 1) / 2;
		r %= 45678;

		printf("%d\n", r);

}

