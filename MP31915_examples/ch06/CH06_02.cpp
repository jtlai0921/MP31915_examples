#include <iostream>

using namespace std;

int main()
{
    int iVal=10;         // ����ܼ� 
    double dVal=123.45;   //����׹���ܼ� 
    
    int* piVal=NULL; // �ŧi���ū���  
    piVal= &iVal;   //��ƫ��A�������ܼơA���ViVal�ܼƦ�} 
    
    double* pdVal=&dVal;    //��ƫ��A�������ܼơA���VfVal�ܼƦ�} 
    
    cout<<"piVal �ܼƦ�}��"<<piVal<<endl;
    cout<<"piVal �ܼƩҫ��V��}����Ƥ��e��"<<*piVal<<endl;        
             
    *piVal=20; // ���s���wpiVal�����ܼƪ���Ƥ��e��20  
    cout<<"piVal �����ܼƭ��s�]�w��,iVal����Ƥ��e�P�B��אּ"<<iVal<<endl;  
    cout<<"���iVal�Ҧ��Ϊ��O�ЪŶ���:"<<sizeof(iVal)<<"�줸"<<endl;
    cout<<"��ƫ����ܼ�piVal�Ҧ��Ϊ��O�ЪŶ���:"<<sizeof(piVal)<<"�줸"<<endl<<endl;
    
    cout<<"pdVal �ܼƦ�}��"<<pdVal<<endl;
    cout<<"pdVal �ܼƩҫ��V��}����Ƥ��e��"<<*pdVal<<endl; 
    
    *pdVal=67.1234; //���s���wpdVal�����ܼƪ���Ƥ��e��67.1234  
    cout<<"pdVal �����ܼƭ��s�]�w��,dVal����Ƥ��e�P�B��אּ"<<dVal<<endl;  
    cout<<"����׹��dVal�Ҧ��Ϊ��O�ЪŶ���:"<<sizeof(dVal)<<"�줸"<<endl;
    cout<<"����׹�ƫ����ܼ�pdVal�Ҧ��Ϊ��O�ЪŶ���:"<<sizeof(pdVal)<<endl;
    
        
    return 0; 
}
