#include <iostream>
using namespace std;

const int size = 5;
class Student {
    int rollno;
    int marks[5];

public:
    void getdata();
    void total_marks();
};

void Student::getdata() {
    cout << "\nEnter the roll number: ";
    cin >> rollno;
    
    for (int i = 0; i <5; i++) {
        cout << "Enter marks in subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

void Student::total_marks() { 
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    cout << "\nTotal marks is " << total << endl;
}

int main() {
    Student stu;
    stu.getdata();
    stu.total_marks();  

    return 0;
}
