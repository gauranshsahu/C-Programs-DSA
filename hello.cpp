/*#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter the value of i:";
    cin>>i;
    if(i==0)
    {
        cout<<"zero";
    }
    else if(i<0)
    {
        cout<<"Negative";
    }
    else
    {
        cout<<"Positive";
    }
    return 0;
}*/

//uppercase lowercase numeric
/*#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character:";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"Uppercase";
    }
    if(ch>=97 && ch<=122)
    {
        cout<<"Loweracse";
    }
    if(ch>=48 && ch<=57)
    {
        cout<<"Numeric";
    }
    else{
        cout<<"Special character";
    }
    return 0;
}*/

//Prime number
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number:";
    cin>>n;
    int g=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            g=0;
        }
    }
    if(g==1)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
    return 0;
}
