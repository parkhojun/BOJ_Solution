// baekjoon1629곱셈.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <cstdio>
#include <cmath>


int main()
{
	int Num1, Num2, Num3 = 0;
	scanf_s("%d", &Num1);
	scanf_s("%d", &Num2);
	scanf_s("%d", &Num3);
	
	double sum = pow(Num1, Num2);
	long long res = (long long)sum % Num3;
	printf("%d", res);

}