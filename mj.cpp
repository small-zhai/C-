
#include  <iostream>
using  namespace  std;
const  float  pi=3.14159;

class Shape
{
	public:
		Shape(int a){m_ID=a;cout<<"Shape constructor called:"<<m_ID<<endl;
		}
		int getter(){
		return m_ID;}
		int  setter(){
			return m_ID;
		}
		int getArea(){return 0;
		}
		~Shape(){cout<<"Shape destructor called:"<<m_ID<<endl;
		}
	private:
		int m_ID;
 } ;
 class Circle: public Shape
 
 {
 	public:
 		Circle(int R,int ID):Shape(ID){b=ID;r=R;cout<<"Circle constructor called:"<<b<<endl;}
		float getArea(){return pi*r*r;
		
		}
		~Circle(){cout<<"Circle destructor called:"<<getter()<<endl;
		
		}
		 
	private:
		int r,b;
 		
 };
 class Rectangle:public Shape
 {
 	public:
 		Rectangle(int A,int B,int ID):Shape(ID){c=ID;a=A;b=B;
 			cout<<"Rectangle constructor called:"<<c<<endl;
		 
		 }
		 int getArea(){return a*b;
		 }
		 ~Rectangle(){
		 	cout<<"Rectangle destructor called:"<<c<<endl;
		 }
	private:
		int a,b,c;
 };
 

int  main()
{
        Shape  s(1);//1表示ID
        Circle  c(4,2);//4表示半径，2表示ID
        Rectangle  r(4,  5,3);//4和5表示长和宽，3表示ID
        cout<<"Shape的面积"<<s.getArea()<<endl;
        cout<<"Circle的面积"<<c.getArea()<<endl;
        cout<<"Rectangle的面积"<<r.getArea()<<endl;
}
