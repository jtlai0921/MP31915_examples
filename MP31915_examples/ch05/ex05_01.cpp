#include <iostream>

using namespace std;

int main()
{
	int score[10]={64,84,91,100,58,71,66,43,67,84};  //�ŧi�ê�l�ư}�C
	int degree[10]={0};                              //�ŧi�ê�l�ư}�C
	int i,j,sum=0;
	double avg=0.0;

	//�Q�ΰj��p���`���A�û��W���������ƯŶZ�H�� 
	for (i=0; i<10; i++)
	{
		sum += score[i];            //���`�� 
		if (score[i]/10 == 10)
			degree[9]++;            //���Z��100�A�h�N���ޭ�9�������[1
		else
			degree[score[i]/10]++;  //���W���������ƯŶZ�H�� 
	}
	avg = (double)sum /(double)10;// �p�⥭�� 
 
    cout<<"�`��="<<sum<<"����="<<avg<<endl; 
     cout<<"-----------------------------"<<endl;
    cout<<"�H�Ƥ��G�Ϧp�U�G"<<endl;
    cout<<"-----------------------------"<<endl;
	cout<<"���ƯŶZ\t�H��"<<endl;
	cout<<"-----------------------------"<<endl;
	
    for (i=0; i<10; i++)
	{
     cout<<i*10<<'~'<<i*10+9<<'\t'<<'\t'; //�]�w���ƯŶZ����X��r
		for (j=0;j<degree[i];j++)
			cout<<"*";                //�H�P���N��ӯŶZ���H�� 
	 cout<<endl;
	}
 
   
   return 0;
}
