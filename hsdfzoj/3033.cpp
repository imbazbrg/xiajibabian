#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;
    cout<<setiosflags(ios::fixed);
    if(int(x)%int(y)==0)
        cout<<int(x)/int(y);
    else
        cout<<setprecision(2)<<x/y;
    return 0;
}
