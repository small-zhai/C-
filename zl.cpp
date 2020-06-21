#include<iostream>
using namespace std;
 class Car;
 class Boat;
 int totalweight(Boat& b,Car &c);
class Boat
{
	public:
		Boat(int weight):weight(weight){
		}
		int Getweight(){return weight;
		}
		
	friend int totalweight(Boat& b,Car& c);
	private:
		int weight; 
};
class Car
{
	public:
		Car(int weight):weight(weight){
		}
		
		int Getweight(){return weight;
		}
		friend int totalweight(Boat& b,Car& c);
	private:
		int weight;
};







int  totalweight(Boat&  b,Car&  c)
{
        return  b.weight+c.weight;
}
int  main()
{
        Boat  b(100);
        Car  c(200);
        cout<<totalweight(  b,  c)<<endl;
        return  0;
}
