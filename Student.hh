#include <iostream>

using namespace std;

class Student{
    public:
        Student();
        Student(string StudentID, string firstName, string lastName);
        string getStudentID();
        string getFirstName();
        string getLastName();
        void setStudentID();
        void setFirstName();
        void setLastName();
    private:
        string StudentID;
        string firstName;
        string lastName;
}