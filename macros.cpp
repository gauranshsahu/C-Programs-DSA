/*#include<iostream>
#define LIMIT 10
using namespace std;
int main()
{
    int b=15;
    b=b+LIMIT;
    cout<<"Value of a is: "<<LIMIT<<endl;
    cout<<b;
    return 0;
}

#include<iostream>
#define AREA(l,b) (l*b)
using namespace std;
int main()
{
    int l1,l2,area;
    cin>>l1>>l2;
    area=AREA(l1,l2);
    cout<<area<<endl;
    return 0;
}

#include<iostream>
using namespace std;
#define INSTA FOLLOWERS
#define FOLLOWERS 500
int main()
{
    cout<<"Gauransh has "<<INSTA <<" followers on insta!!";
    return 0;
}


#include <iostream>
using namespace std;
#define ELE 1, \
			2, \
			3

int main()
{

	int arr[] = { ELE };

	printf("Elements of Array are:\n");

	for (int i = 0; i < 3; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/

#include <iostream>
using namespace std;
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int a = 18;
    int b = 76;
    cout << "Minimum value between " << a << " and " << b << " is: " << min(a, b) << endl;
    return 0;
}
 