#include <iostream>
using namespace std;

int main() {
    int marks[5];
    const int passingMarks = 40; // Passing marks for each subject
    int failedSubjects = 0, totalMarks = 0;
    float percentage;
    char grade;

    // Input marks for 5 subjects
    cout << "Enter marks for 5 subjects (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
        if (marks[i] < passingMarks) {
            failedSubjects++;
        }
    }

    // Check if the student failed in more than one subject
    if (failedSubjects > 1) {
        cout << "Result: Repeat Year" << endl;
    } else {
        // Calculate percentage
        percentage = (totalMarks / 500.0f) * 100;

        // Assign grades based on percentage
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75) {
            grade = 'B';
        } else if (percentage >= 60) {
            grade = 'C';
        } else if (percentage >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "Total Marks: " << totalMarks << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }

    return 0;
}
