/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
float a1;
float a2;
using namespace std;
void zachet(float a, float b){
    int c;
    c=(int)a*(int)b;
    cout<<"целочисленный ответ: ";
    cout<<c;
}

int main()
{   
    cout<<"введите первый множитель: ";
    cin>>a1;
    cout<<"введите второй множитель: ";
    cin>>a2;
    zachet(a1,a2);

    return 0;
}
