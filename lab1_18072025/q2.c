/*
Write a C program to assign values to each member of the following structure. Pass the populated structure to a function Using call-by-value and another function using call-by-address and print the value of each member of the structure. 
struct student_info{
	int roll_no;
	char name [50];
	float CGPA;
	struct dob age;
};
*/

#include <stdio.h>
#include <string.h>

struct dob {
	int day;
	int month;
	int year;
};

struct student_info{
	int roll_no;
	char name [50];
	float CGPA;
	struct dob age;
};

void displayByValue(struct student_info s) {
    printf("\n[Call-by-Value]\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("CGPA: %.2f\n", s.CGPA);
    printf("Date of Birth: %02d-%02d-%04d\n", s.age.day, s.age.month, s.age.year);
}

void displayByAddress(struct student_info *s) {
    printf("\n[Call-by-Address]\n");
    printf("Roll No: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->CGPA);
    printf("Date of Birth: %02d-%02d-%04d\n", s->age.day, s->age.month, s->age.year);
}

int main () {

	struct student_info student;

	student.roll_no = 23;
	strcpy(student.name, "Kunal Saha");
	student.CGPA = 8.3;
	student.age.day = 11;
	student.age.month = 07;
	student.age.year = 200;

	displayByValue(student);      // call-by-value
    displayByAddress(&student);   // call-by-address

	return 0;
}

