#include <iostream>

using namespace std;


template <class type>//�ŧi�˪����O�A�ëŧi�����ܼƧY�������
class cube
{
  private:
        type length;//�ŧi�p������ 
        type width;
        type height;
        type volume;
  public://�ŧi������� 
        void set_length(type len)
        {
            length = len;//�]�w�� 
        }
        void set_width(type wid)
        {
            width = wid;//�]�w�e 
        }
        void set_height(type hei)
        {
            height = hei;//�]�w�� 
        }
        void calculate();
        void show_volume();
};
//---------------------------------
template <class type>
void cube<type>::calculate()//������Ʀbclass�~���ŧi
{
    volume = length*width*height;
}
//---------------------------------
template <class type>
void cube<type>::show_volume()//������Ʀbclass�~���ŧi
{
    cout<<"�� = "<<length<<"  ";
    cout<<"�e = "<<width<<"  ";
    cout<<"�� = "<<height<<endl;
    cout<<"�ߤ���n = "<<volume<<endl;
}
//---------------------------------
int main()
{    
    cube<int> cubeA;
    cubeA.set_length(10);
    cubeA.set_width(20);
    cubeA.set_height(3);
    cubeA.calculate();
    cubeA.show_volume();
    
    
    return 0;
}

