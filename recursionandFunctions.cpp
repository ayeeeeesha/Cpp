#include <iostream>
using namespace std;

// Global counter for total students
int totalStudents = 0;

// Recursive function to calculate total marks
int getTotalMarks(int subjectsLeft) {
    static int callCount = 0;          // Static variable to track recursion
    int score;

    if (subjectsLeft == 0)
        return 0;

    cout << "\nEnter marks for subject " << subjectsLeft << ": ";
    cin >> score;

    callCount++;                         // call count will increase when marks will enter one by one
    cout << "Recursion #" << callCount << " Subject " << subjectsLeft  << " marks recorded: " << score << endl;

    return score + getTotalMarks(subjectsLeft - 1);
}

// Function overloading for displaying results
void showResult(int total) {
    cout << "\nTotal Marks Obtained: " << total << endl;
}

void showResult(double avg) {
    cout << "\nAverage Marks: " << avg << endl;
}

// Function with default argument
double findAverage(int totalMarks, int subjects = 3) {
    return static_cast<double>(totalMarks) / subjects;
}

// Function using pass by reference
void handleStudent(int& rollNo) {
    int numSubjects = 3;
    cout << "\nProcessing record for Student ID " << rollNo 
         << " (" << numSubjects << " subjects)" << endl;

    int total = getTotalMarks(numSubjects);
    double average = findAverage(total, numSubjects);

    showResult(total);
    showResult(average);

    totalStudents++;
    cout << "\nStudent ID " << rollNo << " record completed successfully." << endl;
    cout << "\nStudents processed till now: " << totalStudents << endl;
}

int main() {
    cout << "==============================================\n***** Kinnaird College Result Processing System *****" << endl;

    int moreStudents = 1;
    int rollNumber = 1;

    while (moreStudents == 1) {
        handleStudent(rollNumber);

        cout << "\nDo you want to process another student? (1 = Yes / 0 = No): ";
        cin >> moreStudents;
        rollNumber++;
    }

    cout << "\nSummary: " << totalStudents << " student(s) processed in total." << endl;
    cout << "System shutting down...\n==============================================" << endl;

    return 0;
}
