#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif


    vector<int> numbers;
    vector<string> names;
    

    numbers.push_back(10); // adding element
    numbers.push_back(20);
    numbers.push_back(30);

     // numbers.pop_back();  // removing last element
    // cout<< numbers.size()<<endl; // send size of vector

    // cout<<numbers.empty()<<endl;  // return true or false for empty vector or not

    //cout << numbers.front();  //First element

    cout<< numbers.back(); //Last element


    // cout << numbers[0] << endl;
    // cout << numbers[1] << endl;
    // cout << numbers[2] << endl;
    
    
   

    return 0;
}


// Complete Summary
// Function	    Meaning     	    Real-life example
// push_back()	Add at end	        New student joins
// pop_back()	Remove last	Last    student leaves
// size()	    Count elements	    Attendance count
// empty()	    Check if empty	    Is classroom empty?
// front()	    First element	    First bench student
// back()	    Last element	    Last bench student