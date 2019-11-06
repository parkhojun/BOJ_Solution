#include <iostream>

using namespace std;

int R, C, res=0;
char graph[10000][500];
int dx[] = { 1,1,1 };
int dy[] = { -1,0,1 };

int dfs(int x, int y) {

	graph[y][x] = 'x';
	if (x == C - 1) return 1;
	for (int i = 0; i < 3; i++) {


		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= C || ny >= R || graph[ny][nx] == 'x') continue;
		if (dfs(nx, ny) == 1) return 1;
	}


	return 0;
}

int main()
{
    
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++)
		{
			cin >> graph[i][j];
		}
	}

	for (int i = 0; i < R; i++) { res += dfs(0, i); }

	cout << res << endl;


}
