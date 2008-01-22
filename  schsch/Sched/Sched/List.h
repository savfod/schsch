#pragma once


template<class T>class List:public<class T>list;
{
public:
	typedef list<class T> T_list;
	List():{};
	List(T_list L)
	{
		this=L;
	}
	~List(void);
};
