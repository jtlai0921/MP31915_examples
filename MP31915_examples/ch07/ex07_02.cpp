#include <iostream>

using namespace std;
//�L�N�q���禡�A���c�ܽd�ǭȩI�s 
void CallByValue(int x)
{
    x = 30;
}

// �L�N�q���禡�A���c�ܽd�ǧ}�I�s 
void CallByAddress(int *x)
{
    *x = 30;
}
void CallMix(int x,int *y)// �L�N�q���禡�A���c�ܽd�ǭȻP�ǧ}�V�X�I�s 
{
     x=30;
     *y=20;
}
int main()
{
    int x = 10,y=10;

    printf( "�ǭȩI�s�e�G%d\n", x );
    CallByValue(x);//�I�s�ǭȨ�� 
    printf( "�ǭȩI�s��G%d\n", x );
    printf("-------------------------------------------\n");
    printf( "�ǧ}�I�s�e�G%d\n", x );
    CallByAddress(&x);//�I�s�ǧ}��� 
    printf( "�ǧ}�I�s��G%d\n", x );
    printf("-------------------------------------------\n");
     printf( "�V�X���I�s�e�G%d %d\n", x ,y);
    CallMix(x,&y);
    printf( "�V�X���I�s��G%d %d\n", x ,y);
    
    
    return 0;
}

