#include<iostream>

using namespace std;	

int main()
{
   
  int Chi,Eng,Math;
  float Total,Average;
  
  cout<<"�п�J��� �^�� �ƾǦ��Z:";
  cin>>Chi>>Eng>>Math;
  
  Total=Chi+Eng+Math;//�p���̦��Z�`�M
  Average=Total/3; //�p���̥������Z
  cout<<"======================================"<<endl;
  cout<<"���Z�`��="<<Total<<"  �������Z="<<Average<<endl;
  
  
  return 0;
} 
