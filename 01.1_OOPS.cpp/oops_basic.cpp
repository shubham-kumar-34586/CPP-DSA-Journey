#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string name;
    int age, roll_number;
    string grade;
};



int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    student s1;
    s1.name = "Shubham";
    s1.age = 54;
    s1.roll_number = 21;
    s1.grade = "A+";

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_number<<endl;
    cout<<s1.grade<<endl;

    return 0;
}

// 24