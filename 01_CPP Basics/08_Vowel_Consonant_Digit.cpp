//C++ Program to Check Whether a Character is a Vowel, Consonant or Digit

/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char ch;
    cin>>ch;

    if (ch >= '0' && ch <= '9'){
        cout<<ch<<" is a Digit";
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout<<ch<<" is a Vowel";
    }
    else{
        cout<<ch<<" is a Consonant";
    }

    return 0;
}
*/



#include<iostream>
#include<ctype.h>
using namespace std;
int main ()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if (isdigit(ch))
        cout << "\nThe entered character is a digit.";
    else if (isalpha(ch))
        {
            if ((ch == 'A') || (ch == 'E')|| (ch == 'I')|| (ch == 'O')|| (ch == 'U')|| (ch == 'a')|| (ch == 'e')|| 
            (ch == 'i')|| (ch == 'o')|| (ch == 'u'))
                cout << "\nThe entered character is a vowel.";
            else
                cout << "\nThe entered character is a consonant.";
        }
        else 
            cout << "\nThe entered character is a special character.";
    return 0;
}