#include <iostream>

using namespace std;

typedef int INTEGER; //Integer �Q�w�q�� int ���A 
typedef char STRING[20];//STRING �Q�w�q�����׬�20���r���}�C 

typedef struct hotel
{
    INTEGER roomNumber;
    STRING hotelName;
} hotel_Info; //�Htypedef���O�Nhotel���c,���s�w�q��hotel_Info  

int main()
{    
    hotel_Info myhotel; //���s�w�q���c�A�����[�Wstruct�O�d�r 
    cout<<"���]�W��:";
    cin>>myhotel.hotelName; 
    cout<<"�ж��ƥ�:";
    cin>>myhotel.roomNumber;
    cout<<"------------------------------------"<<endl;
    cout<<"���]�W��:"<<myhotel.hotelName<<endl;
    cout<<"�ж��ƥ�:"<<myhotel.roomNumber<<endl;
    
    
    return 0;
}
