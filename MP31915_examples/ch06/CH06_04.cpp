#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int *ptr1 = &num;//ptr���Vnum�ܼƦ�} 
    int **ptr2 = &ptr1;//ptr2�O���Vptr1������ 

    
    cout<<"------------------------------------------------------"<<endl;
    cout<<"num="<<num<<" &num="<<&num<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"&ptr1="<<&ptr1<<" ptr1="<<ptr1<<" *ptr1= "<<*ptr1<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"&ptr2="<<&ptr2<<" ptr2="<<ptr2<<" *ptr2="<<*ptr2<<" **ptr2="<<**ptr2<<endl;
    cout<<"------------------------------------------------------"<<endl;
    
    
    return 0;
}
