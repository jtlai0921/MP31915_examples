#include<iostream>
	
using namespace std;
	
void throwex()
{
	try  // �~�h��try�϶�
	{
			
		try {  // ���h��try��
				
			throw exception(); //��X�@�Өҥ~
		}
		catch(exception e)  //�����ҥ~
		{
			cout<<"�ثe�ҥ~�����v�O�b�禡throwex���ĤG�htry�϶���"<<endl;
			throw; //���s��X�@�Өҥ~
		}
	}
	catch(...) //�����Ҧ����ҥ~
	{
		cout<<"�Ĥ@�htry�϶�,�����Ҧ����ҥ~"<<endl;
	}
	
}
int main()
{
	try {
		throwex();  //�I�s���throwex
		cout<<"�b�禡main����try�϶�"<<endl;  
	}
	catch(exception e)  //�����ҥ~
	{
		cout<<"�ثe�ҥ~�����v�O�b�D���main��"<<endl;
	}
	cout<<"�{�����槹��"<<endl;
		
		
	return 0;
}
