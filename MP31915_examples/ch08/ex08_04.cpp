#include<iostream>

using namespace std;

void kgtopound(double);//��ƭ쫬�ŧi 
 
int main()
{	
	double kg;
    extern double pound;
	//�Q��extern�׹}��,�i�ޥΫŧi���ƤU�誺�~���ܼ�  
	cout<<"������^�S"<<endl;
	cout<<"-----------------------------------"<<endl;
    cout<<"�@����="<<pound<<"�^�S"<<endl;
    cout<<"-----------------------------------"<<endl;
	cout<<"�п�J�����:";
 	
    cin>>kg;;
   	kgtopound(kg);
   	
    
 	return 0;	
}//�ŧi�b��ƥ~���~���ܼ�
   double pound=2.204634;
   
void kgtopound(double kg)
{
     
	cout<<kg<<"����"<<"="<<pound*kg<<"�^�S"<<endl;
	// ����Ʀb�~���ܼ�pound���U��,�]���i�����ϥ� *
}


