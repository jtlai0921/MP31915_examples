#include <iostream>        

using namespace std;

int main()
{
    int no,count=0, Total=0; // �w�q����ܼ� count �P Total
     
    cout<<"�n��J�p�⪺�ӼƬ�:";
    cin>>no; 
     
    int *ptr=new int[no]; // �ʺA�t�m�}�C��n�Ӥ��� 
     
    cout<<endl;	
    for (count=0; count < no; count++) 
    {	
        cout << "��Jptr[" << count << "]:";
        cin >> ptr[count];   // �ĥΰ}�C���ިӿ�J�}�C����
    }
    for (count=0; count < no; count++)
        Total+=*(ptr+count); // �ĥΫ����ܼƹB��Ӧs���}�C������
    cout<<"---------------------------------------"<<endl;
    cout << no<<"�Ӽƪ��`�M=" << Total; // ��ܵ��G
    cout << endl; 
    delete [] ptr;  // ����t�m�� ptr ���O����Ŷ�	    
    ptr=NULL;	     
    
    return 0; 
}
