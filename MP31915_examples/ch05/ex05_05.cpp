#include <iostream>

using namespace std;

int main()
{
	char Str_1[40];                   //�w�q�r���}�C Str_1[40] 
	char Str_2[40];                 //�w�q�r���}�C Str_2[40] 
	int count;
    
    cout<<"�r�� Str_1 �����e:";
    cin>>Str_1;
	cout<<"�r�� Str_2 �����e:";
	cin>>Str_2;
	
	for (count=0; Str_1[count] != '\0' && Str_2[count] != '\0'; count++)
	     if ( Str_1[count] == Str_2[count] )
			 continue;                                //�۵��h�~�����U�@�Ӧr�� 
		 else
			 break;                                   //���۵��Y���X�j�骺���� 
		
	if ( Str_1[count] == '\0' && Str_2[count] == '\0' ) //�P�_��Ӧr��O�_������쵲���r�� 
		cout<<"2�Ӧr��۵�...";                     //��ܵ��G 
	 else
		cout<<"2�Ӧr�ꤣ�۵�...";                   //��ܵ��G 

	cout<<endl; 
     
                                     
     return 0;
     
}
