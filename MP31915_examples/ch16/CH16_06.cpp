#include <iostream>  
 
using namespace std;
 
template<class T> //�w�q�P�ŧifunc��Ƽ˪�  
T func(T n)  
{  
    T result;      //�ŧiresult��T���A�ܼ�  
    result = n * n + 3 * n + 5;   //����n*n+3*n+5�B��A�ñN���G���w��result  
    return result;           //�^��result;  
}  
  
int main()  
{  
    cout<<"func(10) = ";  
    cout<<func(10)<<endl;    //��Xfunc(10)���B�⵲�G  
    cout<<"func(12.5f) = ";  
    cout<<func(12.5f)<<endl; //��Xfunc(12.5f)���B�⵲�G  
 
   
    return 0;
}
