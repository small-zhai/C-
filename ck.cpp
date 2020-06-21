#include  <iostream>
#include  <iomanip>
using  namespace  std;
//请在此处补充Account类的定义
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
if(m0*100-int(m0*100)!=0){cout<<"您输入的金额不合法"<<endl;m0=0;
}




}



void Account::deposit(double M1) 
{m1=M1;if((int)(m1*1000)%10!=0)
{
cout<<"您输入的金额不合法"<<endl;m1=0;}else m0=m0+m1;}

void Account::withdraw(double M2) 
{m2=M2;if((int)(m2*1000)%10!=0)
{
cout<<"您输入的金额不合法"<<endl;m2=0;}
 if(m2>m0){cout<<"您的存款金额不足"<<endl;m2=0; }
m0=m0-m2;

}


void Account::printmoney() 
{
  
  cout<<name<<"的存款为"<<fixed<<setprecision(2)<<m0<<endl;
  

}





int  main()
{
        Account  tom;
        tom.init("32020320011001876X",  "Tom  Black",  "男",  19,  2000.89);
        tom.printmoney();//输出：Tom  Black的存款为2000.89
        tom.deposit(89.471);//输出：您输入的金额不合法
        tom.printmoney();//输出：Tom  Black的存款为2000.89
        tom.deposit(10000);
        tom.printmoney();//输出：Tom  Black的存款为12000.89
        tom.withdraw(10001);
        tom.printmoney();//输出：Tom  Black的存款为1999.89
        tom.withdraw(10000.123);//输出：您输入的金额不合法
        tom.printmoney();//输出：Tom  Black的存款为1999.89
        tom.withdraw(10000.9);//输出：您的存款金额不足
        tom.printmoney();//输出：Tom  Black的存款为1999.89
        Account  jerry;
        jerry.init("320203200910116569",  "Jerry  Black",  "女",  11,  100.956);//输出：您输入的金额不合法
        jerry.printmoney();//输出：Jerry  Black的存款为0.00
}

