#include<iostream>

using namespace std;

class Basepage
{
public:
	void head()
	{
		cout<<"-----------------------"<<endl;
		cout<<"公共头部"<<endl;
	}
	void foot()
	{
		cout<<"公共底部"<<endl;
	}
	void left()
	{
		cout<<"公共左端"<<endl;
	}
};

class CPP:public Basepage
{
public:
	void content()
	{
		cout<<"CPP教学视频"<<endl;
	}
};

class python:public Basepage
{
public:
	void content()
	{
		cout<<"python教学视频"<<endl;
	}
};

class Java:public Basepage
{
public:
	void content()
	{
		cout<<"Java教学视频"<<endl;
	}
};

void test01()
{
	CPP cp;
	cp.head();
	cp.foot();
	cp.left();
	cp.content();
	Java ja;
	ja.head();
	ja.foot();
	ja.left();
	ja.content();
	python py;
	py.head();
	py.foot();
	py.left();
	py.content();
}

int main()
{
	test01();
	return 0;
}
