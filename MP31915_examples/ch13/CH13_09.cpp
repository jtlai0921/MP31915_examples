#include <iostream>  

using namespace std;

float Exchange_Rate;     // Exchange_Rate���1�����i�I�����x�����B 
class Dollar              // �p��ײv�ഫ���ۭq���O  
{  
    float NT_Dollar;    // NT_Dollar�N��֦����s�x��  
public:  
    Dollar() // Dollar���O���غc�l  
    {  
        NT_Dollar=1;  
        Exchange_Rate=40;  
   	}  
    Dollar(float Money,float Rate)  // Dollar���O���غc�l  
   	{  
        NT_Dollar=Money;  
        Exchange_Rate=Rate;  
    }  
    Dollar(float Money)  
  	{  
        cout << "����Dollar(flaot Meony)�غc�l���" << endl; 
        NT_Dollar=Money * Exchange_Rate;  // �p��i�I�����x���ƶq  
    }  
    friend ostream& operator << (ostream& out, Dollar& Tmp_Money); 
    // <<�B��l���h����ƭ쫬�ŧi�Aout�O��ostream���O�ͦ�����X����  
    Dollar operator = (float Money);  // �h��=�����B��l����ƭ쫬�ŧi  
}; 
ostream& operator << (ostream& out, Dollar& Tmp_Money) 
{  
    out << Tmp_Money.NT_Dollar << " ��" << endl;  
    return (out);          // �Ǧ^��X����  
}  
Dollar Dollar::operator = (float Money)  
{  
    cout << "����h��=�B��l���" << endl;  
    NT_Dollar=Money * Exchange_Rate;  // �p��i�I�����x���ƶq  
    return (*this);            // �Ǧ^*this����  
}  
int main()  
{  
    Dollar TWD;  
    float USD,Rate;  
    cout << "�п�J1�����i�I�����x���ƶq:";  
    cin >> Rate;  
    cout << "�п�J�z�n�I�����������B�G";  
    cin >> USD;               
    Exchange_Rate=Rate;  
    TWD = USD;          // �I�s�h�����A�ഫ�B��Ÿ�  
    cout << endl;  
    cout << "�v�פ�(����:�x��) = 1 : "  << Exchange_Rate << endl;  
    cout << "�n�I�����������B�G" << USD << " ��" << endl; 
    cout << "�i�I���x���G" << TWD << endl;                   
    // �I�s�h���B��l<<��X���󤺮e  
      
    return 0;
}
