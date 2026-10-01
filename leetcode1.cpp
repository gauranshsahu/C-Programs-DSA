//reverse string
#include<iostream>
using namespace std;
int main()
{
    int n,a,s;
    cout<<"Enter the value of n: ";
    cin>>n;
    s=0;
    while(n!=0)
    {
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    cout<<s;
    return 0;
}