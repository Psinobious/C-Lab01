#include <iostream>

using namespace std;

class Course{
    public:
        Course();
        Course(string CourseID, string Course_Name, int credits);
        string getCourseID();
        string getCourse_Name();
        int getCredits();
        void setCourseID();
        void setCourse_Name();
        void setCredits();
    private:
        string CourseID;
        string Course_Name;
        int credits;
};
