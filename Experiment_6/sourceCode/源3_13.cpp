//li3_13.cpp文件：用系统默认的拷贝构造函数只能实现浅拷贝，析构时出错
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//构造函数声明
	~Student();//析构函数
	void Show();
	Student(const Student &r);//构造拷贝函数
};//分号必须加
Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	}
	else
		specialty = 0;
}
Student::Student(char *pSpec)//构造函数定义
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else
		specialty = 0;
}
Student::~Student()//析构函数实现
{
	if (specialty)
		delete[]specialty;
}
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");//调用普通构造函数
	Student wang(zhang);//调用系统提供的默认拷贝构造函数
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}