#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
vector<int> v;

int find_happy_num(int input) {

	
	int result = 0; 

	if (input == 1) { return 1; }

	
	for (vector<int>::size_type i = 0; i < v.size(); i++) 
		if (input == v[i]) { return 0; }
	
	v.push_back(input);

	while (input >= 1) {
		result += (input % 10) * (input % 10);
		input /= 10;
		
	}
	find_happy_num(result);
}

int main()
{
 
	//int T;
	//cin >> T;

	//while (T--) {

		int input = 0;
		cin >> input;
		v.clear();

		int get_res = find_happy_num(input);

		if (get_res == 1) { cout << "HAPPY" << endl; }
		else cout << "UNHAPPY" << endl;
		
	//}



}

