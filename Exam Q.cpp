#include<iostream>
using namespace std;
char findGrade(int mark)
    {
        char grade;

        if (mark>80)
        {
            grade= 'A';
        }
        else if (mark>=60)
        {
            grade= 'B';
        }
        else if (mark>=40)
        {
            grade= 'C';
        }
        else
        {
            grade= 'E';
        }
        return grade;
    }
double findGPV(char grade)
    {
        float GPV=0;

        switch (grade)
        {
        case 'A':
            GPV=4.00;
            break;

        case 'B':
            GPV=3.00;
            break;

        case 'C':
            GPV=2.00;
            break;

        default:
            GPV=0.00;
        }
    return GPV;
    }
int main()
{
    int numberOfSubjects=0;
    cout<<"Enter the number of Subjects :"<<endl;
    cin>>numberOfSubjects;

    int marks[numberOfSubjects];

    for (int i=0; i<numberOfSubjects; i++)
    {
        cout<<"Enter marks for subject "<<i+1<<":";
        cin>>marks[i];
    }

    float totalGPV=0;

    for (int i=0; i<numberOfSubjects; i++)
    {
        cout<<"Subject "<<i+1<<": Grade "<< findGrade(marks[i])<<endl;
        totalGPV= totalGPV + findGPV(findGrade(marks[i]));
    }

    float GPA= totalGPV / numberOfSubjects;

    cout<<"GPA :"<<GPA;

return 0;
}
