//Palindrome word
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    char a[n + 1]; 
    cout << "Enter name: ";
    cin >> a;
    bool check = true;
    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n-1-i]) 
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        cout << "YES it is a Palindrome word" << endl;
    }
    else
    {
        cout << "NO it is not a Palindrome!!" << endl;
    }
    return 0;
}
