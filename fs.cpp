#include<iostream>
#include<iomanip>
using namespace std;
void f(float a1,float a2,float b1,float b2)
{
	float m,n;
	m=a1-b1;
	n=a2-b2;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<m<<" "<<n;
}

main()
{
	float a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	f(a1,a2,b1,b2);
	
}
