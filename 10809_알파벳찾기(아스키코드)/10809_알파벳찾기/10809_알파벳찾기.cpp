
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main(){

	string ss;
	int arr[26] = { -1, -1, -1, -1, -1,
					-1, -1, -1, -1, -1, 
					-1, -1, -1, -1, -1,
					-1, -1, -1, -1, -1,
					-1, -1, -1, -1, -1, -1 };
	int visited[26] = { 0, };
	int a1 = 'a';

	cin >> ss;

	for (int i = 0;i < ss.length();i++) {

		if (visited[(ss[i] % a1)] != 1) {
			arr[(ss[i] % a1)] = i;
			visited[(ss[i] % a1)] = 1;
		}

	}



	for (int i = 0;i < 26;i++) { cout<< arr[i] <<' ';	}


}
