#include <iostream>  

using namespace std;
                     
int main()
{
     cout<<"�C�X�ƭ�1~70��5�����ƻP7�����ơA�����]�t5�P7��������:"<<endl;

	 for (int count=1; count <= 70; count++)			  
	 {
		 if ( ((count % 5) == 0) && ((count % 7) == 0))    
			 continue;  //�Y�O5�P7��������,�h�~��U�@�h                                  
		 else if ( (count % 5) == 0 )                       
			 cout<<count<<' ';  //5������                        
		 else if ( (count % 7) == 0)                   
			 cout<<count<<' '; //7������                   
	 }
	cout<<endl;
	
	
    return 0;                                      
}
