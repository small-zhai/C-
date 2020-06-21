#include  <iostream>
using  namespace  std;
class Complex
{
	public:
		Complex (double r=0.0,double i=0.0){
			real=r;imag=i;
		}
		Complex operator + (Complex c);
		Complex operator - (Complex c);
		Complex operator + (double c);
		Complex operator - (double c);
		void print ();
	private :
		double real ,imag,C;
 } ;
 Complex Complex::operator +(Complex c)
 {
 	Complex d;
 	d.real=real+c.real;
 	d.imag=imag+c.imag;
 	return Complex (d.real,d.imag);
  } 
  Complex Complex ::operator -(Complex c)
  {
  	Complex d;
  	d.real=real-c.real;
  	d.imag=imag-c.imag;
  	return Complex (d.real,d.imag);
  }
  Complex Complex::operator -(double c)
  {
  	Complex d;
  	d.real=real-c;
  	d.imag=imag;
  	return Complex(d.real,d.imag );
  	
	}  
	Complex Complex::operator +(double c)
	{
		Complex d;
		d.real=real+c;
		d.imag=imag;
		return Complex(d.real,d.imag );
		
	 } 
	void Complex::print() 
	{
		cout<<real<<"+"<<imag<<"i";
	 } 

int  main()
{
        Complex  a(3,4),b(1,-1),c;
        c=a+b;
        cout<<"a+b=";
        c.print();
        cout<<endl;
        c=a-b;
        cout<<"a-b=";
        c.print();
        cout<<endl;
        c=a+100;
        cout<<"a+100=";
        c.print();
        cout<<endl;
        c=a-2.5;
        cout<<"a-2.5=";
        c.print();
        cout<<endl;

        return  0;
}
