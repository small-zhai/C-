#include  <iostream>
#include  <cstring>
using  namespace  std;

int  cmpGT(const  int  *p1,  const  int  *p2)
{
//ʵ�������Ƚϣ�������ڣ��򷵻�1�������򷵻�0��С���򷵻�-1
int m=0;
if(*p1>*p2)m=1;
if(*p1<*p2)m=-1;
return m;

}
int  cmpLT(const  int  *p1,  const  int  *p2)
{
//ʵ�������Ƚϣ�������ڣ��򷵻�-1�������򷵻�0��С���򷵻�1
int m=0;
if(*p1>*p2)m=-1;
if(*p1<*p2)m=1;
return m;


}

void  swap(int  *p1,  int  *p2)
{
//ʵ���������α�����ֵ����
int n;
n=*p1;
*p1=*p2;
*p2=n;

}

void  bubble(int  *base,    int(*cmp)(const  int  *,  const  int  *))
{
//�������ﲹ��ð�����������main�����ж�bubble�����ĵ��ã������βε�����
int i=0,j=0;
for(j=0;j<10;j++)
{
	for(i=0;i<9;i++)
	if(cmp((base+i), (base+i+1))>0)
	swap((base+i),(base+i+1));
}


}

int  main()
{
        int  arr[]  =  {  1,  3,  5,  7,  9,  2,  4,  6,  8,  0  };
        int  i  =  0;
        bubble(arr,    cmpGT);
        for  (i  =  0;  i  <  10;  i++)
        {
                cout<<arr[i]<<"  ";
        }
        cout<<endl;

        bubble(arr,    cmpLT);
        for  (i  =  0;  i  <  10;  i++)
        {
                cout<<arr[i]<<"  ";
        }        
        cout<<endl;
        return  0;
}
