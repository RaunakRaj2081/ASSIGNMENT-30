/*Write a C++ program to accept a password and throw an exception if the password has 
less than 6 characters or does not contain a digit or does not contain any special 
character or does not contain any capital letter.
*/
#include<bits/stdc++.h>
using namespace std;
void verify_password(char *p);
int main()
{
    char p[100];
    cout<<"Enter your password : ";
    gets(p);
    verify_password(p);
    
    return 0;
}
void verify_password(char *p)
{
    int s=strlen(p);
    int has_digit = -1;
    int has_symbol = -1;
    int has_capital = -1;

    for(int i=0; i<s ; i++)
    {
        if(isdigit(p[i]))   has_digit = 2;
        if(ispunct(p[i]))   has_symbol = 2 ;
        if(isupper(p[i]))   has_capital = 2 ;
    }
    try
    {       
        if(s>6 && has_digit==2 && has_symbol==2 &&  has_capital == 2)
          cout<<"\npassword accepted"; 
          else
          throw 'c';
           
    }
    catch(char c)
    {
        cout<<"\nException caught";
        cout<<"\nInvalid password";
    }
}
