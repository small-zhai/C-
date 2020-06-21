#include  <iostream>
using  namespace  std;

class Point 
{
public:
	Point (int X=0,int Y=0){x=X;y=Y;
	}
	Point &operator++();
	Point operator++(int); 
	friend ostream & operator <<(ostream &,const Point &);
private:
 	int x,y; 
 } ;
Point &Point::operator++()
{
	x++;y++;
	return *this;
}
Point Point::operator ++(int)
{
	Point old=*this;
	++(*this);
	return old; 
}
ostream &operator<<(ostream &output,const Point &right)
{
	output<<"("<<right.x<<","<<right.y<<")"<<endl;
	return output;
}
int  main()
{
        Point  a(1,3);
        cout<<a;
        cout<<a++;
        cout<<++a;
        return  0;
}
