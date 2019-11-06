#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n,n2,bid;
	int choo[32];
	int m[3] = { -1,0,1 };
	bool check[32][30001] = { 0, };
	check[0][15000] = 1;

	cin >> n;

	for (int i = 1; i <= n; i++) {	cin >> choo[i];	}

	for (int i = 1; i <= n; i++) {

		for (int j = 0; j < 3; j++) {

			for (int k = 0; k <= 30000; k++) {

				int tmp = choo[i] * m[j] + k;
				check[i][tmp] += check[i - 1][k]; 

			}

		}

	}


	cin >> n2;

	for (int i = 0; i < n2; i++) {

		cin >> bid;
		if (check[n][bid + 15000] == 1) cout << "Y" << " ";
		else cout << "N" << " ";

	}

	return 0;
}
