#include <iostream>
#include <cstring>
using namespace std;


int N=13;


void input(char b1[]) {
    char a1[N];
    for (int i=0; i<N+1; i++){
        a1[i]=b1[N-i];
        cout<<a1[i];
    };
    
}



int main()
{   string a = "testing_string";
    char b[N];
    int k;
    strcpy(b, a.c_str() );
    
    input(b);
    
    return 0;
}