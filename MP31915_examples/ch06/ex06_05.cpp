#include <iostream>                 

using namespace std;             

int main()
{
    int A[3][3]={{ 1, 2, 3}, //�w�q�G����ư}�C A[3][3]�A�ë��w��l��*
                { 4, 5, 6},
                { 7, 8, 9}};
    int B[3][3]={{ 11, 12, 13},        //�w�q�G����ư}�C B[3][3]�A�ë��w��l��
                { 14, 15, 16},
                { 17, 18, 19}};
    int C[3][3];               //�w�q�G����ư}�C C[3][3]

    int *pA=&A[0][0];         //�����ܼ� *pA ���V A �}�C�_�l��}
    int *pB=&B[0][0];         //�����ܼ� *pB ���V B �}�C�_�l��}
    int *pC=&C[0][0];         //�����ܼ� *pC ���V C �}�C�_�l��}

    int i, j;

    for ( i=0; i < 3; i++)    //�ϥ� for�j��i��x�}�ۥ[�P���йB��s���}�C���U������
       for ( j=0; j < 3; j++)
          *(pC+i*3+j)=*(pA+i*3+j)+*(pB+i*3+j); 

    cout<<"A �x�}�����e:"<<endl;
    for ( i=0; i < 3; i++)          
    {
       for ( j=0; j < 3; j++)
        cout<<*(pA+i*3+j)<<'\t';//�ϥΫ����ܼƹB��Ū�� A �}�C���U����
        cout<<endl; 
    }

    cout<<"B �x�}�����e:"<<endl;
    for ( i=0; i < 3; i++)                      
    {
       for ( j=0; j < 3; j++)
        cout<<*(pB+i*3+j)<<'\t';//�ϥΫ����ܼƹB��Ū�� B �}�C���U����
        cout<<endl;
    }

    cout<<"C �x�}�����e:"<<endl;
    for ( i=0; i < 3; i++)           
    {
       for ( j=0; j < 3; j++)
          cout<<*(pC+i*3+j)<<'\t';//�ϥΫ����ܼƹB��Ū�� C �}�C���U����
          cout<<endl;
    }
    
    return 0;
}
