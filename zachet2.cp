/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float a[10]={};
    float A1;
    cin>>A1;
    for (int i = 0; i < 10; ++i) {
            a[i]=i/A1;
            cout << a[i] << " ";
        }

        cout << endl;

    return 0;
}
