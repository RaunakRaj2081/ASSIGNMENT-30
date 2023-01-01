/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an 
exception if the dividend is zero or does not contain an opertr.
*/

#include<iostream>
using namespace std;
int main()
{
    float a,b,ans;
    char opertr;
    cout<<"******** Performing arithmetic operations ******";
    try
    {
        cout<<"\nEnter first number : ";
        cin>>a;
        cout<<"\nEnter opertr : ";
        cin>>opertr;
        if(opertr !='+' && opertr !='-' && opertr !='*' && opertr !='/')
        throw opertr;
        cout<<"\nEnter second number : ";
        cin>>b;
        cout<<"\n **************** "<<endl;
    
      
        switch(opertr)
        {
        case '+':
        ans=a+b;
        break;
        case '-':
        ans=a-b;
        break;
        case '*':
        ans =a*b;
        break;
        case '/':
        if (b==0)
        throw 0;
        else 
        ans =a/b;
        break;
        }
        cout<<"\nAnswer : "<<a<<" "<<opertr<<" "<<b<<" = "<<ans;
    }

        catch( const char c)
        {
            cout<<"Invalid opertr "<<endl;
        }
        catch(const int n)
        {
            cout<<"Dividend cannot be zero";        
        }
        return 0;
    
} 