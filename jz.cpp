#include<iostream>
using namespace std;
main()
{
	int a[3][3],b[3][3],s[3][3],i1,i2,i3,j1,j2,j3;
	for(i1=0;i1<3;i1++)
	for(j1=0;j1<3;j1++)
	cin>>a[i1][j1];
	for(i2=0;i2<3;i2++)
	for(j2=0;j2<3;j2++)
	cin>>b[i2][j2];
	for(i3=0;i3<3;i3++)
	for(j3=0;j3<3;j3++)
	s[i3][j3]=0;
	for(i1=0,i3=0;i1<3;i1++,i3++)
	for(j2=0,j3=0;j2<3;j2++,j3++)
	for(i2=0,j1=0;j1<3;j1++,i2++)
	s[i3][j3]+=a[i1][j1]*b[i2][j2];
	for(i3=0;i3<3;i3++)
	{
	for(j3=0;j3<3;j3++)
	{
	cout<<s[i3][j3] ;cout<<" ";}
	cout<<"\n"<<endl;
	}
	
	
	
 } 
