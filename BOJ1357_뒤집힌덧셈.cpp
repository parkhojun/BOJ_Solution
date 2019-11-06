#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
	string X, Y;
	cin >> X;
	cin >> Y;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());
	
	int a = stoi(X) + stoi(Y);

	string Z = to_string(a);

	reverse(Z.begin(), Z.end());

	int b = stoi(Z);

	printf("%d", b);


}
