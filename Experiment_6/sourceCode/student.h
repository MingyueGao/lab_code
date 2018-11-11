#pragma once
// example3_26_student.h:学生类的定义
#ifndef _STUDENT //条件编译
#define _STUDENT
#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
#define SIZE 20
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20]; //专业
	int age;
public:
	Student(); //无参构造函数
	Student(char *na, char *id, char *num, char *spec, int ag); //带参构造函数
	Student(const Student &per); //拷贝构造函数
	~Student(); //析构函数
	char* GetName();
	char* GetID();
	char* GetNumber();
	char* Getspec();
	int Getage();
	void Display();
	void Input();
};
#endif