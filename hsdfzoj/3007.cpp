#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double r,h,pai=3.14;
	double a,b,c,d,e;
	cin>>r>>h;
	a=2*pai*r;
	b=pai*r*r;
	c=4*pai*r*r;
	d=(4.0000/3.0000)*pai*r*r*r;
	e=pai*r*r*h;
	cout <<"C1="<< setprecision(1) << fixed <<a<< endl;
	cout <<"Sa="<< setprecision(1) << fixed <<b<< endl;
	cout <<"Sb="<< setprecision(1) << fixed <<c<< endl;
	cout <<"Va="<< setprecision(1) << fixed <<d<< endl;
	cout <<"Vb="<< setprecision(1) << fixed <<e<< endl;

}
