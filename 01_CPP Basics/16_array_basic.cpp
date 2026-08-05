#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int arr[5];
    arr[0]=1;
    arr[1]=5;
    arr[2]=7;
    arr[3]=11;
    arr[4]=2;

    int sum = 0;
    for(int i = 0; i<5; i++)
    {
        sum  = sum + arr[i];
    }
    cout<<sum;

    return 0;
}