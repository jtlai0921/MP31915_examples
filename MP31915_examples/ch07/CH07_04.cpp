#include <iostream>

using namespace std;
//�[�W���йB��l���禡�쫬�ŧi,�o�M�ǭȩI�s���P
void fun(int*, int*);

int main()
{	
    int a,b;
    a=10;
    b=15;
    cout<<"�D��Ƥ�:"<<a<<" b="<<b<<endl;
    cout<<"a����}:a="<<&a<<" b����}:"<<&b<<endl;	
	fun(&a,&b);//�ƻݥ[�W&���}�B��l,�o�M�ǭȩI�s���P
	cout<<"-----------------------------------------"<<endl;
	cout<<"�I�s��ƫ�:a="<<a<<" b="<<b<<endl;
    cout<<"a����}:a="<<&a<<" b����}:"<<&b<<endl;
	
    return 0;	
}
//�[�W���йB��l����Ʃw�q�ŧi,�o�M�ǭȩI�s���P
void fun(int *a, int *b)
{
	cout<<"-----------------------------------------"<<endl;
    //���ɪ�*a�P*b�N���O�ǻ��L�Ӧ�}�W���ƭ�,a�Pb�h�N���}
	cout<<"��Ƥ�:a="<<*a<<" b="<<*b<<endl;
	//��X�禡��a�Pb����}
	cout<<"a����}:a="<<a<<" b����}:"<<b<<endl;
	*a=20;
	*b=30;	
	cout<<"��Ƥ��ܧ�ƭȫ�:a="<<*a<<" b="<<*b<<endl;	
}
