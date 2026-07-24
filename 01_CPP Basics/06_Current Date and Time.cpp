// C++ Program to Display Current Date and Time

/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // Get current time
    time_t now = time(0);
    tm *local_time = localtime(&now);

    // Print current Date and time
    cout<< "Current Date and Time: " << put_time(local_time, "%Y-%m-%d %H:%M:%S") << endl;



    return 0;
}

*/ 



#include <iostream>
#include <ctime>
#include <iomanip>
 
std::string month[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
std::string day[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
 
int main()
{
    time_t timer;
    tm * time;
    const int BASE_YEAR = 1900;
 
    std::time(&timer);
    time = localtime(&timer);
    std::cout << "Current date " << day[time->tm_wday] << " "
              << month[time->tm_mon] << " " << time->tm_mday
              << " " << (time->tm_year + BASE_YEAR);
    std::cout << "\nCurrent time " << std::setw(2) << std::setfill('0')
              << time->tm_hour << " : " << std::setw(2) << std::setfill('0')
              << time->tm_min << " : " << std::setw(2) << std::setfill('0')
              << time->tm_sec;   
}