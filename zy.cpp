#include  <iostream>
#include  <cmath>
using  namespace  std;

//判断是否为素数
int  isPrime(long  num)
{
int i,m=1;
for(i=2;i<num;i++)
{if(num%i==0)
m=0;}
return m;

}

//计算质因素分解，
void  factorization(long  n,


long f[100],int &j
)
{
long i,k;
if(isPrime(n))
cout<<n;
else{
for(i=2,k=0;n>0&&i<=n;i++)
{
if(n%i==0)
{n=n/i;
f[k]=i;
k++;
i--;
}}j=k;}

        return;
}

int  main()
{
        long  n;
        long  factor[100];
        int  numofFactor  =  0;
        cin  >>  n;
        factorization(n,  factor,  numofFactor);
        for  (int  i  =  0;  i  <  numofFactor;  i++)
        {
                cout  <<  factor[i]  <<  "  ";
        }
        cout  <<  endl;
        return  0;
}
