#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // int Total_rows;
    // cin>>Total_rows;

    // for(int row=1;row<=Total_rows;row++){
    //     //Space
    //     for (int col=1; col<=Total_rows-row;col++)
    //      cout<<" ";

    //      //print *
    //      for(int col=1;col<=2*row-1;col++)
    //      cout<<"* ";

    //      cout<<endl;
    // }




    
    // int Total_rows;
    // cin>>Total_rows;

    // for(int row=1;row<=Total_rows;row++){
    //     //Space
    //     for (int col=1; col<=row-1;col++)
    //      cout<<" ";
    //      //print *
    //      for(int col=1;col<=Total_rows-row+1;col++)
    //      cout<<"* ";

    //      cout<<endl;
    // }

    int n;
    cin>>n;

    for(int row = 1; row<=n; row++)
    {
        for(int col=1;col<=row;col++)
        cout<<"*";
        for(int col=1;col<=2*n-2*row;col++)
        cout<<" ";
        for(int col=1;col<=row;col++)
        cout<<"*";
        cout<<endl;
    }

    for(int row = 1; row<=n; row++)
    {
        for(int col=1;col<=n-row;col++)
        cout<<"*";
        for(int col=1;col<=2*row;col++)
        cout<<" ";
        for(int col=1;col<=n-row;col++)
        cout<<"*";
        cout<<endl;
    }

   


    return 0;
}