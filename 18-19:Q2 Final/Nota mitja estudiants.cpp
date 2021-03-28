#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 'Subject' stores information about a subject taken by a student:
// name of the subject and obtained grade
struct Subject {
    string name;
    int grade;
};

// 'Student' stores information about a student: id number, university name,
// average grade and list of taken subjects with obtained grades.
struct Student {
    string dni;
    string school;
    float average;
    vector<Subject> subjects;
};

/// YOU CAN ADD EXTRA FUNCTIONS HERE IF YOU NEED TO

// Reads input data and stores info for each student in a struct 'Student'.
// It also computes and stores the average mark for each student.
// Returns a vector with all students.
// Each 'Student' struct should be added to the vector using "push_back".
vector<Student> read_students() {
    vector <Student> student;
    string n1, n2;
    while (cin >> n1 >> n2) {
        Student pre;
        pre.dni = n1, pre.school = n2;
        Subject subj;
        double average = 0, count_subjects = 0;
        while (cin >> subj.name and subj.name != ".") {
            cin >> subj.grade;
            pre.subjects.push_back(subj);
            ++count_subjects, average = average + subj.grade;
        }
        pre.average = average/ count_subjects;
        student.push_back(pre);
    }
    return student;
}
// Compare two students and return true if s1 goes before s2 in
// the required ordering (sorted by school name, average if same
// school, dni if same school and average)
bool compare_students(const Student &s1, const Student &s2) {
    if( s1.school == s2.school){
        if (s1.average == s2.average) {
            if (s1.dni == s2.dni) return s1.dni == s2.dni;
            return s1.dni < s2.dni;
        }
        return s1.average < s2.average;
    }
    return s1.school < s2.school;
}

// Print sorted student information
// For each student, print school name, average grade, dni, list of subjects and marks
void print_students(const vector<Student> &stds) {
    int n = stds.size();
    for (int i = 0; i < n; ++i) {
        cout << stds[i].school << ' ' << stds[i].average << ' ' << stds[i].dni << ' ';
        for (int j = 0; j < stds[i].subjects.size(); ++j) {
            cout << stds[i].subjects[j].name << ' ' << stds[i].subjects[j].grade;
            if (j != stds[i].subjects.size() -1) cout << ' ';
        }
        cout << endl;
    }
}

int main() {
  vector<Student> stds = read_students();
  sort(stds.begin(), stds.end(), compare_students);
  print_students(stds);
}
