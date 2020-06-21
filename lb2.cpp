#include <iostream>
#include <iomanip>
using namespace std;


typedef int elementType;
typedef struct node
{
    int data;
    node* next;
} LList, *PList;
template <class T>
class linkedList
{
public:
    linkedList();//���캯��
    virtual ~linkedList();//����������ע��Ҫ���������нڵ����Դ
    void insert( int value );//���棺�����ʼ������ʹ�ã�
    bool initiate();//��ʼ��������ʹ��new��������ͷ��㡣�������ʧ�ܣ��򷵻�false�����򷵻�true
    bool isEmpty();//�жϵ������Ƿ�Ϊ��
    //ɾ���������е�pos��Ԫ�ؽ�㣬����ɾ���Ľڵ��ֵ����value�С�
    //ע�⣺�������Ϊ�ա�ɾ��λ�ô��������ȡ��Լ�ɾ��λ��Ϊ0���������Ҫ��ֹɾ���������Ӧ��Ϣ
    bool remove( int pos, int& value );
    void print();//˳���ӡ����������ǵ�����Ϊ�գ������ Empty
    int Length();//���ص������ȡ�����ǵ�����Ϊ�գ��򷵻�-1
private:
    LList *head;
    T len;
};
template <class T>
//���ڴ˴��������г�Ա������ʵ��
linkedList<T>::linkedList()
{
	head==NULL;
	len=0;
}
template<class T>
 linkedList<T>::~linkedList() 
{
	if(len==0)
	delete head;
	else 
	while(head->next !=NULL)
	{
		PList stat=head;
		head=head->next ;
		delete stat;
	}
	delete head;
}
template<class T>
void linkedList<T>::insert(int value)
{   int count=0;
    len++;
	PList z=head;
	while(z!=NULL&&count<len-1)
	{
		z=z->next ;
		count++;
	}
	PList x=new node();
	x->data=value;
	x->next =z->next;
	z->next =x;
	
}
template<class T> 
bool linkedList<T>::initiate()
{
	head=new node();
	head->next =NULL;
	if(head==NULL)
	return false;
	else
	return true;
}
template<class T>
bool linkedList<T>::isEmpty() 
{
	if(head->next ==NULL)
	return true;
	else return false;
}
template<class T>
bool linkedList<T>::remove(int pos,int& value)
{	
	if(pos<=0)
	{
		cout<<"pos<=0,failed"<<endl;
		return false;
	}
	else if(pos>len)
	{
		cout<<"pos>len,failed"<<endl;
		return false;
	}
	else 
	{  
    PList p=head->next ;
	PList q=head;
	
		int count=1;
		while(p!=NULL)
		{
			if(count==pos)
			{
				q->next =p->next ;
				value=p->data ;
				delete p;
				len--;
				return true;
			}
			else 
			{
				q=p;
				count++;
				p=p->next;
			}
			
		}
	}
 } 
 template<class T>
int linkedList<T>::Length() 
{
	if(head==NULL)
	return -1;
	else return len;
}





//��Ա����print
template<class T>
void linkedList<T>::print()
{
    if( isEmpty() )
    {
        cout << "Empty" << endl;
        return;
    }
    LList* tmp = head->next;
    while(tmp)
    {
        cout <<tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}






int main(int argc, char* argv[])
{
    linkedList<int> L1;
    int n;
    int val;
    //��ʼ������
    if(!L1.initiate())
        return 0;

    cin>>n;//�������������ݸ���
    for(int i=0; i<n; i++) //����n����������������
    {
        cin>>val;
        L1.insert(val);
    }
    cout << "Origin Length��" << L1.Length() << endl;//���������
    cout << "data��" ;
    L1.print();//��ӡ����

    cin>>n;//������Ҫɾ�������ݵ�λ��
    if (L1.remove(n,val))
    {
        //ɾ��λ��n�����ݣ�����ɾ��������ֵ����val��
        cout<<"Delete the data at position("<<n<<"):"<<val<<endl;
        cout<< "New Length��" << L1.Length()<< endl;//���������
        cout<< "data��" ;
        L1.print();//��ӡ����
    }

    return 0;
}



