#pragma once
// example3_26_student.h:ѧ����Ķ���
#ifndef _STUDENT //��������
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
	char speciality[20]; //רҵ
	int age;
public:
	Student(); //�޲ι��캯��
	Student(char *na, char *id, char *num, char *spec, int ag); //���ι��캯��
	Student(const Student &per); //�������캯��
	~Student(); //��������
	char* GetName();
	char* GetID();
	char* GetNumber();
	char* Getspec();
	int Getage();
	void Display();
	void Input();
};
#endif