#include <iostream>

using namespace std;

int main()
 {
    int *int_ptr;   // �ŧi��ƫ��A���� 
    int iValue=12345;
    double *double_ptr,dValue=1234.56;// �ŧi����׹�ƫ��A���� 
    
    int_ptr=&iValue;
    double_ptr=&dValue;
    
    //��ƫ��Х[�k�P��k�B��
        
        cout<<"int_ptr = "<<int_ptr<<endl;
        int_ptr++;//�V�k��1�Ӿ�ư򥻰O�г�첾�ʶq 
        
		cout<<"int_ptr++ = "<<int_ptr<<endl;
        int_ptr--; //�V����1�Ӿ�ư򥻰O�г�첾�ʶq 
        
		cout<<"int_ptr -- = "<<int_ptr<<endl;
        int_ptr=int_ptr+3; //�V�k��3�Ӿ�ư򥻰O�г�첾�ʶq 
        cout<<"int_ptr+3 = "<<int_ptr<<endl<<endl<<endl;
        
        cout<<"double_ptr = "<<double_ptr<<endl;
        double_ptr++;//�V�k��1�ӭ���׹�ư򥻰O�г�첾�ʶq 
        
		cout<<"double_ptr++ = "<<double_ptr<<endl;
        double_ptr--;//�V����1������׹�ư򥻰O�г�첾�ʶq 
        
		cout<<"double_ptr-- = "<<double_ptr<<endl;
        double_ptr=double_ptr+3;//�V�k��3������׹�ư򥻰O�г�첾�ʶq 
        cout<<"double_ptr+3 = "<<double_ptr<<endl;
        
        
        return 0;
  }

