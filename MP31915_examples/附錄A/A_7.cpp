#include<iostream>
#include<cstdlib>//�ޤJ�üƨ禡�����Y��
#include<ctime>//�ޤJ�ɶ��禡�����Y�� 
using namespace std;

int main()
{	
	int i;
	long int seed;
	cout<<"===srand()�üƨ��==="<<endl;
	cout<<"���ͪ��ü�:"<<endl;
	
    seed=time(NULL);//�H�t�ήɶ���@�üƺؤl
	srand(seed);
	
    for(i=0; i<5; i++)
	{		
  		cout<<rand()<<" ";
	}
	cout<<endl;
	
    
 	return 0;
}
