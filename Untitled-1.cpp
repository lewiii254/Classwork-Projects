#include <iostream>
using namespace std;

int main() {
    int score;
    string grade, remarks;
    
    // Get the score from user
    cout << "Enter student's score (0-100): ";
    cin >> score;
    
    // Validate score range
    if (score < 0 || score > 100) {
        cout << "Invalid score! Score must be between 0 and 100." << endl;
        return 1;
    }
    
    // Determine grade and remarks using if statements
    if (score >= 90 && score <= 100) {
        grade = "A";
        remarks = "Excellent";
    } else if (score >= 80 && score <= 89) {
        grade = "B+";
        remarks = "Very Good";
    } else if (score >= 70 && score <= 79) {
        grade = "B";
        remarks = "Good";
    } else if (score >= 60 && score <= 69) {
        grade = "C+";
        remarks = "Above Average";
    } else if (score >= 50 && score <= 59) {
        grade = "C";
        remarks = "Fair";
    } else if (score >= 40 && score <= 49) {
        grade = "D+";
        remarks = "Below Average";
    } else if (score >= 30 && score <= 39) {
        grade = "D";
        remarks = "Poor";
    } else {
        grade = "E";
        remarks = "Very Poor";
    }
    
    // Display the results
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << "Remarks: " << remarks << endl;
    
    return 0;
}