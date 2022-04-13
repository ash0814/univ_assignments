#include "Course.h"

int main()
{
	Course cpp("cpp", 5);

	cpp.addStudent("A");
	cpp.addStudent("B");
	cpp.addStudent("C");

	cpp.dropStudent("B");

	for (int i = 0; i<cpp.getNumberOfStudents(); i++)
		cout << (cpp.getStudents())[i] << endl;
	
	return (0);
}