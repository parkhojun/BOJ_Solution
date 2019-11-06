#include <iostream>
using namespace std;



int SugarCalc(int sugar) {


	int cnt = 0;

	while (1) {

		if (sugar % 5 == 0)
		{
			cnt += sugar / 5;
			return cnt;
		}
		else if (sugar < 0) {
			return cnt = -1;
			
		}
		else { sugar -= 3;cnt++; }
	}
}

int main(void) {

	int input = 0;

	cin >> input;
	cout << (SugarCalc(input));


}
