#include <iostream>
using namespace std;

void grades(){

    int a; 
    cout <<"enter your marks : ";
    cin >> a;

    if(a > 100 || a < 0){
        cout <<"invalid marks ";
        return;
    }

    if(a >= 91 && a <= 100){
        cout <<"O";
    }else if (a >= 81 && a <= 90){
        cout<<"A";
    }else if(a >= 71 && a <= 80){
        cout <<"B";
    }else if(a >= 61 && a <= 70){
        cout <<"C";
    }else if(a >= 51 && a <= 60){
        cout <<"D";
    }else if(a >= 41 && a <= 50){
        cout <<"Pass";
    }else{
        cout << "fail";
    }
}

int main(){

    grades();
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string className;
    char division;
    string dateOfBirth;
    string bloodGroup;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenseNo;

public:
    // Default constructor
    Student() : rollNumber(0), division('A') {}

    // Parameterized constructor
    Student(string n, int r, string c, char d, string dob, string bg, string addr, string tel, string dl)
        : name(n), rollNumber(r), className(c), division(d), dateOfBirth(dob), bloodGroup(bg),
          contactAddress(addr), telephoneNumber(tel), drivingLicenseNo(dl) {}

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        rollNumber = s.rollNumber;
        className = s.className;
        division = s.division;
        dateOfBirth = s.dateOfBirth;
        bloodGroup = s.bloodGroup;
        contactAddress = s.contactAddress;
        telephoneNumber = s.telephoneNumber;
        drivingLicenseNo = s.drivingLicenseNo;
    }

    // Destructor
    ~Student() {
        // Cleanup if necessary
    }

    // Static member function to display the total number of students
    static void displayTotalStudents(int total) {
        cout << "Total Students: " << total << endl;
    }

    // Friend function to display student information
    friend void displayStudentInfo(const Student &s);

    // Inline function to set the roll number
    inline void setRollNumber(int r) {
        if (r <= 0) throw invalid_argument("Roll number must be positive.");
        rollNumber = r;
    }

    // Function to get student information
    void getStudentInfo() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << "Enter Class: ";
        getline(cin, className);
        cout << "Enter Division: ";
        cin >> division;
        cin.ignore();
        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        getline(cin, dateOfBirth);
        cout << "Enter Blood Group: ";
        getline(cin, bloodGroup);
        cout << "Enter Contact Address: ";
        getline(cin, contactAddress);
        cout << "Enter Telephone Number: ";
        getline(cin, telephoneNumber);
        cout << "Enter Driving License No: ";
        getline(cin, drivingLicenseNo);
    }
};

// Friend function to display student information
void displayStudentInfo(const Student &s) {
    cout << "Student Information:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Class: " << s.className << endl;
    cout << "Division: " << s.division << endl;
    cout << "Date of Birth: " << s.dateOfBirth << endl;
    cout << "Blood Group: " << s.bloodGroup << endl;
    cout << "Contact Address: " << s.contactAddress << endl;
    cout << "Telephone Number: " << s.telephoneNumber << endl;
    cout << "Driving License No: " << s.drivingLicenseNo << endl;
}

int main() {
    int numberOfStudents;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cin.ignore(); // Clear the newline character from the input buffer

    // Dynamic memory allocation for students
    Student* students = new Student[numberOfStudents];

    // Input student information
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Entering information for student " << (i + 1) << ":" << endl;
        students[i].getStudentInfo();
    }

    // Display student information
    for (int i = 0; i < numberOfStudents; ++i) {
        displayStudentInfo(students[i]);
    }

    // Display total number of students
    Student::displayTotalStudents(numberOfStudents);

    // Cleanup
    delete[] students;

    return 0;
}
