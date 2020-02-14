#include <iostream>  
#include <cstring>  
using namespace std;  
 
class BookShelf  //�w�q�~�����OBookShelf
{  
    private:  
       
    static int MAX_BOOKS;  
    int count;  
    char* name;  
       
    class Book  	//�w�q�_�����OBook
    {  
        private:  
		    char* title;  
            int price;  
        public:  
            Book(const char* t,int p)  
            { 
                title = new char[strlen(t) + 1]; 
                strcpy(title,t);  
                price = p; 
            }  
            char* getTitle() { return title; }  
            int getPrice() { return price; } 
	};  
    Book* book[10];  
    public:  
        BookShelf(const char* n) 
        {  
            name = new char[strlen(n) + 1];  
            strcpy(name,n);  
            count = 0;  
        }  
      	void InsertBook(const char* t,int p)  
        {    
			if(count == MAX_BOOKS)  
            {  
				cout<<"�Ѭ[�w�g���F\n"<<endl;  
            }  
                book[count++] = new Book(t,p);  
        }  
        void ListAllBooks() 
        {  
            cout<<"["<<name<<"]"<<endl;  
            cout<<"=========================="<<endl;  
            for(int i=0;i<count;i++)  
                cout<<book[i]->getTitle()<<book[i]->getPrice()<<endl;  
        }  
};  
int BookShelf::MAX_BOOKS = 10;  
int main() 
{  
    BookShelf bks("�ڪ��Ѭ[");  
    bks.InsertBook("VC++�d�ұХ�",450);//���J���y1 
    bks.InsertBook("�C���]�p����",420);//���J���y2  
    bks.InsertBook("�����^��-����",360); //���J���y3 
    bks.ListAllBooks(); //�C�X�Ѭ[�W���Ҧ����y 
                
                
    return 0;
}
