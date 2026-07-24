#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int val, num, rev = 0;
    cin>>val;
    num = val;

    while(num != 0){
       int r = num % 10;
        rev = rev*10+r;
        num = num/10;
        
    }

    cout<<"the Reverse number of "<<val<<" is "<<rev;

    return 0;
}