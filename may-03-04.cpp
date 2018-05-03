
#include<iostream>
using namespace std;
int main()
{
    int x, y;

    cout << "prefix increment : "<< endl;
    x=5;
    y=++x;

    cout << "y = "<<y << endl;
    cout << "x = "<<x<<endl <<endl;

    cout << "Postfix increment "<<endl;

    x=5;
    y= x++;

    cout << "x = "<<x<<endl;
    cout << "y = "<<y<<endl;
    cout << "x after increment = "<<x;

    return 0;
}
