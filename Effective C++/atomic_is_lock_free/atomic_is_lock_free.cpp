// atomic_is_lock_free.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <memory>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int* p = new int(2);
	std::shared_ptr<int> sp(p);

	std::cout << (std::atomic_is_lock_free(&sp) ? "true" : "false");

	return 0;
}