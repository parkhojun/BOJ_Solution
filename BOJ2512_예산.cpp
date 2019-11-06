#include <iostream>
#include <cstdio>
#include <algorithm>


using namespace std;
void Search(long long M, int N, int sum, int low, int mid, int high);
int arr[10001];

int main()
{

	int N, n;
	long long M;
	int low =0 , high = 0, mid = 0, sum =0;

	cin >> N;

	for (int i = 0;i < N;i++) {
		
		scanf("%d", &n);
		arr[i] = n;
		sum += n;

	}

	sort(arr, arr + N);

	cin >> M;

	if (M <= sum) 
		Search(M, N, sum, low, mid, high);

	else 
		printf("%d",  arr[N - 1]);



}


void Search(long long M, int N, int sum, int low, int mid, int high) {

	low = 0;
	high = arr[N - 1];

	while (low <= high) {

		mid = (low + high) / 2;
		sum = 0;


		for (int i = 0;i < N;i++) {

			if (arr[i] < mid) 
				sum += arr[i];
			else
				sum += mid;
            
		}


		if (sum <= M)
			low = mid + 1;
		else
			high = mid - 1;

	}
	printf("%d", low - 1);

}

