//li3_13.cpp�ļ�����ϵͳĬ�ϵĿ������캯��ֻ��ʵ��ǳ����������ʱ����
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//���캯������
	~Student();//��������
	void Show();
	Student(const Student &r);//���쿽������
};//�ֺű����
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
Student::Student(char *pSpec)//���캯������
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else
		specialty = 0;
}
Student::~Student()//��������ʵ��
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
	Student zhang("computer");//������ͨ���캯��
	Student wang(zhang);//����ϵͳ�ṩ��Ĭ�Ͽ������캯��
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}