#include <iostream>

using namespace std;

int main()
{
   
   int Chi,Eng,Math;
   float total,average;

   cout<<"�п�J�ǥͤT�즨�Z: ";
   cin>>Chi>>Eng>>Math;		//����L��J�T�����Z
   total=Chi+Eng+Math; //�p���`�� 
   average=total/3;    //�p�⥭�� 
   
   cout<<"���"<<'\t'<<"�^��"<<'\t'<<"�ƾ�"<<'\t'<<"�`��"<<'\t'<<"����"<<endl;
   cout<<Chi<<'\t'<<Eng<<'\t'<<Math<<'\t'<<total<<'\t'<<average<<endl;


   
   return 0;
}

