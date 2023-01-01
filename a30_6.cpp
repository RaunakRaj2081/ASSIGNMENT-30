/*6. Write a C++ program to accept area pin code and throw an exception if it does not 
contain 6 digits.*/

#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int countDigits(int n);
int main()
{
    int n;
    cout<<"Enter Area pin code :";
    cin>>n;
    int p = countDigits(n);
    try
    {
        if(p==6)
        cout<<"correct number";
        else
        throw p;
    }
    catch(int p)
    {
        cout<<"Exception caught "<<endl;
        cout<<"The number does not contain 6 digits";
    }
    return 0;
}
int countDigits(int n)
{
  int count =0;
  if(n==0)
  return 1;
  while(n!=0)
  {
    n=n/10;
    ++count;
  }
  return count;
}