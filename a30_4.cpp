/*4. Write a C++ program to accept an email address and throw an exception if it does not 
contain @ symbol.
*/

#include<iostream>
using namespace std;
bool chkemailid(char *);
int main()
{
    char email[100];
    cout<<"Enter email id : ";
    gets(email);
    try
    {
        if( chkemailid(email))
        {
            cout<<"\nEmail is valid";
        }
        else
        throw 'q';
    }
    catch(char c)
    {
        cout<<"\n Email is invalid";
    }
    return 0;
}
bool chkemailid(char *email)
{
    int n=-1;
    int m=-2;
    int l=0;
    for(int i=0;email[i]!='\0';i++)
    {

       if(email[i]=='@')
       n= i;
       else if(email[i]=='.')
       m=i;
       l++;
    }
    if(n==-1 || m==-2)
    return 0;
    else
    return 1;
}

