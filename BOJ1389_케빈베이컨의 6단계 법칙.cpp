#include <iostream>
#include <queue>
#define INF  99999

using namespace std;

int arr[101][101];
int N, M;

void Floyd() {

	for (int k = 1; k < N + 1; k++)
		for (int i = 1; i < N + 1; i++)
			for (int j = 1; j < N + 1; j++) {
				if (arr[i][k] + arr[k][j] < arr[i][j])
					arr[i][j] = arr[j][i] = arr[i][k] + arr[k][j];
			}

}


int main()
{
    
	int num1, num2;
	int min = INF, ans =0;

	cin >> N >> M;

	for (int i = 0; i < N + 1; i++)
		for (int j = 0; j < N + 1; j++)
			if (i == j) arr[i][j] = 0;
			else arr[i][j] = INF;
			
	for (int i = 1; i < M + 1; i++) {

		cin >> num1 >> num2;

		arr[num1][num2] = 1;
		arr[num2][num1] = 1;

	}
	
	Floyd();


	for (int i = 1; i < N + 1; i++) {
		int temp = 0;
		for (int j = 1; j < N + 1; j++) {
			temp += arr[i][j];
		}
		if (temp < min) {
			min = temp;
			ans = i;
		}
	}

	cout << ans << endl;



	
	return 0;
}

