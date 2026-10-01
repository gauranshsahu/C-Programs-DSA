/*#include<iostream>
using namespace std;
void print(int num)
{
    cout<<num<<endl;
    return;
}
int add(int num1,int num2)
{
    cout<<"num 1 is: "<<num1<<endl;
    cout<<"num 2 is: "<<num2<<endl;
    int sum= num1+num2;
    return sum;
}
int main()
{
    int a=2;
    int b=3;
    cout<<"The sum is: "<<add(a,b)<<endl;
    return 0;
}*/

//all prime numbers in a specific range
/*#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    for(int i=a; i<=b; i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}*/

//fibonacci series
/*#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1; i<=n; i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    fib(n);
    return 0;
}*/

//factorial
/*#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=2; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=fact(n);
    cout<<"The factorial of "<<n <<" is:"<<ans<<endl;
    return 0;
}*/

//binary coefficient factorial ncr=n!/(n-r)!*r!
/*#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=2; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int ans=fact(n)/(fact(n-r)*fact(r));
    cout<<"The answer is: "<<ans<<endl;
    return 0;
}*/

//pascal triangle
/*#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1,i;
    for(i=2; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The pascal triangle is:"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

//n number sum
/*#include<iostream>
using namespace std;
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}*/

//check whether the input is pythagorean triplet or not
#include<iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int x,y,z;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"Enter the value of z: ";
    cin>>z;
    if(check(x,y,z))
    {
        cout<<"Pythagorean Triplet";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet!!";
    }
}
