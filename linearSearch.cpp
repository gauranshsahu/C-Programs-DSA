// Linear Search
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter size of the array: ";
//     cin>>size;
//     int a[size];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<size;i++){
//         cin>>a[i];
//     }
//     int target;
//     cout<<"Enter the target element: ";
//     cin>>target;
//     for(int i=0;i<size;i++)
//     {
//         if(a[i]==target)
//         {
//             cout<<"The target element is at index:"<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"No element Found";
//     return 0;
// }

//Reverse of an Array
#include <iostream>
using namespace std;
void reverseArray(int arr[],int sz){
    int start=0,end=sz-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int sz=7;
    reverseArray(arr,sz);
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
