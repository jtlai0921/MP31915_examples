#include <iostream>

using namespace std;

class Square    //�w�qSquare���O
{
    int a;
public:
    Square(int n)
    {
      a=n*n;//�p�⥭��M 
    }
    void squ_sum(Square);       //��ƭ쫬�ŧi
};

void Square::squ_sum(Square b)   //���squ_sum�{���X��@
{
     a=a+b.a;
     cout<<"-----------------------------------"<<endl;
     cout<<"��ƪ�����M: "<<a<<endl;
     cout<<"-----------------------------------"<<endl;
}
int main()
{
      Square first(8),second(6);
      first.squ_sum(second);
      
      
      return 0;
}
