#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course
{
public:
	Course(const string &courseName, int capacity);
	~Course();
	Course(const Course &);
	string getCourseName() const;
	void addStudent(const string &name);
	void dropStudent(const string &name);
	string *getStudents() const;
	int getNumberOfStudents() const;
	void clear();

private:
	int capacity;
	string courseName;
	string *students;
	int numberOfStudents;
};

#endif
