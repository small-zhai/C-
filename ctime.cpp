#include<iostream>
#include<iomanip>
#include<cmath>

//判断某一年是不是闰年 ,是则返回 1 
int rn(int n)
{
	int m=0;
	if(((n%4==0)&&(n%100!=0))||(n%400==0))
	m=1;
	return m;
	
}
//构造有关的类

class CTime
{
	public:
			CTime (int Year,int Month,int Day,int Hour,int Minute,int Second);
			Ctime(CTime&x);
			~CTime();
			void showtime() ; 
			int isvalid(int M);
			int daydiff(CTime p); 
			
	private:
			int year,month,day,hour,minute,second,days,m=0;
				
 };
 CTime::CTime (int Year,int Month,int Day,int Hour,int Minute,int Second)
 {
 	year=Year;month=Month;day=Day;hour=Hour;minute=Minute;second=Second;
 	if(rn(year)&&hour<12&&minute<60&&second<60)
 	{if(month>12)
 	 if(month==1||month==3||month==5||month==7||month==8||month==10||month==12&&day>31)
 	if(month==9||month==4||month==6||month==11&&day>30)
 	 if(month==2&&day>29)
 	{//cout<<"date error"<<endl;
	 year=month=day=hour=minute=second=0;
	 }
	 

	 }
	 else if((!rn(year))&&hour<12&&minute<60&&second<60)
	 {if(month>12)
 	 if(month==1||month==3||month==5||month==7||month==8||month==10||month==12&&day>31)
 	 if(month==9||month==4||month==6||month==11&&day>30)
 	 if(month==2&&day>28)
 	//cout<<"date error"<<endl;
	 year=month=day=hour=minute=second=0;
	 }
	 else if(hour>12||minute>60||second>60)//{cout<<"time error"<<endl;year=month=day=hour=minute=second=0;}
	  if(rn(year)||hour>12||minute>60||second>60)
 	{if(month>12)
 	 if(month==1||month==3||month==5||month==7||month==8||month==10||month==12&&day>31)
 	 if(month==9||month==4||month==6||month==11&&day>30)
 	 if(month=2&&day>29)
 	//cout<<"date and time error"<<endl;
	 year=month=day=hour=minute=second=0;
	 }
	  else if((!rn(year))||hour>12||minute>60||second>60)
 	{if(month>12)
 	 if(month==1||month==3||month==5||month==7||month==8||month==10||month==12&&day>31)
 	 if(month==9||month==4||month==6||month==11&&day>30)
 	 if(month=2&&day>28)
 	//cout<<"date and time error"<<endl;
	 year=month=day=hour=minute=second=0;
    }
    cout<<"构造函数被调用"<<endl; 
	 
	 
	 }
	 //析构函数 
	 CTime::~CTime()
	 {cout<<"析构函数被调用"endl; 
	 }
 	
 	//显示时间
	void CTime::showtime() 
	 {
	 	cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
	 	
	 }
	 //判断合法性 
	 int CTime::isvalid(int M)
	 {
	 	m=M;
	 	if(year!=0)m=1;
	 	return m;
		 //拷贝构造函数
		 CTime::CTime(CTime&x) 
	{
		year=x.year;
		month=x.month;
		day=x.day;
		cout<<"拷贝构造函数被调用"<<endl; 
	}
	 }
	
	
/*	//计算天数差 
	int CTime::daydiff(CTime p)
	{
		days=(abs(year-p.year)*365+abs(month-p.month)*30+day-p.day);
		return days
	 } */
	













int  main()
{
        int  year,  month,  day,  hour,  minute,  second;
        cin  >>  year  >>  month  >>  day  >>  hour  >>  minute  >>  second;
        CTime  t1(year,  month,  day,  hour,  minute,  second);
        t1.showTime();
        CTime  t2(2000,  1,  1);  //利用默认形参将时间初始化为00:00:00
        if  (t1.isvalid())          //如果日期和时间合法，则计算天数
        {
                int  days=0;
                days=t1.dayDiff(t2);
                cout  <<  "这两天之间相隔了"  <<  days  <<  "天"  <<  endl;
                days=t2.dayDiff(t1);
                cout  <<  "这两天之间相隔了"  <<  days  <<  "天"  <<  endl;
        }
}
