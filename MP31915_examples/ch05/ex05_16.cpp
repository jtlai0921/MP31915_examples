#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main( )
{  
	int i,j,val=0,data[80]={0};
	for (i=0;i<80;i++)
		data[i]=(rand()%150+1);
	while (val!=-1)
	{  
		int find=0;
		cout<<"�п�J�j�M���(1-150)�A��J-1���}�G";
		cin>>val;
		for (i=0;i<80;i++)
		{  
			if(data[i]==val)
			{  
				cout<<"�b�� "<<setw(3)<<i+1<<"�Ӧ�m������ ["<<data[i]<<"]"<<endl;
				find++;
			}
		}
		if(find==0 && val !=-1)
			cout<<"######�S����� ["<<val<<"]######"<<endl;
	}
	cout<<"��Ƥ��e�G"<<endl;
	for(i=0;i<10;i++)
	{ 
		for(j=0;j<8;j++)
			cout<<setw(2)<<i*8+j+1<<"["<<setw(3)<<data[i*8+j]<<"]  ";
		cout<<endl;
	}
	
	
	return 0;
}
