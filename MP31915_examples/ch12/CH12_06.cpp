#include <iostream>

#include <cstring>
using namespace std;

class Dog{
      
    private:	
        char* pName;    
        char* pColor;	
        static int counter;//�ŧi���R�A��Ʀ��� 
      
    public:	
       
        Dog(const char* pN,const char* pC)
        {		
            pName = new char[strlen(pN) + 1];
            strcpy(pName,pN);//���w�r��	
            pColor = new char[strlen(pC) + 1];		
            strcpy(pColor,pC);//���w�r�� 
      	    counter++;
        }	
        
        int getCounter(){ return counter; }
};
int Dog::counter = 0;//���O�~���w�R�A��Ʀ�����l�� 
      
int main()
{	
       
    Dog d1("�p��","�զ�"); //�ŧi����d1 
    Dog d2("�p��","����"); //�ŧi����d2
    Dog d3("�p��","����");//�ŧi����d3
       
    cout<<d1.getCounter()<<endl;//�p�ⲣ�ͪ����`�� 
       
       
    return 0;
       
}
