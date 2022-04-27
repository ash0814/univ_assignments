#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string &courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

// Course::Course(const Course &course)
// {
// 	courseName = course.courseName;
// 	numberOfStudents = course.numberOfStudents;
// 	capacity = course.capacity;
// 	students = new string[capacity];
// 	for (int i = 0; i <numberOfStudents; i++)
// 		students[i] = course.students[i];
// }

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string &name)
{
	if (numberOfStudents >= capacity)
	{
		capacity *= 2;
		string *newStudents = new string[capacity];
		for (int i = 0; i < numberOfStudents; i++)
			newStudents[i] = students[i];
		delete[] students;
		students = newStudents;
	}
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string &name)
{
	for (int i = 0; i < numberOfStudents; i++) {
		if (students[i] == name) {
			for (int j = i; j + 1 < numberOfStudents; j++) {
				students[j] = students[j + 1];
			}
			students[numberOfStudents] = "";
			numberOfStudents--;
		}
	}
}

string *Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

void Course::clear()
{
	for (int i = 0; i < numberOfStudents; i++)
		students[i] = "";
	numberOfStudents = 0;
}