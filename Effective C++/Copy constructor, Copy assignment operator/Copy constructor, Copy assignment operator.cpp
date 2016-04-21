// Copy constructor, Copy assignment operator.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class Widget
{
public:
	Widget();								// 기본 생성자
	Widget(const Widget& rhs);				// 복사 생성자
	Widget& operator=(const Widget& rhs);	// 복사 대입 연산자
};

bool hasAcceptableQuality(Widget w);

int _tmain(int argc, _TCHAR* argv[])
{
	Widget w1;		// 기본 생성자 호출
	Widget w2(w1);	// 복사 생성자 호출

	w1 = w2;		// 복사 대입연산자 호출

	Widget w3 = w2;	// 복사 생성자 호출

	Widget aWidget;
	if (hasAcceptableQuality(aWidget))	//복사 생성자 호출(pass - by - value)

		return 0;
}