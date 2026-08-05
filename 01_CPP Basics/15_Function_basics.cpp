#include <bits/stdc++.h>
using namespace std;


int IsEvenOdd(int name) // Function declare
{
    if(name%2==0)   // function defined
    return 0;
    else 
    return 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif


    int num;
    cin>>num;

    int n = IsEvenOdd(num);  // function call
    if(n==0)
    cout<<"Even";
    else
    cout<<"Odd";

    return 0;
}


