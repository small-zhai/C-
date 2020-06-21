#include<iostream>
using namespace std;
main()
{
	int m,n,i,j,k,s;
	cin>>m;
	s=m;
	n=m/2;
	k=m/3;
	i=m%2;
	j=m%3;
	s+=n+k;
	m=n+k;
	n=m;
	k=m;
	do{
		n+=i;
		k+=j;
		s+=n/2+k/3;
		m=n/2+k/3;
		i=n%2;
		j=k%3;
		n=m;
		k=m;
		
	}while(m>0);
	cout<<s<<endl;
}
