#include <iostream>

using namespace std;

int main()
{
    int arr1[] = { 10, 20, 30, 40, 50};
    double arr2[] = { 10.0, 20.0, 30.0, 40.0, 50.0 };
    int i;

    cout<<"int�}�C                double�}�C "<<endl;
    cout<<"------------------------------------------------------"<<endl;
    for ( i = 0; i < 5; i++ )
    {
        cout<<"arr1+"<<i<<"="<<arr1+i<<"     ";// �C�L�Xarr1+i����} 
        cout<<"arr2+"<<i<<"="<<arr2+i<<endl;// �C�L�Xarr1+i����}
    }
    cout<<"------------------------------------------------------"<<endl;
    cout<<"arr1 �}�C����="<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    cout<<"arr2 �}�C����="<<sizeof(arr2)/sizeof(arr2[0])<<endl;
    
    
    return 0;
}
