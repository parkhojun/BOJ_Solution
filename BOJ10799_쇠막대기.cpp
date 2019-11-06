#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int bong = 0;
	int raiser = 0;

	string input;
	cin >> input;

	
	int length = input.length();
	for(int i=0; i<length ; i ++)
	{
	
	if(input[i] =='('){bong++;}
	else {
		bong --;
		if(input[i-1] == ')')
		{raiser++;}
		else {raiser+=bong;}
	} 
	


	}


	cout << raiser;


 
}
