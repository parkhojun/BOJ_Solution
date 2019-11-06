#include <iostream>


using namespace std;

int main()
{
	int T,K;
	int Triangle_num[45] = { 0, };
	bool flag = 0;

	cin >> T;

	for (int i = 1; i <= 45; i++) { Triangle_num[i] = i * (i + 1) / 2; }

	while (T--) {

		cin >> K;
		for (int i = 1; i <=45; i++) {
			for (int j = 1; j <=45; j++) {
				for (int k = 1; k <= 45; k++) {
					if ((Triangle_num[i] + Triangle_num[j] + Triangle_num[k]) == K) {
						flag = 1;
					}
				}
			}
		}

		if (flag) { cout << flag << endl; }
		else { cout << flag << endl; }

		flag = 0;
	}


}
