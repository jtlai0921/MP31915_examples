#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const char *name[4] = { "Justinian", "Momo", "Becky", "Bush" };    // �@�����а}�C 
    char name1[4][10] = { "Justinian", "Momo", "Becky", "Bush" };//�G���r��}�C 
	
    int i;
    cout<<"---------- �@�����а}�C�x�s�覡 --------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
         
		cout<<"name["<<i<<"] = \""<<name[i]<<"\"\t"<<endl;
        cout<<"�Ҧ���}�G"<<(int *)name[i]<<endl; //�Lname[i]�X�Ҧ���}   
    }
    cout<<"------------ �G���r��}�C�x�s�覡--------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name1["<<i<<"] = \""<<name1[i]<<"\"\t"<<endl;
        cout<<"�Ҧ���}�G"<<(int *)name1[i]<<endl; //�Lname1[i]�X�Ҧ���}  
    }    
    
    return 0;
}

