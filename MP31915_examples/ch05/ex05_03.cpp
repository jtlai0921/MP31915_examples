#include<iostream>

using namespace std;

int main()
{
	int i;//�Χ@�p��r�ꪺ����
	char str[30];
	char str1[30];
	
	cout<<"�п�J�r��:";
	//��J�r��
	 cin>>str;
	
	cout<<"��J���r�ꬰ:"<<str<<endl;
	//�Q��for�j��p��i,�ñN��J���r��ƻs��str1�r��
	for(i=0; str[i]!='\0';i++)
	{
 		str1[i]=str[i];//�v�@�r������ 
    }
    
	str1[i]='\0';//�b�p��r����׮ɡA�ä��]�t�r�굲���r��'\0' 
 	
	cout<<"���r�꦳"<<i<<"�Ӧr��"<<endl;
 	cout<<"��r��str="<<str<<endl;
	cout<<"�ƻs��r��str1="<<str1<<endl;
 	
    
    return 0;
}
