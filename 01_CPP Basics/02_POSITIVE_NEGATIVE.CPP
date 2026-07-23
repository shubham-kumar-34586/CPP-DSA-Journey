#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int num;
    cin >> num;

    if(num >= 0) {
		cout<<num<<" "<<"is positive";
	}
	else {
		cout<<num<<" "<<"is negative";
	}

    return 0;
}