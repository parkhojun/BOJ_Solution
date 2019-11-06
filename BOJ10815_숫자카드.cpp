#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{

	int sgcard[500000];
	int mycard[500000];
	int sgcnt = 0;
	int mycnt = 0;
	int tmp[500000] = { 0 };


    scanf("%d", &sgcnt);
	for (int i = 0; i < sgcnt; i++) {
		cin >> sgcard[i];
	}
	scanf("%d", &mycnt);
	for (int i = 0; i < mycnt; i++) {
		cin >> mycard[i];
	}

	sort(sgcard, sgcard+sgcnt);

	
	for (int i = 0; i < mycnt; i++) {
		if (binary_search(sgcard, sgcard + sgcnt, mycard[i])) {
			tmp[i] = 1;
		}
	}

	for (int i = 0; i < mycnt; i++) {
		printf("%d ", tmp[i]);
	}
	return 0;
}
