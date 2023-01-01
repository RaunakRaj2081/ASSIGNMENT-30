/*10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8 
characters or does contain a digit or special symbol or space*/

#include<bits/stdc++.h>
using namespace std;
void verify_Nickname(char *p);
int main()
{
    char p[100];
    cout<<"Enter your Nickname : ";
    gets(p);
    verify_Nickname(p);
    
    return 0;
}
void verify_Nickname(char *p)
{
    int s=strlen(p);
    int has_digit = -1;
    int has_symbol = -1;
    int has_space = -1;

    for(int i=0; i<s ; i++)
    {
        if(isdigit(p[i]))   has_digit = 2;
        if(ispunct(p[i]))   has_symbol = 2 ;
        if(isspace(p[i]))   has_space = 2 ;
    }
    try
    {       
        if(s>8 || has_digit==2 || has_symbol==2 || has_space==2)
          throw 'c';
          else
          cout<<"\nNickname accepted";  
    }
    catch(char c)
    {
        cout<<"\nException caught";
        cout<<"\nInvalid Nickname";
    }
}
