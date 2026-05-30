#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a,b;
    // a.gpa=4.5;
    // a.roll = 10;
    // char temp[100]="Sakib";
    // strcpy(a.name,temp);

    //by input
    // cin>>a.name>>a.roll>>a.gpa;
    // cin>>b.name>>b.roll>>b.gpa;
    
    //name with space
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore(); //for ignoring the enter of prev input
    //getchar();
    cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;


    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    return 0;
}