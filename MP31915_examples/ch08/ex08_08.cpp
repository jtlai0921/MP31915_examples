#include<iostream>

using namespace std;

void UStoTW(float);
float exchange_rate;           //�ŧi�b��ƥ~���ܼ�

 
int main()
{	
	auto float dollar;
	 	cout<<"�����I���x��...\n"<<endl;
	 	cout<<"�п�J�ثe�ײv : "<<endl;
	 	cin>>exchange_rate;
        cout<<"�@����="<<exchange_rate<<"�O��";
        cout<<"�п�J���I���h�֥x��(���:����) : ";
        cin>>dollar;    
	    UStoTW(dollar);
  	
    
 	return 0;	
}

void UStoTW(float dollar)
	{
	    extern float exchange_rate; //extern �~���ܼ�
	    cout<<dollar<<"����="<< exchange_rate*dollar<<"�O��"<<endl;
    }
