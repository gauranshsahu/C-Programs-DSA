//Selection Sort
/*#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(k=0;k<n;k++)
    {
        cin>>a[k];
    }
    cout<<"Unsorted array: ";
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<endl<<"sorted array: ";
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    return 0;
}*/

//Bubble Sort
/*#include<iostream>
using namespace std;
int main() {
    int i, j, k, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array: ";
    for (k = 0; k < n; k++) {
        cin >> a[k];
    }
    cout << "Unsorted array: ";
    for (k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << "Array after pass " << (n - i) << ": ";
        for (k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}*/

///Insertion Sort
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the Elements: "<<endl;
    for(k=0;k<n;k++)
    {
        cin>>a[k];
    }
    cout<<"Unsorted array: ";
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    for(i=1;i<n;i++)
    {
        int current = a[i];
        j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<endl<<"Sorted array: ";
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    return 0;
}