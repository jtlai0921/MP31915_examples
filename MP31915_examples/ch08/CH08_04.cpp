#include <iostream>

using namespace std;

int main(int argc, char *argv[])//�R�O�C�޼ƶǻ��ŧi 
{
    int i;
    if( argc == 1 )//�u���{���W��,�S���䥦�Ѽ� 
        cout<<"�����w�ѼơI"<<endl;
    else
    {
        cout<<"�ҿ�J���ѼƬ��G"<<endl;
        for( i = 0; i < argc; i++ )
            cout<<argv[i]<<endl;//�C�L argv�}�C�����e 
    }
    
    return 0;
}
