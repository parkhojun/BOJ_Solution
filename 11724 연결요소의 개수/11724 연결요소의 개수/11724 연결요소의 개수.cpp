
#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> v;
bool visited[1001] = { false, };

void dfs(int i) {

	
	visited[i] = true;


		for (int j = 0; j < v[i].size(); j++) {

			if ( visited[ v[i][j] ] == false) {
				dfs(v[i][j]);
			}

		}


}



int main()
{

	int num1, num2, N, M;
	int cnt = 0;


	cin >> N >> M;
	v.resize(N + 1);

	for (int i = 1; i <= M; i++) {

		cin >> num1 >> num2;

		v[num2].push_back(num1);
		v[num1].push_back(num2);

	}

	for (int i = 1; i <= N ; i++) {
		
		if (visited[i] == false) {
			dfs(i);
			cnt++;
		}
	}
	
	cout << cnt;
}