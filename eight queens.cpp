#include<iostream>
using namespace std;
int main()
{
	int p[8][8],i,j,k,y,m,n,q,w;
	char s[8];
	for(i=0;i<8;i++)
	for(j=0;j<8;j++)
	p[i][j]=0;
	for(i=0;i<8;i++)
	cin>>s[i];
	for(i=0;i<8;i++)
	if(s[i]=='*')
	y=i;
	
	for(i=0;i<y;i++)
	{k=s[i]-'1';
	p[i][k]=1;
	
	for(m=0;m<8;m++)
	p[m][k]=1;
	for(n=0;n<8;n++)
	p[i][n]=1;q=i;
		for(i=q;i<8&&k<8;i++,k++)
	p[i][k]=1;
	
	for(i=q,k=s[i]-'1';i<8&&k<8&&i>=0&&k>=0;i--,k--)
	p[i][k]=1;
	
	for(i=q,k=s[i]-'1';i<8&&k<8&&i>=0&&k>=0;i--,k++)
	p[i][k]=1;
	
	for(i=q,k=s[i]-'1';i<8&&k<8&&i>=0&&k>=0;i++,k--)
	p[i][k]=1;i=q;
}

	
	
	

for(i=y+1;i<8;i++)
	{k=s[i]-'1';
	p[i][k]=1;
	
	for(m=0;m<8;m++)
	p[m][k]=1;
	for(n=0;n<8;n++)
	p[i][n]=1;w=i;
	for(i=w;i<8&&k<8;i++,k++)
	p[i][k]=1;
	
	for(i=w,k=s[i]-'1';i<8&&k<8&&i>=0&&k>=0;i--,k--)
	p[i][k]=1;
	
	for(i=w,k=s[i]-'1';i<8&&k<8&&i>=0&&k>=0;i--,k++)
	p[i][k]=1;

	for(i=w,k=s[i]-'1';i<8&&k<8&&i>=0&&k>=0;i++,k--)
	p[i][k]=1;i=w;
	}
	
	
	
	for(i=0;i<8;i++)
	{
	if(p[y][i]!=1)
	{i++;cout<<i;break;
	}if(i>=7) cout<<"No Answer";
	
	}
	
}
