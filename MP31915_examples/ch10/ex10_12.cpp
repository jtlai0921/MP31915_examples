#include<iostream>  
#include<cstring>       
using namespace std;

#define NUM 50

struct student
{
    char name[80];
    char tel[20];
}st[NUM] ;

int main()
{
    int select;
    char name[80], tel[20];
    int number;
    int i;
    do
    {
        printf("(1)��J  (2)�j�M  (3)���}  =>");
        cin>>select;
        switch (select)
        {
            case 1:
                cout<<">";
                cin>>number;
				cin>>name;
				cin>>tel;
                strcpy(st[number].name, name);
                strcpy(st[number].tel, tel);
                break;
            case 2:
                cout<<">";
                cin>>name;
                for(i = 0; i < NUM; i++)
                    if(!strcmp(st[i].name, name))
                    {
                        cout<<">"<< i<<st[i].name, st[i].tel;
                        break;
                    }
                if(i == NUM)
                    cout<<"�䤣��ŦX�����";
                break;
        }
    }while(select != 3);

    
    return 0;
}
