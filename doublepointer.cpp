/*#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<**p2*10<<endl;
    cout<<*p*8<<endl;
    cout<<i*10<<endl;
}*/

#include<iostream>
using namespace std;
void update(int **p2 )
{
    **p2=**p2+1;
}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
}