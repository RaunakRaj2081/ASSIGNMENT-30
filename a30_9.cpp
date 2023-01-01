/*Write a C++ program to accept Gmail id only and throw an exception if the id does not 
contain @ and gmail.com.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char p[100];
    
    cout<<"Enter Gmail id : ";
    gets(p);
    int s=strlen(p);
    int a=-1;
    int b=-1;
    int i=0;
   
    for( i=0 ; i<s; i++)
    {
        if(p[i]=='@')
            a=2;
         if(p[i]=='.')
         b=3;            
    }  
    try{
    if(a==2 && b==3)
    cout<<"\nGmail id accepted";
    else 
    throw 'z';
    }
    catch(char z)
    {
        cout<<"\nException caught";
        cout<<"\nIncorrect format";
    }
    return 0;
}