#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    char ch1[2] = "A";//�ŧi�ܼ�num1�Bch1

    cout<<"�ܼƦW�� �ܼƭ� �O�����}"<<endl;
    cout<< "----------------------------"<<endl;
    cout<<"num1 "<<"\t "<<num1<<'\t'<<&num1<<endl;
    cout<<"ch1  "<<"\t "<<ch1<<'\t'<<&ch1<<endl;
    //�Q��&�B��l�C�L�ܼ�num1�Bch1���ƭȻP��} 
    
    
    return 0;
}
