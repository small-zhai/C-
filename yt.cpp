#include  <iostream>
#include<iomanip>
#include  <cmath>
using  namespace  std;

const  double  PI=3.1415926;
//���ڴ˴�����������
class cylinder
{
  
public:
           
         cylinder (double h,double d)
		 {H=h;D=d;cout<<"���캯��������"<<endl;};
		 ~cylinder()
		 {cout<<"��������������"<<endl;};
		 
           double getvolumn() const;
           double getarea() const;
private:
  	
              double H,D;
}; 


double cylinder::getvolumn() const
{return PI*D*D*H;}
 double cylinder:: getarea() const
{return 2*PI*D*D+2*PI*D*H;}



int main()

{

    double d,h;

    cin>>d>>h;

    cylinder can(h,d/2);

    cout<<fixed<<setprecision(6);

    cout<<"��Ͱ���ݻ���"<<can.getvolumn()<<" "<<endl;

    cout<<"��Ƥ�������"<<can.getarea()<<endl;

}
