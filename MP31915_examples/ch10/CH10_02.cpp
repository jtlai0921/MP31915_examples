#include <iostream>

using namespace std;

struct circle
{
    float r;
    float pi;
    float area;
};  //�ŧicircle ���c 
int main()
{
    struct circle myCircle;
    struct circle *getData;
    
    //getData ���VmyCircle 
    getData = &myCircle;
    //�]�w��b�| 
    myCircle.r=5;
    myCircle.pi = 3.14159;
    //�]�w��g�v 
    myCircle.area = myCircle.r*myCircle.r*myCircle.pi;
    //�p��ꭱ�n 

    
    cout<<"getData->r ="<<getData->r<<endl; 
    cout<<"getData->pi ="<<getData->pi<<endl;
    cout<<"getData->area ="<<getData->area<<endl;
    //�Ĥ@�� ���c���Цs���覡 
    cout<<"--------------------------------------"<<endl;
    cout<<"(*getData).r ="<<(*getData).r<<endl; 
    cout<<"(*getData).pi ="<<(*getData).pi<<endl;
    cout<<"(*getData).area ="<<(*getData).area<<endl;
    //�ĤG�� ���c���Цs���覡 
    
    return 0;
}
