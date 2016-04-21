// undefined behavior.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

#include <vld.h>

class Foo {};

int main()
{
	Foo* p[4];

	for (int i = 0; i < 4; ++i)
	{
		p[i] = new Foo();
	}

	// ..much later..
	delete p;
	return 0;
}