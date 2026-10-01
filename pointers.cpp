/*#include<iostream>
using namespace std;
int main()
{
char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
}*/

/*#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}
*/

/*#include<iostream>
using namespace std;
int main()
{
    int a[10]={23,22,21};
    int *ptr=&a[1];
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<a[0]<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;

void sum(int *p, int n)
{
    *p = 0;  
    for(int i = 1; i <= n; i++)
    {
      *p=*p+i;  
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result;
    sum(&result, n);
    cout << "Sum of first " << n << " numbers: " << result << endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
  int f=6;
  int *p=&f;
  int *q = p;
  (*q)++;
  cout<<f<<endl;
}*/

#include<iostream>
using namespace std;
void update(int &n)
{
  n=n+1;
}
int main()
{
  int n=5;
  cout<<n<<endl;
  update(n);
  cout<<n<<endl;
  return 0;
}
