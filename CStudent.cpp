#include  <iostream>
#include  <string>
using  namespace  std;

class  CStudent
{
	public:
		CStudent(char a[10]="noname",int b=0)
		{	int i;
		for(i=0;i<10;i++)
		A[i]=a[i];
			B=b;
			++count;
			cout<<A<<" is contructing"<<endl;
		}
		~CStudent()
		{--count;
		cout<<A<<" is destructing"<<endl;
		}
		static int getcount()
		{
			return count;
		}
		void printname()
		{
			cout<<"name:"<<A<<endl;
		}
	private:
		static int count;
		char A[10];
		int B;

};
//请在这里初始静态成员变量

int CStudent::count=0;
int  main()
{
        cout  <<  "现在有学生"  <<  CStudent::getcount()  <<  endl;
        {
                CStudent  stuB[5];
                stuB[4].printname();
                cout  <<  "现在有学生"  <<  CStudent::getcount()  <<  endl;
        }
        cout  <<  "现在有学生"  <<  CStudent::getcount()  <<  endl;
        {
                CStudent  stuA[2]  =  {CStudent("Tom",  3),  CStudent("Jerry",  2)};
                for  (int  i  =  0;  i  <  2;  i++)
                {
                        stuA[i].printname();
                }
                cout  <<  "现在有学生"  <<  CStudent::getcount()  <<  endl;
        }
        cout  <<  "现在有学生"  <<  CStudent::getcount()  <<  endl;

        return  0;
}
