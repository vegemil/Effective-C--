// Effective C++.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

class A
{
public:
	A(){}
};

class B
{
public:
	explicit B(int x = 0, bool b = true){}
};

class C
{
public:
	explicit C(int x){};
};

int _tmain(int argc, _TCHAR* argv[])
{
	B bObj1;
	doSomething(bObj1);

	B bObj2(28);
	doSomething(28);
	doSomething(B(28));
	return 0;
}

void doSomething(B bObject){}