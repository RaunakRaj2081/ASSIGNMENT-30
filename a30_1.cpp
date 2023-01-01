/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an 
integer and string using multiple catch blocks.
*/

#include<iostream>
using namespace std;
 void test_odd_even(int n)
 {
    try
    {
    if(n%2==0)
    {
    cout<<"The number is even"<<endl;
    throw;
    }
    else
    throw n;
    }
    catch(int n)
    {
        cout<<"The number is odd"<<endl;
    }
    catch(char c[20])
    {
        cout<<c;
    }
 }
 int main()
 {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    test_odd_even(num);
    return 0;

 }
    
 