#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int val, num, sum = 0;
    cin>>val;
    num = val;

    while(num != 0){
        sum = sum + num%10;
        num = num / 10;
    }

    cout<<"The sum of digits of "<<val<<" is "<<sum;

    return 0;
}