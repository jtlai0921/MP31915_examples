#include <iostream>

using namespace std;

int main()
{
	int h=10,day=0;	
	do                                  //do-while�j��}�l
   {                                 
		day++;                          //�Ѽ�
		if(h-=2)                        //�C����@���j�鰪�״��2����(h=h-2)
			h++;                        //�[�^1����(h=h+1)
   } while(h>0);                         //�j�馨�ߪ����󬰰��פj��0
   cout<<"�ݭn "<<day<<"��"<<endl;         //�L�X�Ѽ�
   

   return 0;
}

