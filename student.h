#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

struct student
{
	char* name = new char[50];
	char* dis = new char[100];//distric
	char* pro = new char[100];//province
	float math;//math score
	float chem;//chemistry score
	float phys;//physic score
	float aver_score;//average score
};

struct student_list
{
	student *s = new student[10];
	int n;
};
void input_a_student(student* s);
void output_a_student(student* s);

void input_students(student_list* stu);//Enter student list
void output_students(student_list* stu);//print student list on the screen
void sort_a_student(student* s);//sort student base on average score
void find_student(student_list* stu, char add[]);
