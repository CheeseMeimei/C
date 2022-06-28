#include<iostream>
using namespace std;
class Student{
int sno;
int age;
void printStu ();
void setSno (int d);
}; 
void printStu ()
{ cout<< "\nSno is"<<sno<<","
Cout<<"age is"<< age<< ". "<<endl;
}
void setSno (int s)
{ sno=s;
}
void setAge (int a)
{ age=a;
}
int main ()
{ Student lin;
lin.setSno (20021);
lin.setAge (20);
lin.printStu ();
}
