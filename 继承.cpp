#include<iostream>

using namespace std;

class Basepage
{
public:
	void head()
	{
		cout<<"-----------------------"<<endl;
		cout<<"����ͷ��"<<endl;
	}
	void foot()
	{
		cout<<"�����ײ�"<<endl;
	}
	void left()
	{
		cout<<"�������"<<endl;
	}
};

class CPP:public Basepage
{
public:
	void content()
	{
		cout<<"CPP��ѧ��Ƶ"<<endl;
	}
};

class python:public Basepage
{
public:
	void content()
	{
		cout<<"python��ѧ��Ƶ"<<endl;
	}
};

class Java:public Basepage
{
public:
	void content()
	{
		cout<<"Java��ѧ��Ƶ"<<endl;
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
