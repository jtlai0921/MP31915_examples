#include <iostream>
#include <cstring>      

using namespace std;

int main()
{
	char Work_Str[80];  //�w�q�r���}�C Work_Str[80] 
	char Str_1[40];     //�w�q�r���}�C Str_1[40] 
	char Str_2[40];     //�w�q�r���}�C Str_2[40] 
	
    cout<<"����U�C2�Ӧr��:"<<endl;
    cout<<"�п�J�Ĥ@�Ӧr��:"<<endl; 
    cin>>Str_1;
    cout<<"Str_1="<<Str_1<<endl;
    cout<<"�п�J�ĤG�Ӧr��:"<<endl; 
    cin>>Str_2;
    cout<<"Str_2="<<Str_2<<endl;
	cout<<endl;    //���� 

    //����r�ꪺ�j�p 
	if ( strcmp(Str_1, Str_2) )   //�ϥ� strcmp() �禡����r��
		if ( strcmp(Str_1, Str_2) > 0 ) //Str_1 �r�� > Str_2 �r�� 
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " > ");    //�s�� ">" �Ÿ� 
			strcat(Work_Str, Str_2);
		}
		else                            //Str_1 �r�� < Str_2 �r�� 
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " < ");    //�s�� "<" �Ÿ� 
			strcat(Work_Str, Str_2);
		}
	else                                //Str_1 �r�� = Str_2 �r�� 
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " = ");    //�s�� "=" �Ÿ� 
			strcat(Work_Str, Str_2);
		}

	cout<<"��������G:"<<Work_Str;
	                                    //��ܵ��G 
		
	cout<<endl;         // ���� 
 
    
    return 0;
}
