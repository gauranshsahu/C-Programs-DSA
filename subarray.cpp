// printing all the subarrays
/*#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int max=0,min=0;
    cout<<endl<<"The subarrays are: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}*/

// maximum subarray sum
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int maxsum=INT_MIN;
    cout<<endl<<"The subarrays are: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int sum=0;
            for(k=i;k<=j;k++)
            {
                sum=sum+a[k];
                cout<<a[k]<<" ";
            }
            cout<<endl;
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"The maximum of subarray is: "<<maxsum;
return 0;
}*/

// another method
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int currsum[n+1];
    currsum[0]=0;
    for(i=0;i<=n;i++)
    {
        currsum[i] = currsum[i-1]+a[i-1];
    }
    int maxsum=INT_MIN;
    for(i=1;i<=n;i++)
    {
        int sum=0;
        for(j=0;j<i;j++)
        {
            sum=currsum[i]-currsum[j];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<endl<<"The maximum of subarray is: "<<maxsum;
return 0;
}*/

// kadane's algorithm to find max subarray sum
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int currsum=0;
    int maxsum=INT_MIN;
    for(i=0;i<n;i++)
    {
        currsum=currsum+a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    cout<<endl<<"The maximum of subarray is: "<<maxsum;
return 0;
}*/

// circular maximum subarray sum
/*#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n)
{
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum=currsum+a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main()
{
    int i,j;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int wrapsum,nonwrapsum;
    nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+kadane(a,n);
    cout<<endl<<"The maximum of subarray is: "<<max(wrapsum,nonwrapsum);
return 0;
}*/

// pairsum problem
/*#include<iostream>
using namespace std;
bool pairsum(int a[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the pairsum: ";
    cin>>k;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<pairsum(a,n,k)<<endl;
}*/

// another method first array will be sort then pairsum
/*#include <iostream>
using namespace std;
bool pairsum(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            cout<<"YES!!"<<endl;
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the pairsum: ";
    cin >> k;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << "Array after pass " << (n - i) << ": ";
        for (int x = 0; x < n; x++)
        {
            cout << a[x] << " ";
        }
        cout << endl;
    }
    cout << pairsum(a, n, k) << endl;
}*/

//user giving sorted array then pairsum code
#include <iostream>
using namespace std;
bool pairsum(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            cout<<"YES!!"<<endl;
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the pairsum: ";
    cin >> k;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << pairsum(a, n, k) << endl;
}