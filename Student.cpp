#include"../bai1/student.h"

using namespace std;

void input_a_student(student* s)
{
	cout << "Enter name: ";
	cin.getline(s->name,50);
	
	cout << "Enter math scores: ";
	cin >> s->math;
	
	cout << "Enter chemistry scores: ";
	cin >> s-> chem;
	
	cout << "Enter physic scores: ";
	cin >> s->phys;

	s->aver_score = (s->chem + s->math + s->phys) / 3;

}
void sort_a_student(student* s)
{

	if (s->aver_score >= 9.0 and s->aver_score <= 10)
	{
		cout<< "Excellent";
	}
	else if (s->aver_score >= 8.0 and s->aver_score <= 8.99)
	{
		cout<< "very Good";
	}
	else if (s->aver_score >= 7.0 and s->aver_score <= 7.99)
	{
		cout<< "good";
	}
	else if (s->aver_score >= 5.0 and s->aver_score <= 6.99)
	{
		 cout<< "Average";
	}
	else
	{
		cout<< "weak";
	}
}

void output_a_student(student* s)
{
	cout << "name:" << s->name << "\tmath:" << s->math << "\tphysic:" << s->phys << "\tchemistry:" << s->chem << "\taverage score:";
	cout << setprecision(3)<<s->aver_score<<"\t" ;
	sort_a_student(s);
}

void input_students(student_list* stu)
{
	cout << "Enter the number of student: ";
	cin >> stu->n;
	for (int i = 0; i < stu->n; i++)
	{
		cout << "ordinal: " << i + 1 << endl;
		cin.ignore();
		input_a_student(&stu->s[i]);
	}
}
void output_students(student_list* stu)
{
	for (int i = 0; i < stu->n; i++)
	{
		output_a_student(&stu->s[i]);
		cout << "\n";
	}
}
