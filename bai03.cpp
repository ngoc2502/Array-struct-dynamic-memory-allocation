#include "..\bai1\student.h"

using namespace std;

int main()
{
	student_list* stu = new student_list[10];

	input_students(stu);
	output_students(stu);

	delete []stu->s->name;
	stu->s->name = nullptr;
	delete stu->s;
	stu->s = nullptr;
	delete[]stu;
	stu = nullptr;
	return(0);
}
