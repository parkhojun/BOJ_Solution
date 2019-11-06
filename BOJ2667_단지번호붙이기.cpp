#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#define MAX_NUM 100

using namespace std;

char map[MAX_NUM][MAX_NUM];
int Complex[MAX_NUM] = { 0 };
int N, cnt = 0;

int dfs(int i, int j)
{
	if ((i < 0) || (j < 0) || (i >= N) || (j >= N) || (map[i][j] != '1')) return 0;
	cnt++;
	map[i][j] = '0';
	dfs(i - 1, j); dfs(i + 1, j); dfs(i, j - 1); dfs(i, j + 1);
}
int main(void)
{
	cin>> N;
	int i, j, k;
	for (i = 0; i<N; i++)	cin>>map[i];
	for (k = (i = 0); i<N; i++)
	{
		for (j = 0; j<N; j++)
		{
			if (map[i][j] == '1')
			{
				cnt = 0;
				dfs(i, j);
				Complex[k++] = cnt;
			}
		}
	}
	sort(Complex, Complex + k);
	cout << k << endl;
	for (i = 0; i < k; i++)
		cout <<Complex[i]<< endl;
}

