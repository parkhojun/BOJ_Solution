#include <iostream>

using namespace std;

int main()
{

	int T, H, W, N;
	int n = 0;

	cin >> T;


	while (T--) {


		cin >> H >> W >> N;

		if (N % H != 0) n = n + N % H * 100;
		else  n = n + ((H * 100) - 1);
		n = n + ((N / H) + 1);

		cout << n << endl;
		
		n = 0;


	}

     
}
