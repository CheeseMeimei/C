#include<iostream>

using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age=age;//1.解决名称冲突 
	}
	int getage()
	{
		return age;
	}
	void func() const
	{
		//age=100;//错误，因为加了const表示指针指向的值不可以修改 
		age1=100;//正确，即使加了const但是加了mutable关键字就可以改了，见28 
	}
	Person & PersonAddAge(const Person & p)
	{
		this->age+=p.age;
		return *this;
	}

	int age;
	mutable int age1; 
};

void test01()
{
	Person p(18);
	Person p1(10);
	p1.PersonAddAge(p).PersonAddAge(p).PersonAddAge(p);
	cout<<"p1的年龄为："<<p1.getage();
	//常对象
	const Person p2(18);
	//p2.age=100;//错误 p1是常对象，属性不可以被修改
	p2.age1=100;//正确，age1加了mutable关键字，可修改
	//常对象只能调用常函数
	p2.func(); //正确
	p2.getage(); 
}

int main()
{
	test01();
	return 0;
 } 
