#include <iostream>                 

using namespace std;

int main()                      
{
     auto int iVar=5;              //�w�q auto����ܼ� iVar 

	 cout<<"�i�J�{���϶��e��iVar="<<iVar<<endl; 

	 //���U�H�j�A���Ϲj�X�@�q�{���϶� 
	 cout<<"------------------------------------"<<endl;
     {
		 auto int iVar=10;            //�{���϶����w�q����ܼ� iVar 
         iVar++; //iVar�[�@ 
         cout<<"�{���϶����� iVar="<<iVar<<endl;
	 }

      cout<<"------------------------------------"<<endl;
      cout<<"���}�{���϶��� iVar="<<iVar<<endl;
     
     
     return 0;

}
