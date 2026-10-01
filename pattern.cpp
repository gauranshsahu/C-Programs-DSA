/*#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}*/

// reverse of above pattern
/*#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}*/

// counting pattern
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    i=1;
    int c=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<c<<" ";
            c=c+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}*/

// triangle star
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
        cout<<j;
        }
        cout<<"6";
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i%2==0)
           {
            cout<<"*"<<" ";
           }
           else{
            cout<<j<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<i<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<j%2<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=n;i>=0;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<i%2<<" ";
        }
        cout<<endl;
    }
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j%2<<" ";
        }
        cout<<endl;
    }
}*/

// rhombus star pattern
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}*/

// triangle number pattern
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}*/

// pascal triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Print decreasing sequence
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k--;
        } // Print increasing sequence
        k = 2;
        for (int j = 1; j < i; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}