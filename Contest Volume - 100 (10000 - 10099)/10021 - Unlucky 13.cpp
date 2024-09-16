#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Convert time string "HH:MM" to total minutes from 00:00
int timeToMinutes(const string& time_str) {
    int hours, minutes;
    char colon;
    istringstream iss(time_str);
    iss >> hours >> colon >> minutes;
    return hours * 60 + minutes;
}

// Determine if the contest schedule overlaps or touches the exam schedule
string checkSchedule(const string& contest_start, const string& contest_end,
                     const string& exam_start, const string& exam_end) {
    int c_start = timeToMinutes(contest_start);
    int c_end = timeToMinutes(contest_end);
    int e_start = timeToMinutes(exam_start);
    int e_end = timeToMinutes(exam_end);

    // Check if they overlap or touch
    if (c_end >= e_start && e_end >= c_start) {
        return "UNLUCKY 13 :(";
    } else {
        return "LUCKY 13 :)";
    }
}

int main() {
    string contest_start, contest_end, exam_start, exam_end;
    
    while (getline(cin, contest_start, ' ')) {
        getline(cin, contest_end, ' ');
        getline(cin, exam_start, ' ');
        getline(cin, exam_end);
        
        string result = checkSchedule(contest_start, contest_end, exam_start, exam_end);
        cout << result << endl;
    }
    
    return 0;
}
