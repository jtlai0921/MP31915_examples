#include <iostream>

using namespace std;

struct circle
{
    float r;
    float pi;
    float *area;
};  // �ꪺ���c��A�ó]�w�䤤���c����area�������ܼ� 

int main()
{
    struct circle myCircle;
    struct circle *getData;
    
    float Area;
    
    myCircle.r=5;
    myCircle.pi = 3.14159;
    myCircle.area = &Area;//���V�@�ӹ�Ʀ�} 
    *myCircle.area= myCircle.r*myCircle.r*myCircle.pi;  
    cout<<"*myCircle.area ="<<*myCircle.area<<endl;//������ myCircle �� area �� 
    cout<<"myCircle.area ="<<myCircle.area<<endl;//������ myCircle �� ��} 
    cout<<"Area ="<<Area<<endl; //myCircle��area���VArea,��̸�Ƥ��e�ۦP  
    cout<<"&Area ="<<&Area<<endl; //��� Area ����},myCircle �� ��}�ۦP 
    cout<<"-----------------------------------------"<<endl; 
    
    getData = &myCircle;//getData ���VmyCircle 
      
    cout<<"getData->r ="<<getData->r<<endl;    
    cout<<"getData->pi ="<<getData->pi<<endl;
    cout<<"getData->area ="<<getData->area<<endl;//getData������area����} 
    cout<<"*getData->area ="<<*getData->area<<endl; //getData������area���� 
    
    
    
    return 0;
}

