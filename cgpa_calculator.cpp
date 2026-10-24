#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    string name[100];
    double grade[100], credit[100];
    double totalCredits = 0, totalPoints = 0;

    cout << " CGPA CALCULATOR \n";
    cout << "Enter number of courses: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of courses!\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nCourse name: ";
        cin >> ws;
        getline(cin, name[i]);

        cout << "Enter grade points (0-10): ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> credit[i];

        if (cin.fail() || grade[i] < 0 ||
            grade[i] > 10 || credit[i] <= 0) {
            cout << "Invalid input!\n";
            return 1;
        }

        totalCredits += credit[i];
        totalPoints += grade[i] * credit[i];
    }

    double sgpa = totalPoints / totalCredits;
    double cgpa = sgpa;

    cout << fixed << setprecision(2);

    cout << "\n COURSE DETAILS \n";
    for (int i = 0; i < n; i++) {
        cout << name[i]
             << " | Grade: " << grade[i]
             << " | Credits: " << credit[i] << "\n";
    }

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalPoints;
    cout << "\nSemester GPA: " << sgpa;
    cout << "\nOverall CGPA: " << cgpa << "\n";

    return 0;
}
