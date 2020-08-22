#include"..\bai1\student.h"

using namespace std;

int main()
{
	student_list* stu = new student_list;
	char* add = new char[100];
	int n = 0;
	input_students(stu);
	output_students(stu);
	
	cout << "Choose province or distric wanting to search:\n"
		<< "1.Distric\n"
		<< "2.Province\n";
	cin >> (n);
	switch (n)
	{
	case 1:
	{
		int count= 0; 
		cin.ignore();
		cout << "Enter the distric wanting to check:";
		cin.getline(add, 100);
		for (int i = 0; i < stu->n; i++)
			if (strcmp(stu->s[i].dis, add) == 0)
			{
				count++;
				student *rs=&stu->s[i];
				output_a_student(rs);
			}
		if (count == 0) cout << "empty";
		break;
	}
	case 2:
	{
		int count = 0;
		cin.ignore();
		cout << "Enter the province wanting to check:";
		cin.getline(add, 100);
		for (int i = 0; i < stu->n; i++)
			if (strcmp(stu->s[i].pro, add) == 0)
			{
				count++;
				student* rs = &stu->s[i];
				output_a_student(rs);
			}
		if (count == 0) cout << "empty!";
		break;
	}
	}
	delete[]add;
	add = nullptr;
	delete []stu->s->pro;
	stu->s->pro = nullptr;
	delete []stu->s->dis;
	stu->s->dis = nullptr;
	delete []stu->s->name;
	stu->s->name = nullptr;
	delete stu->s;
	stu->s = nullptr;
	delete stu;
	stu = nullptr;
}