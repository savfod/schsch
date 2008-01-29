#include "BigBox.h"

BigBox::BigBox(void)
{
}

int BigBox::groups()
{
	return 0;
};

SimpleBox BigBox::operator[](int i)
{
	return(SimpleBox());
};


BigBox::~BigBox(void)
{
}
