#include  <iostream>
#include  <iomanip>
using  namespace  std;
//���ڴ˴�����Account��Ķ���
class Account
{
   public:
             void init(char Id[18],char Name[10],char Xb[4],int Nl,double M0);
             void printmoney() ;
             void deposit(double M1) ;
             void withdraw(double M2);
  private:
               char id[18],name[10],xb[4];
               
                int  nl;
                double  m0=0,m1=0,m2=0;
             
              
};
void Account::init(char Id[20],char Name[12],char Xb[4],int Nl,double M0)
{int i;
for(i=0;i<13;i++)
{name[i]=Name[i];}m0=M0;
if(m0*100-int(m0*100)!=0){cout<<"������Ľ��Ϸ�"<<endl;m0=0;
}




}



void Account::deposit(double M1) 
{m1=M1;if((int)(m1*1000)%10!=0)
{
cout<<"������Ľ��Ϸ�"<<endl;m1=0;}else m0=m0+m1;}

void Account::withdraw(double M2) 
{m2=M2;if((int)(m2*1000)%10!=0)
{
cout<<"������Ľ��Ϸ�"<<endl;m2=0;}
 if(m2>m0){cout<<"���Ĵ�����"<<endl;m2=0; }
m0=m0-m2;

}


void Account::printmoney() 
{
  
  cout<<name<<"�Ĵ��Ϊ"<<fixed<<setprecision(2)<<m0<<endl;
  

}





int  main()
{
        Account  tom;
        tom.init("32020320011001876X",  "Tom  Black",  "��",  19,  2000.89);
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ2000.89
        tom.deposit(89.471);//�����������Ľ��Ϸ�
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ2000.89
        tom.deposit(10000);
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ12000.89
        tom.withdraw(10001);
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89
        tom.withdraw(10000.123);//�����������Ľ��Ϸ�
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89
        tom.withdraw(10000.9);//��������Ĵ�����
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89
        Account  jerry;
        jerry.init("320203200910116569",  "Jerry  Black",  "Ů",  11,  100.956);//�����������Ľ��Ϸ�
        jerry.printmoney();//�����Jerry  Black�Ĵ��Ϊ0.00
}

