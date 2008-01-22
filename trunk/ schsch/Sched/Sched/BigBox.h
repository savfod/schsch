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

	~BigBox(void);
};
