#include <iostream>

using namespace std;
#define TRUE 1

int main()
{
    #ifdef TRUE //���p TRUE���w�q     
    cout<<"TRUE�w�w�q�F�A�`�ƭȬ�1"<<endl;
    #endif
    #ifndef FALSE//���p FALSE���w�q     
    cout<<"FALSE���w�q�A�w�q�䵥��`��0"<<endl;    
    #define FALSE 0 
    #endif    
    cout<<"TRUE ="<<TRUE<<"  FALSE ="<<FALSE<<endl;    
     
    return 0;
}
