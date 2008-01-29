#pragma once
#include"SimpleBox.h"
#include<vector>

using namespace std;

class BigBox
{
private:
	vector<SimpleBox> Box;
public:
	BigBox(void);

	int groups();

	SimpleBox BigBox::operator[](int i);

	~BigBox(void);
};

