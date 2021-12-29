/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
float c;
float a1;
float a2;

void zachet(float a1, float a2) {
    c=a1/a2;
    cout<<"ответ: ";
    cout<<c;
}
    
int main()
{   cout<<"введите числитель ";
    cin>>a1;
    cout<<"введите знаминатель ";
    cin>>a2;
    
zachet(a1,a2);
    

    return 0;
}
