// searching in 2d array
/*#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cout << "Enter the rows of the array: ";
    cin >> n;
    cout << "Enter the columns of the array: ";
    cin >> m;
    int a[n][m];
    cout << "Enter array elements: " << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    bool flag = false;
    cout << "Enter the element you want to search: ";
    cin >> x;
    cout << "Array elements are: " << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i][j] == x)
            {
                cout << "Element found at position: " << i << " " << j << endl;
                flag = true;
            }
        }
    }
    if(flag == true)
    {
        cout << "Successful Execution!!" << endl;
    }
    else
    {
        cout << "Element not found!!" << endl;
    }
    return 0;
}*/

// transpose of a matrix
/*#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"Enter rows and columns of the array: "<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// Matrix Multiplication
/*#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter the Size of the matrix: ";
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout << "Enter array elements for First matrix: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter array elements for Second matrix: ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] = ans[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/

//matrix search
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,target;
    cout<<"Enter the rows and columns of the array: "<<endl;
    cin>>n>>m;
    cout<<"Enter the element you want to search: "<<endl;
    cin>>target;
    int a[n][m];
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int r=0,c=m-1;
    bool found =false;
    while(r<n && c>=0)
    {
        if(a[r][c]==target)
        {
            found = true;
            break;
        }
        else if(a[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    if(found)
    {
        cout<<"Element Found at position->"<<r<<" "<<c<<endl;
    }
    else{
        cout<<"Element not Found!!";
    }
    return 0;
}
