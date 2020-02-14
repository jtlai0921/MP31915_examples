#include <iostream>
using namespace std;

// �]�w���O�˪������A�Ѽ�Type���w�]�Ȭ����int,�D���A�Ѽƪ����O�����int,�w�]�Ȭ�5
template <class Type = int, int size = 5>	// ���O�˪��ŧi
class Stack
{
    private:
        Type st[size];// �ŧi�@�}�C�@�����|���x�s�Ŷ�
        int top;		// ���|��Ƴ��ݪ�����
    public:
        Stack()
        {
            top = -1;
        }
        void push(Type data);	// �N��Ʃ�J���|
        Type pop();// �N��ƥѰ��|�����X
};
    template < class Type, int size >
    void Stack< Type, size > :: push ( Type data )
    {
        st[ ++top ] = data;
    }
    template < class Type, int size >
    Type Stack<Type, size> :: pop()
    {
        return st[ top-- ];
    }
int main()
{
    Stack<> stk_1;// �ŧi�@���|����,�èϥΨ�w�]��
    Stack<const char*, 4> stk_2;	// �ŧi���|����,�䫬�A���r��,�j�p��4
    stk_1.push( 11 );
    stk_1.push( 22 );
    stk_1.push( 33 );
    cout << "stack_1 [1] = " << stk_1.pop() << endl;
    cout << "stack_1 [2] = " << stk_1.pop() << endl;
    cout << "stack_1 [3] = " << stk_1.pop() << endl;
    cout << endl;
    stk_2.push( "�Ĥ@�W" );
    stk_2.push( "�ĤG�W" );
    stk_2.push( "�ĤT�W" );
    cout << "stack_2 [1] = " << stk_2.pop() << endl;
    cout << "stack_2 [2] = " << stk_2.pop() << endl;  
    cout << "stack_2 [3] = " << stk_2.pop() << endl;
    cout << endl;
    
    
    return 0;
    	
}
