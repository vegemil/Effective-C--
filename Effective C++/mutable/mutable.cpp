#include <iostream>

class cTextBlock{
public:
	std::size_t length() const;
	cTextBlock(char* text){ pText = text; }

	void setText(char* text){ pText = text; }

private:
	char* pText;

	mutable std::size_t textlength;
	mutable bool lengthIsValid;
};

std::size_t cTextBlock::length() const{
	if (lengthIsValid == false)
	{
		textlength = std::strlen(pText);		//원래대로라면 숫자를 변경할 수 없음 안에서는 다 const 변수여야 하기 때문
		lengthIsValid = true;
	}

	return textlength;
}

int main()
{
	cTextBlock text = cTextBlock("Hello");
	std::cout << "size : " << text.length() << std::endl;
}

class Uncopyable{
protected:
	Uncopyable(){}
	~Uncopyable(){}

private:
	Uncopyable(const Uncopyable&);
	Uncopyable& operator= (const Uncopyable&);
};

class HomeForSale : private Uncopyable
{
};