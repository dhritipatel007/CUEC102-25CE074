#include<iostream>
using namespace std;
class Grading
{
protected:
    float marks;
public:
    void setMarks(float m)
    {
        marks = m;
    }
     virtual char computeGrade() = 0;
};
class Undergraduate : public Grading
{
public:
    char computeGrade() {
        if(marks >= 75&&marks<=100) return 'A';
        else if(marks >= 60&&marks<75) return 'B';
        else if(marks >= 50&&marks<65) return 'C';
        else return 'F';
    }
};
class Postgraduate : public Grading
{
public:
    char computeGrade()
    {
        if(marks >= 80&& marks<=100) return 'A';
        else if(marks >= 65&& marks<80) return 'B';
        else if(marks >= 55&&marks<65) return 'C';
        else return 'F';
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Grading* students[n];

    for(int i = 0; i < n; i++) {
        int type;
        float m;
        cout << "\n1. Undergraduate  2. Postgraduate\n";
        cout << "Enter type: ";
        cin >> type;
        cout << "Enter marks: ";
        cin >> m;
        if(type == 1)
            students[i] = new Undergraduate();
        else
            students[i] = new Postgraduate();
        students[i]->setMarks(m);
    }
      cout << "\nStudent Grades:\n";
    for(int i = 0; i < n; i++) {
        cout << "Grade: " << students[i]->computeGrade() << endl;
    }

    return 0;
}

