// backjoon2839.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
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
		else if (sugar % 5 != 0) {
			sugar -= 3;cnt++;
		}
		else { return cnt = -1; }
	}
}

int main(void) {

	int input = 0;

	cin >> input;
	cout << (SugarCalc(input));


}