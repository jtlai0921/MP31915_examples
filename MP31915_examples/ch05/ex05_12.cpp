#include <iostream>

using namespace std;

int main()
{
	//�ŧi�@�Ӧr��
	char str[]="At the first God made the heaven and the earth."  
			   "And the earth was waste and without form; "
      		   "and it was dark on the face of the deep: "
           	   "and the Spirit of God was moving on the face of the waters.";
	char find[10];  
	int i,j, find_len=0, count=0;
    int index_num;
    
	cout<<"--------------------------------------"<<endl;
	cout<<str<<endl;
    
    cout<<"�п�J�n�j�M���r��:";
	//��J�r��
	cin>>find;
	//���o�j�M�r�ꪺ����
    while(find[find_len]!='\0')
    {
    	find_len++;// �p�����  
    }
    //�}�l�j�M�r��
	for(i=0;str[i]!='\0';i++)
	{
		 if(str[i]==(find[0]) )
	     {
			 for(j=0;j<=find_len;j++)
			 {
				 if(str[i+j]==find[j])
					 continue;
				 else
					 break;
			 }
   		 	 if(j==find_len){
        		cout<<"�b��"<<i<<"��m�j�M��r��"<<endl;
   			 	count++;
		 	 }
		 }
		 
	}
	cout<<"�@��"<<count<<"�ӲŦX���r��"<<endl; 
    
                                
	return 0;
}
