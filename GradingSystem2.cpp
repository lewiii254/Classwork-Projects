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
    
    // Convert score to a range 0-10 for switch
    int range = score / 10;
    
    // Determine grade and remarks using switch
    switch (range) {
        case 10:
        case 9:
            grade = "A";
            remarks = "Excellent";
            break;
        case 8:
            grade = "B+";
            remarks = "Very Good";
            break;
        case 7:
            grade = "B";
            remarks = "Good";
            break;
        case 6:
            grade = "C+";
            remarks = "Above Average";
            break;
        case 5:
            grade = "C";
            remarks = "Fair";
            break;
        case 4:
            grade = "D+";
            remarks = "Below Average";
            break;
        case 3:
            grade = "D";
            remarks = "Poor";
            break;
        case 2:
        case 1:
        case 0:
            grade = "E";
            remarks = "Very Poor";
            break;
    }
    
    // Display the results
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << "Remarks: " << remarks << endl;
    
    return 0;
}