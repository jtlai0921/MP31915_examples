#include <iostream>

using namespace std;

template <class type>
class function //�ŧi�˪����O 
{
  private:
        type y;
  public:
        function(type x) {y=x;}//�N�J�˪��Φ��Ѽ� 
        void show()
        {
            cout<<"y="<<y<<endl;
        }
};
int main()
{    
    function<int> func1(10);// ����W�ٻP����Ϋغc�l���X�֫ŧi
    func1.show();
    function<float> func2(9.8);// ����W�ٻP����Ϋغc�l���X�֫ŧi
    func2.show();
    function<char> func3('z');// ����W�ٻP����Ϋغc�l���X�֫ŧi
    func3.show();
    
    
    return 0;
}

