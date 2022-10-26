// StudentsDegrees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctype.h>
#include<string>
using namespace std;
struct Student
{

    char*  name;
    float dgrHomeWork[4];
    float dgrTests[3];
    float average;
    Student() {};
    Student(char* n, float hw[4], float tst[3]) {
        name = n;
        name = new char[4];
        dgrHomeWork[0] = hw[0];
        dgrHomeWork[1] = hw[1];
        dgrHomeWork[2] = hw[2];
        dgrHomeWork[3] = hw[3];
        dgrTests[0] = tst[0];
        dgrTests[1] = tst[1];
        dgrTests[2] = tst[2];
        float hwsum = 0;
        float tstsum = 0;
        for (int i = 0; i < 4; i++) {
            hwsum += dgrHomeWork[i];
            if (i < 3)
                tstsum += dgrTests[i];
       }
        hwsum /= 4;
        tstsum /= 3;
        average = (hwsum + tstsum) / 2;
    }
    void printResult() {
        cout << "\nStudent Name : " << name << "\nAverage : "<<average<<endl;

     }

};

int main()
{
    char name[20];
    float homeworkGrades[4];
    float testGrades[3];
    int studentCount = 0;
    start:
    cout << "\n\nEnter Students Number..\n";
    cin >> studentCount;
    const int sc = studentCount;
    Student* studentList = new Student[sc]();
    studentList;
    for (int i = 0; i < studentCount; i++)
    {
        cout << "\nEnter New Student "+ (i+1)<<" Name:    \n";
        char f ;
        getchar();
        cin.getline( name,20);
        cout << endl;

        cout << "\n Enter HomeWork Degrees for "<<name<<": note! press enter or space after every entring   \n";
        for (size_t j = 0; j < 4; j++)
        {
            cin >> homeworkGrades[j];
        }
        cout << endl;

        cout << "\n Enter Tests Degrees for "<<name<<": note! press enter or space after every entring   \n";
        for (size_t j = 0; j < 3; j++)
        {
            cin >> testGrades[j];
        }
        studentList[i] = Student(name, homeworkGrades, testGrades);
        cout << endl;

    }
    for (size_t i = 0; i < studentCount; i++)
    {
        studentList[i].printResult();
    }
    cout << "\nPress R to Retry or any other Key to exit...";
    char ch;
    cin >> ch;
    if (ch == 'R' || ch == 'r')
        goto start;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
