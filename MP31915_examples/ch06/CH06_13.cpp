#include <iostream> 
 
using namespace std;
  
int main()  
{  
    int j = 20;
    int &refj = j; //�ŧi�ѦҶ��ϥ�&�Ÿ��A�åB�P�ɫ��w���j
    int *ptr=&j;//�ŧi����,�åB�P�ɫ��V���j 
     
    cout<<"refj="<<refj<<" *ptr="<<*ptr<<endl;//�L�Xrefj�P*ptr�����e 
    *ptr=*ptr+5;//���йB�� 
     
    cout<<"refj="<<refj<<" *ptr="<<*ptr<<endl;
    refj=refj+5;//�ѦҹB�� 
    cout<<"refj="<<refj<<" *ptr="<<*ptr<<endl;
 	
     
    return 0;    
}
