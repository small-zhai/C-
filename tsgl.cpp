#include  <iostream>
using  namespace  std;
class  Book
{
	public:
		void SetID(int n);
		void SetName(string n);
		void SetAuthor(string n);
		void SetIntroduction(string n);
		void SetDate(string n);
		void SetPage(int n);
		Book(const Book&b);
		int GetID();
		string GetAuthor();
		string GetName();
		string GetDate();
		Book();
		~Book();
	private:
		int m_ID,m_page;
		string m_name,m_introduction,m_author,m_date;
		 
//���ڴ˴�����Book��Ķ���


};
//���ڴ˴�����Book��ĳ�Ա����ʵ��
void Book::SetPage(int n)
{
	m_page=n;
}
void Book::SetID(int n)
{
	m_ID=n;
	
}
void Book::SetName(string n)
{
	m_name=n;
}
void Book::SetAuthor(string n)
{
	m_author=n;
	
}
void Book::SetIntroduction(string n)
{
	m_introduction=n;
}
void Book::SetDate(string n)
{
	m_date=n;
}
int Book::GetID()
{
	return m_ID;
}
string Book::GetName()
{
	return m_name;
}
string Book::GetAuthor()
{
	return m_author;
}
string Book::GetDate()
{
	return m_date;
}
Book::Book()
{
	m_ID=0;
	m_page=0;
}
Book::Book(const Book&b)
{
	m_ID=b.m_ID;
	m_name=b.m_name;
	m_introduction=b.m_introduction;
	m_author=b.m_author;
	m_date=b.m_date;
	m_page=b.m_page;
}
Book::~Book()
{
	
}

class  Store
{
//���ڴ˴�����Store��Ķ���
	public:
		void in(Book&b);
		void out(string name);
		Book findbyID(int ID);
		Book findbyName(string name);
		void printList();
		int GetCount();
		void GetID();
		Store();
		Store(int n);
		 ~Store();
		Store(const Store& other);
	private:
		Book *m_pBook;
		int m_Count;
		Book *book1;

};
//���ڴ˴�����Store��ĳ�Ա����ʵ��
Store::Store()
{
	m_Count=0;
	m_pBook=0;
	book1=0;
	cout<<"Store default comstructor called!"<<endl;
}
Store::Store(int n)
{
	m_Count=n;
	m_pBook=new Book[n];
	book1=0;
	cout<<"Store constructor with (int n) called!"<<endl;
	
}
Store::~Store()
{
	m_Count=0;
	book1=0;
	if(m_pBook!=0)
	delete[]m_pBook;
	cout<<"Store destructor called!"<<endl;
	
}
Store::Store(const Store&p)
{
	m_pBook=p.m_pBook;
	m_Count=p.m_Count;
	book1=p.book1;
}
int Store::GetCount()
{
	return m_Count;
}
void Store::in(Book&b)
{
	int i=0;
	book1=new Book[m_Count+1];
	for(i=0;i<m_Count;i++)
	{
		book1[i]=m_pBook[i];
		
	}
	book1[i]=b;
	m_pBook=book1;
	m_Count=m_Count+1;
}
void Store::out(string name)
{
	int i=0;
	book1=new Book[m_Count-1];
	for(i=0;i<m_Count-1;i++)
	{
		if(m_pBook[i].GetName()==name)
		{
			book1[i]=m_pBook[i+1];
		}
		else
		{
			book1[i]=m_pBook[i];
		}
	}
	m_pBook=book1;
	m_Count=m_Count-1;
}
Book Store::findbyID(int ID)
{
	Book book2;
	for(int i=0;i<m_Count;i++)
	{
		if(m_pBook[i].GetID()==ID)
		{
			return m_pBook[i];
			break;
		}
	}return book2;
}
Book Store::findbyName(string name)
{
	Book book1;
	for(int i=0;i<m_Count;i++)
	{
		if(m_pBook[i].GetName()==name)
		{
			return m_pBook[i];
			break; 
		}
	}
	return book1;
}
void Store::printList()
{
	cout<<"There are totally "<<m_Count<<" Books."<<endl;
	for(int i=0;i<m_Count;i++)
	{
		if(m_pBook[i].GetID()!=0)
		cout<<"ID="<<m_pBook[i].GetID()<<";"<<"Name:"<<m_pBook[i].GetName()<<";"<<"Author:"<<m_pBook[i].GetAuthor()<<";"<<"Date:"<<m_pBook[i].GetDate()<<";"<<endl;	}
}

int  main()
{
        Store  s;
        Book  b1,b2,b3;
        b1.SetID(1);
        b1.SetName("C++  ���Գ������(��4��)");
        b1.SetAuthor("֣��");
        b1.SetIntroduction("����C++����������֪ʶ");
        b1.SetDate("201007");
        b1.SetPage(529);
        b2.SetID(2);
        b2.SetName("��ɢ��ѧ");
        b2.SetAuthor("��Т��");
        b2.SetIntroduction("���������߼���ν���߼��������ۡ�����ϵͳ��ͼ��");
        b2.SetDate("198209");
        b2.SetPage(305);
        b3.SetID(3);
        b3.SetName("c�������");
        b3.SetAuthor("̷��ǿ");
        b3.SetIntroduction("����C��������еĻ���֪ʶ��������ʽ���﷨��");
        b3.SetDate("201006");
        b3.SetPage(355);

        cout<<"��һ�������"<<endl;
        s.in(b1);
        cout<<"�ڶ��������"<<endl;
        s.in(b2);
        cout<<"�����������"<<endl;
        s.in(b3);
        cout  <<"���п���鼮������"<<s.GetCount()  <<  endl;
        cout  <<"���Ҳ�����ͼ�飺��ɢ��ѧ"  <<  endl;
        Book  tmpbook=s.findbyName("��ɢ��ѧ");
        if(tmpbook.GetID()!=0)
        {
                s.out("��ɢ��ѧ");
                cout  <<"��ɢ��ѧ  �ѳɹ�����"  <<  endl;
        }
        else
                cout<<"û���ҵ�nameΪ��ɢ��ѧ����"<<endl;
        cout  <<"���п���鼮������"<<s.GetCount()  <<  endl;

        cout  <<"����ͼ��  ID��3"  <<  endl;
        tmpbook=s.findbyID(3);
        if(tmpbook.GetID()!=0)
                cout<<"�ҵ�IDΪ"<<3<<"���飬������"<<tmpbook.GetName()<<endl;
        else
                cout<<"û���ҵ�IDΪ"<<3<<"����"<<endl;

        cout  <<"����ͼ��  name����ɢ��ѧ"  <<  endl;
        tmpbook=s.findbyName("��ɢ��ѧ");
        if(tmpbook.GetID()!=0)
                cout<<"�ҵ�nameΪ��ɢ��ѧ���飬ID��"<<tmpbook.GetID()<<endl;
        else
                cout<<"û���ҵ�nameΪ��ɢ��ѧ����"<<endl;

        cout<<"������п��ͼ�����Ϣ"<<endl;
        s.printList();
        cout<<"�������н���"<<endl;
        return  0;
}

