#include<iostream>

using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age=age;//1.������Ƴ�ͻ 
	}
	int getage()
	{
		return age;
	}
	void func() const
	{
		//age=100;//������Ϊ����const��ʾָ��ָ���ֵ�������޸� 
		age1=100;//��ȷ����ʹ����const���Ǽ���mutable�ؼ��־Ϳ��Ը��ˣ���28 
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
	cout<<"p1������Ϊ��"<<p1.getage();
	//������
	const Person p2(18);
	//p2.age=100;//���� p1�ǳ��������Բ����Ա��޸�
	p2.age1=100;//��ȷ��age1����mutable�ؼ��֣����޸�
	//������ֻ�ܵ��ó�����
	p2.func(); //��ȷ
	p2.getage(); 
}

int main()
{
	test01();
	return 0;
 } 
