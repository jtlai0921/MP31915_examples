#include<iostream>

using namespace std;

int main()
{
    int number;
    int i,j;
  
    cout<<"��J�Ʀr,�C�L���Ʀr���e���E�E���k����:";
    cin>>number; 
    //�E�E���k�������j��
  
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=number)   
                break;//�]�w���X������
            cout<<j<<"*"<<i<<"="<<i*j<<'\t';//�[�J����r�� 
        }
        cout<<endl;
    }
  
  
    return 0;
}
