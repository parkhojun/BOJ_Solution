#include <iostream>
#include <cstdio>
#include <algorithm>




int arr[501][501];
int arr2[100] = { 0, };
int n, m;
int num2 = 0;
int cnt = 0;
int label = 0;

using namespace std;

bool desc(int a, int b);

void dfs(int i, int j, int label);


int main() {

	scanf("%d", &n);
	scanf("%d", &m);
	int num;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {

			scanf("%d", & num);
			if (num == 1) { arr[i][j] = -1; }
			else {	arr[i][j] = 0;	}
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {

			if (arr[i][j] == -1) {	dfs(i, j, label);	label++;	}

			arr2[num2] = cnt;	cnt = 0;	num2++;

		}

	}

	sort(arr2, arr2 + num2, desc);

	printf("%d\n", label);
	printf("%d\n", arr2[0]);
	
}

bool desc(int a, int b) { return a > b; }
void dfs(int i, int j, int label) {


	if (i < 0 || j < 0 || n < i || m < j) return;
	if (arr[i][j] == -1) {

		arr[i][j] = label;
		cnt++;
		dfs(i, j + 1, label);
		dfs(i, j - 1, label);
		dfs(i - 1, j, label);
		dfs(i + 1, j, label);

	}
	else return;

}
