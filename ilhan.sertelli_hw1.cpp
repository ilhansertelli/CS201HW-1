//Ilhan Sertelli

#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	double midterm, finals, exam_avg;
	double hw1, hw2, hw3, hw4, hw5, avg_hw, ratio, hw_grade;
	double q1, q2, q3, q4, quiz;
	double min_grade = 10.0;
	double overall;
	
	cout << "The purpose of this program is to calculate your CS201 grade. What is your name? ";
	cin >> name;

	cout << "Hello " << name << ", what are your midterm and final exam grades? ";
	cin >> midterm >> finals;
	exam_avg = ((0.30 * midterm) + (0.35 * finals)) / 0.65;

	if (exam_avg >= 30) {
		
		cout << "What are the grades of your 5 homework? ";
		cin >> hw1 >> hw2 >> hw3 >> hw4 >> hw5;
		avg_hw = (hw1 + hw2 + hw3 + hw4 + hw5) / 5;
		ratio = avg_hw / exam_avg;

		if (ratio <= 2) {
			hw_grade = avg_hw;
			cout << "You'll get all the points earned from homework!" << endl;
		}

		else if (ratio < 3) {
			hw_grade = avg_hw * (3 - ratio);
			cout << "You'll get " << hw_grade << " from the points earned from homework!" << endl;
		} 
		
		else {
			hw_grade = 0;
			cout << "You'll get NONE of the points earned from homework!" << endl;
		}
		
		cout << "What are the grades of your 4 quizzes? If any, enter your grade as 0 for missed quizzes. ";
		cin >> q1 >> q2 >> q3 >> q4;

		if (q1 < min_grade) {
			min_grade = q1;		
		}

		if (q2 < min_grade) {
			min_grade = q2;
		}

		if (q3 < min_grade) {
			min_grade = q3;
		}

		if (q4 < min_grade) {
			min_grade = q4;
		}
		
		quiz = (q1 + q2 + q3 + q4 - min_grade) / 30 * 100;
		overall = (quiz * 0.10) + (hw_grade * 0.25) + (midterm * 0.30) + (finals * 0.35);
		
		cout << name << ", your grade for CS201 is: " << overall << endl;
	}

	else {
		cout << name << ", your weighted exam average is less than 30, you will fail the course!" << endl;
	}

	return 0;
}