#include <iostream>
float a1;
float a2;
int c1;
using namespace std;
int zachet(float a, float b){
    float c;
    c=a*b;
    c1=int(c);
    return c1;
    
}

int main()
{   
    cout<<"введите первый множитель: ";
    cin>>a1;
    cout<<"введите второй множитель: ";
    cin>>a2;
    zachet(a1,a2);
    
    cout<<"целочисленный ответ: ";
    cout<<c1;

    return 0;
}
