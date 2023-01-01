/*2. Write a C++ program to demonstrate try, throw and catch statements.
*/

#include<iostream>
using namespace std;
void test(int n)
{
    try
    {
    if (n%5==0)
    cout<<"Multiple of five"<<endl;
    else
    throw n;
    }
    catch(int n)
    {
        cout<<"Not Multiple of five";
    }

}
int main()
{
 int num;
 cout<<"Enter a number : ";
 cin>>num;
 test(num);
 return 0;   

}