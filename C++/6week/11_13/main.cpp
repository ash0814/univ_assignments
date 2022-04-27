#include "Course.h"

int main()
{
	// Course cpp("cpp", 5);

	// cpp.addStudent("A");
	// cpp.addStudent("B");
	// cpp.addStudent("C");
	// cpp.addStudent("D");
	// cpp.addStudent("E");
	// cpp.addStudent("F");
	// cpp.addStudent("G");
	// cpp.addStudent("H");
	// cpp.addStudent("I");

	// cpp.dropStudent("B");
	// cpp.dropStudent("D");
	// cpp.dropStudent("C");

	// for (int i = 0; i<cpp.getNumberOfStudents(); i++)
	// 	cout << (cpp.getStudents())[i] << endl;
	Course c1("C++", 10);
	Course c2(c1);

	c1.addStudent("P");
	c2.addStudent("L");
	cout << c1.getStudents()[0] << "\n" << c2.getStudents()[0] << endl;
	return (0);
}