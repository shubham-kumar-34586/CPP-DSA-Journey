#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // int count;
    // cin>>count;

    // for(int num=1; num<=count; num++)
    //     cout<<num<<" ";

    //print all even number

    // for(int num=1; num<=count; num++){
    //     if(num%2==0)
    //     cout<<num<<" ";
    // }



    // int sum=0;
    // for(int num=1; num<=count; num++){
    //     sum=sum+num;
    // }
    // cout<<sum<<" ";


    // print prime number
    // int n;
    // cin>>n;
    // if(n<2){
    //     cout<<"not a prime number";
    //     return 0;
    // }
   
    // for(int num=2; num<=n-1; num++ ){
    //     if(n%num==0){
    //         cout<<"not a prime number";
    //         break;
    //     }
    //     else{
    //         cout<<"prime number";
    //         break;
    //     }
    // }
    
    // fibonacci series
    int n;
    cin>>n;
    int first_number = 0;
    int second_number = 1;
    int current;
    if(n==1){
        cout<<first_number<<" ";
        return 0;
    }
    if(n==2){
        cout<<first_number<<" "<<second_number<<" ";
        return 0;
    }
    for(int i = 3; i<=n; i++){
        current = first_number + second_number;
        cout<<current<<" ";
        first_number = second_number;
        second_number = current;
    }

    //1:05:00

    return 0;
}