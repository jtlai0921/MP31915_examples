#include <iostream>

using namespace std;

int main()
{
    int value=255;         // ����ܼ� 
    int *piVal,*piVal1; //�ŧi��Ӿ�ƫ��A�������ܼ�  
    
    piVal= &value;   //���Vvalue �ܼƦ�} 
    piVal1=piVal; //piVal1���VpiVal����} 
    
    cout<<"value ="<<value<<" *piVal="<<*piVal<<"*piVal1="<<*piVal1<<endl;
    
    *piVal=300; //���s�]�wpiVal�����ܼƪ���Ƥ��e 
     cout<<"value ="<<value<<" *piVal="<<*piVal<<" *piVal1="<<*piVal1<<endl;
    
    *piVal1=500; //���s�]�wpiVal1�����ܼƪ���Ƥ��e 
     cout<<"value ="<<value<<" *piVal="<<*piVal<<" *piVal1="<<*piVal1<<endl;
    
    
    return 0; 
}
