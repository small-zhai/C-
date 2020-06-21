#include  <iostream>
#include<iomanip>
#include  <cmath>
using  namespace  std;

const  double  PI=3.1415926;
//请在此处完善类的设计
class cylinder
{
  
public:
           
         cylinder (double h,double d)
		 {H=h;D=d;cout<<"构造函数被调用"<<endl;};
		 ~cylinder()
		 {cout<<"析构函数被调用"<<endl;};
		 
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

    cout<<"油桶的容积是"<<can.getvolumn()<<" "<<endl;

    cout<<"铁皮的面积是"<<can.getarea()<<endl;

}
