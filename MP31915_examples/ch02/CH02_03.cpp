#include <iostream>

using namespace std;

int main()
{
	float Num1;               // �ŧifloat�ܼ�
	double Num2;              // �ŧidouble�ܼ�
	long double Num3=3.144E10;     // �ŧi�ó]�w long double�ܼƪ���
	
    Num1=1.742f;
	Num2=4.159;
 
    cout<<"3.5678���x�s�줸��="<<sizeof(3.5678)<<endl; 
    //�L�X 3.5678���x�s�줸�դj�p
    cout<<"3.5678f���x�s�줸��="<<sizeof(3.5678f)<<endl; 
    //�L�X 3.5678f���x�s�줸�դj�p
    cout<<"3.5678L���x�s�줸��="<<sizeof(3.5678L)<<endl;
    //�L�X 3.5678L���x�s�줸�դj�p 
    cout<<"-------------------------------------------------------"<<endl;
    cout << "Num1 ���ȡG" << Num1 << endl   
		 << "���פj�p�G" << sizeof(Num1)  
		 << " Byte" <<endl;
         // ��Xfloat�ܼƤ��e���x�s���פj�p
	cout << "Num2 ���ȡG" << Num2 << endl   
		 << "���פj�p�G" << sizeof(Num2) 
		 << " Byte" <<endl;
         // ��Xdouble�ܼƤ��e���x�s���פj�p
    cout<< "Num3 ���ȡG" << Num3 << endl 
        << "���פj�p�G" << sizeof(Num3) 
		 << " Byte" << endl;
         // ��Xlong double�ܼƤ��e���x�s���פj�p
       
    
    return 0;
}
		 
		 
