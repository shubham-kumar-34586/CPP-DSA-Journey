// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
// #endif

//     int a , b;
//     cin>>a>>b;

//     if(a>b){
//         cout<<a<<" is larger than "<<b;
//     }
//     else if(a<b){
//         cout<<b<<" is larger than "<<a;
//     }
//     else{
//         cout<<a<<" and "<<b<<" are equal.";
//     }

//     return 0;
// }




// largest of three numbers


#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    if (a>b & a>c){
        cout<<a<<" is the largest number.";
    }
    else if (b>a & b>c){
        cout<<b<<" is the largest number.";
    }
    else if (c>a & c>b){
        cout<<c<<" is the largest number.";
    }
    else{
        cout<<"All numbers are equal.";
    }



    return 0;
}