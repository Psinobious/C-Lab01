#include <iostream>

using namespace std;

class Session{
    public:
        Session();
        Session(string SessionID, string studentID, string courseID, string startDate, string endDate);
        
    private:
        string SessionID;
        string studentID;
        string courseID;
        string startDate;
        string endDate;
};