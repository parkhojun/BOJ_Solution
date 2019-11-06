#include <iostream>
#include <queue>

using namespace std;

int N, M, V;
bool visited[1001] = { false, };
bool visited2[1001] = { false, };
int arr[1001][1001] = { 0, };

void dfs(int i) {

	if (!visited[i]) {

		visited[i] = true;
		cout << i << ' ';

		for (int j = 1;j < N + 1;j++) {

			if (arr[i][j] == 1 && visited[j] == false)
				dfs(j);

		}
	}

}

void bfs(int i) {

	queue <int> q;
	int front;

	q.push(i);
	visited2[i] = true;
	

	while (!q.empty()) {

	
		front = q.front();
		q.pop();
		cout << front << ' ';
	

		for (int j = 1;j < N + 1;j++) {

			if (visited2[j] == false && arr[front][j] == 1) {
				q.push(j);
				visited2[j] = true;

			}

		}

	}

}


int main()
{
	int num1, num2;

	cin >> N >> M >> V;

	for (int i = 1;i < M + 1;i++) {

		cin >> num1 >> num2;

		arr[num1][num2] = 1;
		arr[num2][num1] = 1;

	}

	dfs(V);
	cout << endl;
	bfs(V);

}
