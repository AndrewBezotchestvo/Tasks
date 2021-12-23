#include <iostream>
#include <string>
using namespace std;

 

class Book{
    
public:  

    int pages,bookmark;
    string color;
    int putbookmark(); int review();
    
    Book(int a1, string c1){

        pages = a1;
        color = c1;
    }

    
    ~Book(){cout <<"No more book\n";}
};

int Book::putbookmark(){
    if(pages<100) {
    return pages;
    }
    if(pages>100) {
    cout<<"в книге меньше страниц";
    }
    
    
    
}
int Book::review(){
    if (pages<100) {
    cout<<"общее количество страниц 100"<<" Закладка на странице "<<pages<<", "<<"цвет "<< color;    
    }
        if (pages>100) {
    cout<<"общее количество страниц 100, "<<"Закладки нету" <<" "<< "цвет ";
    cout<< color;
    }
    
    }
    


int main()
{
    int a2;
    cin>>a2;
    Book book1(a2,"black");
    cout << "New box" << '\n';
    cout << "pages: " <<book1.putbookmark()<< '\n';
    cout << "review: "<<book1.review()<< '\n'<< '\n';
    

    return 0;
}