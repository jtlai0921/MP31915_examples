#include <iostream>

using namespace std;

int main()	
{ 
    int iArrVal[3]={10,20,30};//�ŧi�}�C�ë��w��� 
    int* piVal=iArrVal;  //�ŧi�����ܼơA�ñN���Ы��V�}�C�_�l 
    int i;
    for(i=0;i<sizeof(iArrVal)/sizeof(iArrVal[0]);i++)
    {
        cout<<"�}�C��ƪ��C�L  iArrVal["<<i<<"] �Ȭ� "<<iArrVal[i]<<endl;  
        cout<<"�Q�Ϋ��ЦC�L�}�C��� *(piVal+"<<i<<") �Ȭ� "<<*(piVal+i)<<endl; 
        cout<<"----------------------------------------------------"<<endl;
    }
    cout<<endl;
    
    return 0;    
}
