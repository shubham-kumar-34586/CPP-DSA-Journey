#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <='Z'){
        cout << "Uppercase" << endl;
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase" << endl;
    }
    else{
        cout << "Invalid input" << endl;
    }

    return 0;
}