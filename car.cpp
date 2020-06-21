#include  "iostream"
using  namespace  std;

class vehicle
{
	public:
		vehicle()
{
}
		vehicle(int m,int w){
			maxspeed=m;weight=w;
			cout<<"vehicle constructor called. maxspeed:"<<maxspeed<<"; weight"<<weight<<endl;
			
		}
		
		void run(){
			cout<<"vehicle run"<<endl;
		}
		void stop(){
			cout<<"vehicle stop"<<endl;
		}
		~vehicle(){
			cout<<"vehicle destructor called. maxspeed:"<<maxspeed<<"; weight"<<weight<<endl;

		}
	private:
		int weight,maxspeed;
};


class bicycle:virtual public vehicle
{
	public:
	bicycle(int h):vehicle()
	{
		height=h;
		cout<<"bicycle constructor called. height:"<<height<<endl;
	}
	~bicycle(){
		cout<<"bicycle destructor called. height:"<<height<<endl;
		
	}
	private:
		int height;
};
class motorcar:virtual public vehicle
{
	public:
	motorcar(int s):vehicle()
	{
		seatnum=s;
		cout<<"motorcar constructor called. seatnum:"<<seatnum<<endl;

		
	}
	~motorcar()
	{
	cout<<"motorcar destructor called. seatnum:"<<seatnum<<endl;
	
	}
	private:
		int seatnum;
};
class motorcycle:public bicycle,public motorcar
{
	public:
	motorcycle(int a,int b,int c,int d):vehicle(c,d),bicycle(a),motorcar(b)
	{
		cout<<"motorcycle constructor called"<<endl;
	}
	~motorcycle()
	{
		cout<<"motorcycle destructor called"<<endl;
	}
}; 



int  main(int  argc,  char  *argv[])
{
        motorcycle  m(1,  2,  3,  4);//1表示height，2表示setnum，3表示maxspeed，4表示weight
        m.run();
        m.stop();
        return  0;
}
