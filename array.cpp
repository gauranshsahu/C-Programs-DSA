//wap to create the array and print elements of array
/*#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"The values in the array is:"<<a[i]<<endl;
    }
    return 0;
}*/

//create the array and delete the element
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,pos;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<"the values in the array are:"<<a[i]<<endl;
    }
    cout<<"Enter the position of the element to delete from (1 to " <<n <<"): ";
    cin>>pos;
    if(pos<0 || pos>n)
    {
        cout<<"Invalid"<<endl;
    }
    for(i=pos-1; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    cout<<"Array after deletion: "<<endl;
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<endl;
    }
    return 0;
}*/

//max and min in array
/*#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Maximum element of the array is: " << max << endl;
    cout << "Minimum element of the array is: " << min << endl;
    return 0;
}*/

//Linear Search
/*#include<iostream>
using namespace std;

int ls(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, i;
    cout << "Enter the Size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter The elements: " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n; i++)
    {
        cout << "The elements are: " << a[i] << endl;
    }
    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;
    int result = ls(a, n, key);
    if(result != -1)
        cout << "Key found at index: " << result << endl;
    else
        cout << "Key not found!" << endl;
    return 0;
}*/

//Binary Search
/*#include<iostream>
using namespace std;
int bs(int a[], int n, int key) {
    int s = 0;
    int e = n; 
    while (s <= e) {
        int mid = (s + e) / 2;
        if (a[mid] == key) {
            return mid;
        } else if (a[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;
    int result = bs(a, n, key);
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}*/

//Max till I
/*#include<iostream>
using namespace std;
int main()
{
    int mx=-19999;
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Maximum till i is: ";
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<endl<<mx;
    }
    return 0;
}*/

//Sum of all subarrays
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for(k=0;k<n;k++)
    {
        cin>>a[k];
    }
    cout<<"Array is: ";
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl<<"Sum of all subarrays are: ";
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}*/

//Length of arithmetic subarray
/*#include<iostream>
using namespace std;
int main()
{
    int j=2,n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int ans=2;
    int pd=a[1]-a[0],curr=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<endl<<"The maximum arithmetic subarray length is: "<<ans<<endl;
    return 0;
}*/

//Subarray with given sum
/*#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the value of Sum: ";
    cin>>s;
    int a[n];
    cout<<"enter array elements: "<<endl;
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
    cout<<"Array elements are: ";
    for(int k=0; k<n; k++)
    {
        cout<<a[k]<<" ";
    }
    int i=0, j=0, st=-1, en=-1, sum=0;
    while(j<n && sum+a[j] <= s)
    {
        sum = sum+a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<endl<<"The Subarray index value is: "<<i+1 <<" "<<j <<endl;
        return 0;
    }
    while(j<n)
    {
        sum = sum + a[j];
        while(sum > s)
        {
            sum = sum - a[i];
            i++;
        }
        if(sum==s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    if (st != -1 && en != -1)
    {
        cout << endl <<"Subarray found from index " << st << " to " << en << endl;
    }
    else
    {
        cout << endl <<"No subarray found" << endl;
    }
    return 0;
}*/

//Smallest missing positive integer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter array elements: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     const int N = 1e6+2;
//     bool check[N];
//     for(int i=0; i<N; i++)
//     {
//         check[i] = false ;//0
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>=0)
//         {
//             check[a[i]] = true;//1
//         }
//     }
//     int ans = -1;
//     for(int i=1; i<N; i++)
//     {
//         if(check[i]==false)
//         {
//             ans = i;
//             break;
//         }
//     }
//     cout<<"The missing term in the array is: "<<ans <<endl;
// }

// largest and smallest index
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size of the array: ";
//     cin>>size;
//     int a[size];
//     cout<<"Enter the elements of the array:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>a[i];
//     }
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int smallestIndex=-1;
//     int largestIndex=-1;
//     for(int i=0;i<size;i++)
//     {
//         if(a[i]<smallest)
//         {
//             smallest=a[i];
//             smallestIndex=i;
//         }
//         if(a[i]>largest)
//         {
//             largest=a[i];
//             largestIndex=i;
//         }
//     }
//     // cout<<"smallest:"<<smallest<<endl;
//     cout<<"smallest Index:"<<smallestIndex<<endl;
//     // cout<<"largest:"<<largest<<endl;
//     cout<<"largest Index:"<<largestIndex<<endl;
//     return 0;
// }

// MAXIMUM SUBARRAY SUM
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int a[]={1,2,3,4,5};
//     int n=5;
//     int maxSum=INT_MIN;
//     for(int st=0; st<n; st++){
//         int currSum=0;
//         for(int end=0; end<n; end++){
//             currSum+=a[end];
//             maxSum=max(currSum,maxSum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

//prime number program
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int i;
//     int c=1;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0){
//             c=0;
//         }
//     }
//     if(c==1){
//         cout<<n<<" "<<"is a Prime Number"<<endl;
//     }
//     else{
//         cout<<n<<" "<<"is not a Prime Number"<<endl;
//     }
//     return 0;
// }

// Fibonacci series program 
// #include<iostream>
// using namespace std;

// int main() {
//     int a = -1, b = 1, c, n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         c = a + b;
//         cout << c << " ";
//         a = b;
//         b = c;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter the start value: ";
    cin>>start;
    cout<<"Enter the end value: ";
    cin>>end;
    for(int i=start; i<=end; i++)
    {
        if(i%7==0 && i%5!=0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
