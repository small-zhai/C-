#include<iostream>
#include<iomanip>
#include<cmath>

//�ж�ĳһ���ǲ������� ,���򷵻� 1 
int rn(int n)
{
	int m=0;
	if(((n%4==0)&&(n%100!=0))||(n%400==0))
	m=1;
	return m;
	
}
//�����йص���

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
    cout<<"���캯��������"<<endl; 
	 
	 
	 }
	 //�������� 
	 CTime::~CTime()
	 {cout<<"��������������"endl; 
	 }
 	
 	//��ʾʱ��
	void CTime::showtime() 
	 {
	 	cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
	 	
	 }
	 //�жϺϷ��� 
	 int CTime::isvalid(int M)
	 {
	 	m=M;
	 	if(year!=0)m=1;
	 	return m;
		 //�������캯��
		 CTime::CTime(CTime&x) 
	{
		year=x.year;
		month=x.month;
		day=x.day;
		cout<<"�������캯��������"<<endl; 
	}
	 }
	
	
/*	//���������� 
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
        CTime  t2(2000,  1,  1);  //����Ĭ���βν�ʱ���ʼ��Ϊ00:00:00
        if  (t1.isvalid())          //������ں�ʱ��Ϸ������������
        {
                int  days=0;
                days=t1.dayDiff(t2);
                cout  <<  "������֮�������"  <<  days  <<  "��"  <<  endl;
                days=t2.dayDiff(t1);
                cout  <<  "������֮�������"  <<  days  <<  "��"  <<  endl;
        }
}
