#include <iostream>
using namespace std;

int main() {
    int numCourses;
    float grade, creditHours;
    float totalGradePoints = 0.0;
    float totalCredits = 0.0;

    cout << "CGPA Calculator----- Designed by Farrukh"<<endl;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (e.g. 4.0, 3.3): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> creditHours;

        totalGradePoints += grade * creditHours;
        totalCredits += creditHours;

        cout << "Grade points for this course: " << fixed << grade * creditHours << endl;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "==========================="<<endl;
    cout << "Total Credit Hours: " << totalCredits<<endl;
    cout << "Total Grade Points: " << totalGradePoints<<endl;
    cout << "Your CGPA is: " << fixed << cgpa<<endl;
    cout << "===========================";

    return 0;
}
