#include <iostream>  

using namespace std;

class USD;        // �ŧiUSD���O  
class NTD       // �p��ײv�ഫ���ۭq���O  
{  
    float NT_Exchange_Rate;    // NT_Exchange_Rate���1�����i�I�����x�����B  
public:  
    NTD()    // Dollar���O���غc�l  
    {  
        NT_Exchange_Rate=40;  
    }  
    NTD(float Rate)    // Dollar���O���غc�l  
    {  
        NT_Exchange_Rate=Rate;  
    }  
friend istream& operator >> (istream& in, NTD& Tmp_Money);  
// >>�B��l���h����ƭ쫬�ŧi�Ain�O��istream���O�ͦ�����X����  
    operator USD();           // �ŧi���O���A�ഫ���  
};  
class USD 
{  
    float US_Exchange_Rate;  
public:  
    USD()  // Dollar���O���غc�l  
    {  
        US_Exchange_Rate=40;
    }  
    USD(float Rate)     // Dollar���O���غc�l  
    {  
        US_Exchange_Rate=Rate;  
    } 
    friend ostream& operator << (ostream& out, USD& Tmp_Money);  
   	// >>�B��l���h����ƭ쫬�ŧi�Ain�O��istream���O�ͦ�����X����  
};  
istream& operator >> (istream& in, NTD& Tmp_Money)  
{  
    cout << "�п�J�ײv��(�x��:����)" << endl<< "1���x�� : ���� " ;  
    in >> Tmp_Money.NT_Exchange_Rate;    // �]�wNTD�����O�������  
    return (in);                         // �Ǧ^��J����  
}  
ostream& operator << (ostream& out, USD& Tmp_Money)  
{  
    out << Tmp_Money.US_Exchange_Rate    // ��XUSD�����O�������  
    << " ��" << endl;  
    return (out); // �Ǧ^��X����  
}  
NTD::operator USD()   
{  
    float US_Exchange_Rate=1/NT_Exchange_Rate;  // �p���ഫ�᪺�I����v  
    return (USD(US_Exchange_Rate));      // �Ǧ^USD���O  
}  
    
int main()  
{  
    NTD NT_Dollar;  
    USD US_Dollar;  
    cin >> NT_Dollar;   // ��JNT_Dollar���󪺤��e  
    US_Dollar = NT_Dollar;      // ����USD()�ഫ���  
    cout << endl;  
    cout << "����ײv��(����:�x��)" << endl<< "1������ : " << US_Dollar;  // ��X�൲�G  
         
    return 0;
}
