// Fold expression.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

constexpr int integer2 = 2;
constexpr int startNumber = integer2 + 1;

template <typename... Args>
constexpr int Factorial(Args... args)
{
	int result = (args + ... + 1);
	return result;
}

int main(int argc, const char * argv[])
{
	int arrayWithFactorial[Factorial(startNumber)];

	printf("%d\n", Factorial(startNumber));

	return 0;
}