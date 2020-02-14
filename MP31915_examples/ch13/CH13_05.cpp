#include <iostream>

using namespace std;

class MyClass //�w�q�@��MyClass���O
{
    char* m_Name;
    int m_English;
    int m_Math;
    int m_Chinese;
    
public:
    MyClass(char* cName,int iEng=0,int iMath=0,int iCh=0)//�غc�l 
    {
        m_Name=cName;
        m_English=iEng;
        m_Math=iMath;
        m_Chinese=iCh;
    }
          
    //  = �B��l�h�� 
    MyClass& operator=(const MyClass& myClass)
    {
        m_English=myClass.m_English;    
        m_Math=myClass.m_Math;        
        m_Chinese=myClass.m_Chinese;
        return *this;  //�Ǧ^����      
    }
    
    friend ostream& operator<<(ostream&,MyClass&); 
};
//�w�q��X��C��Ƭy
ostream& operator<<(ostream& out,MyClass& myClass)
{
    out<<"\n�m�W:"<<myClass.m_Name
       <<"\n�^��:"<<myClass.m_English
       <<"\n�ƾ�:"<<myClass.m_Math 
       <<"\n���:"<<myClass.m_Chinese<<endl;       
    return out;
}

int main()
{
    char cName[10];//�w�q���׬�10���}�C 
    int iEng,iMath,iCh;//�����^��B�ƾǡB��� 
    cout<<"�п�J�ǥͩm�W?";
    cin>>cName;
    cout<<"�п�J�^�����?";
    cin>>iEng;
    cout<<"�п�J�ƾǤ���?";
    cin>>iMath;
    cout<<"�п�J������?";
    cin>>iCh;
        
    MyClass* myClass=new MyClass(cName,iEng,iMath,iCh);
    cout<<(*myClass);
    
    MyClass* myClass1=new MyClass(cName);//���w�B��l�h�� 
    *myClass1=*myClass;
    cout<<(*myClass1);
    
    delete myClass1;
    delete myClass;
    
    
    return 0;
}
