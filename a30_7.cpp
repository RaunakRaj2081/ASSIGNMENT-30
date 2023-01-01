/*7. Write a C++ program to accept a username if the username has less than 6 characters 
or does contain any digit or special symbol.*/

#include<bits/stdc++.h>
using namespace std;
void verify_username(char *p);
int main()
{
    char p[100];
    cout<<"Enter your username : ";
    gets(p);
    verify_username(p);
    
    return 0;
}
void verify_username(char *p)
{
    int s=strlen(p);
    int has_digit = -1;
    int has_symbol = -1;
    

    for(int i=0; i<s ; i++)
    {
        if(isdigit(p[i]))   has_digit = 2;
        if(ispunct(p[i]))   has_symbol = 2 ;
        
    }
    try
    {       
        if(s>6 && has_digit==2 && has_symbol==2 )
          cout<<"\nusername accepted"; 
          else
          throw 'c';
           
    }
    catch(char c)
    {
        cout<<"\nException caught";
        cout<<"\nInvalid username";
    }
}
