#include<iostream>
#include<cstdlib>
using namespace std;
//main()���[�J�޼�
int main(int argc, char *argv[])
{
	int i;
	double sum=0;
	double avg=0;
	//�������O�ɨS����J�r���
	if(argc==1)
	{
  		cout<<"�Цb���O����J���Z!!!"<<endl;
	}
	
    else 
    {
    cout<<"�U�즨�Z: "; 
    for(i=1; i<argc; i++)
    {
    	//��X�C�@�Ӧ��Z�r��
        cout<<argv[i]<<" ";
    	//�N���Z�r���ഫ����ƫ��A
   		sum+=atoi(argv[i]);
	}
	cout<<endl<<"-------------------------------------------"<<endl;
	//��X���Z�`�M�M����
 	cout<<"���ƪ��`�M="<<sum<<endl;
	cout<<"���ƥ���="<<sum/(argc-1)<<endl;// argc-1 ������h�{�������W�� 
     }
     
 	 
     return 0;
}
