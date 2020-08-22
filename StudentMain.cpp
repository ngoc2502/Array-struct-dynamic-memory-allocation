#include"student.h"
 
using namespace std;

int main()
{
	student* s = new student;
	student_list *stu = new student_list;
	//input_a_student(s);
	//output_a_student(s);
	input_students(stu);
	output_students(stu);
	delete stu->s;
	stu->s = nullptr;
	delete s->name;
	s->name = nullptr;
	return (0);
}


