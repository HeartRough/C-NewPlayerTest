#pragma once
#include <iostream>
using namespace std;
char NAME[5] = "NULL";

class Student {
	int age;
	char* name;
public:
	Student(int m, char* n);
	Student();
	void SetName(int m, char* n);
	int Getage();
	char* Getname();
	~Student();
};
Student::Student() {
	age = 0;
	name = NAME;
	cout << "New one" << endl;
}
Student::Student(int m,char* n) {
	age = m;
	name = n;
	cout << "New one" << endl;
}
void Student::SetName(int m, char* n) {
	age = m;
	name = n;
}
int Student::Getage() {
	return age;
}
char*  Student::Getname() {
	return name;
}
Student::~Student() {
	cout << "delete one" << endl;
	/*if(name)
		delete[]name;*/
}
