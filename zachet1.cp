/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
#include <list>

int i, A, B,c,i1;


using namespace std;
void AandB (int A, int B)
{
    int arr[A];
    int arr1[A];
for (i1=1; i1<=B; i1++)
{
    for (i=1; i<=A; i++) {
        arr[i]=i;
        cout << arr[i]*i1 << " ";
    } 
    cout<<endl;
    arr1[i1]=i1;
    } 
}   
int main()
{
cin>>A;
cin>>B;
AandB(A,B);
}