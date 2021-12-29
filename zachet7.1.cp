#include <iostream>

using namespace std;
float c;
float a1;
float a2;

int zachet(float a1, float a2) {
    c=a1/a2;
    cout<<"ответ: ";
    return c;
}
    
int main()
{   cout<<"введите числитель ";
    cin>>a1;
    cout<<"введите знаминатель ";
    cin>>a2;
    
zachet(a1,a2);
    cout<<c;

    return 0;
}
