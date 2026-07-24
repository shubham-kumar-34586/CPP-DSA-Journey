//C++ Program to Check Whether a Given Year is a Leap Year

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int year;
    cin>>year;

    if (year % 4 == 0){
        cout<<year<<" is a Leap Year";
    }
    else{
        cout<<year<<" is not a Leap Year";
    }
    

    return 0;
}