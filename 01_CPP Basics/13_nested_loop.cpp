#include <bits/stdc++.h>
using namespace std;
//n-j+or-1
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // for(int row =1 ; row<=5; row++){
    //     for(int col = 1; col<=5; col++)
    //     cout<<col<<" ";
    //     cout<<endl;
    // }

    
    // for(int row =1 ; row<=5; row++){
    //     for(int col = 1; col<=5; col++)
    //     cout<<5-col+1<<" ";
    //     cout<<endl;
    // }

    // int count = 1;
    // for(int row =1 ; row<=5; row++){
    //     for(int col = 1; col<=5; col++){
    //     cout<<count<<" ";
    //     count=count+1;
    //     }
    //     cout<<endl;
    // }


    // int count = 25;
    // for(int row =1 ; row<=5; row++){
    //     for(int col = 1; col<=5; col++){
    //     cout<<count<<" ";
    //     count=count-1;
    //     }
    //     cout<<endl;
    // }

    // int n;

    // for(int row = 1; row<=6; row++){
    //     for(int col = 1; col<=row;col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int row = 1; row<=6; row++){
    //     for(int col = 1; col<=row;col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int row = 1; row<=5; row++){
    //     char a = 'a'+row-1;
    //     for(int col = 1; col<=5;col++){
    //         cout<<a<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1; row<=5; row++){
        for(int col = 1; col<=row;col++){
            char a = 'a'+col-1;
            cout<<a<<" ";
        }
        cout<<endl;
    }

    return 0;
}