#include <iostream>

using namespace std;

int main()
{
	char Str_1[40];                     
	char Str_2[40];                    
	char Str_3[80];                                  
	int count, s_record;
    
     cout<<"�r�� Str_1 �����e:";
     cin>>Str_1;                                   
	 cout<<"�r�� Str_2 �����e:";
	 cin>>Str_2;                               

	 s_record=0;     //�����ܼ� s_record �k 0�A�ΨӰO�� Str_3 �ҫ����}�C���� 

    for (count=0; Str_1[count] != '\0'; count++, s_record++)  //�N Str_1 �r��ƻs�� Str_3 
		Str_3[s_record]=Str_1[count];

	for (count=0; Str_2[count] != '\0'; count++, s_record++)  // �N Str_2 �r��ƻs�� Str_3 
		Str_3[s_record]=Str_2[count];

	 Str_3[s_record]='\0';                                     //�r��̫�n�[�W NULL �r�� 

    cout<<"�s���᪺�r�� Str_3:"<<Str_3<<endl;                   //��ܦr��s�������G 
	
    
     
    return 0;                                       
}
