#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // vector<int> number;

    // number.push_back(5);
    // number.push_back(10);
    // number.push_back(15);
    // number.push_back(20);
    // number.pop_back();

    // cout<<number[0]<<endl;
    // cout<<number[1]<<endl;
    // cout<<number[2]<<endl;
    // cout<<number[3]<<endl;

    // cout<< number.front()<<endl;
    // cout<< number.back()<<endl;
    // cout<< number.size()<<endl;


    // vector<string> store;
    
    // store.push_back("Apple");
    // store.push_back("Banana");
    // store.push_back("Mango");
    // store.push_back("Orange");

    // cout<<store[0]<<endl;
    // cout<<store[1]<<endl;
    // cout<<store[2]<<endl;
    // cout<<store[3]<<endl;

    // vector<int> numbers;

    // for(int i = 0; i< 5; i++){
    //     int num;
    //     cin>>num;
    //     numbers.push_back(num);
    // }

    // cout<< "Numbers stored in vector are:\n";
    
    // for(int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }

    // Takes 10 numbers instead of 5.

    // vector<int> numbers;

    // for(int i =0; i<10; i++){
    //     int num;
    //     cin>>num;
    //     numbers.push_back(num);
    // }
    
    // cout<< "Numbers stored in vector are:\n";


    // for(int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << " ";
    // }



//     vector<string> fruits =
// {
//     "Apple",
//     "Banana",
//     "Mango"
// };

// for(string fruit : fruits)
// {
//     cout << fruit << endl;
// }

    // vector<int> nums = {10,20,30,40,50};

    // for(int x : nums)
    // {
    //     cout << x << " ";
    // }

    // vector<int> nums = {5,10,15,20,25};

    // for(int x: nums)
    // {
    //     cout<<x<<" ";
    // }

//     vector<string> names =
// {
//     "Rahul",
//     "Aman",
//     "Priya",
//     "Neha"
// };

// for(string x: names){
//     cout<<x<<endl;
// }


// vector<int> nums = {2,4,6,8,10};

// for(int &x : nums){
//     cout<< 3*x<<" ";
// }

vector<int> nums = {10,20,30,40};
   for(int x: nums){
    cout<<x<<" ";
   }

   nums.insert(2, 50);

    for(int y: nums){
    cout<<y<<" ";
   }

    return 0;
}