/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int N1[50] = {};
int main()
{
    int i;
  for (i=1;i<51;i++) {
      if(i % 3 == 0) {
        N1[i-1]=21;
        
      }
      if(i % 5 == 0) {
        N1[i-1]=-12;
        
      }
      if(i % 11 == 0) {
        N1[i-1]=0;
        
      }
      else {
      N1[i]=i;
      }
  }
  for (i=1;i<51;i++) {
      cout<<N1[i]<<" ";
  }
      

    return 0;
}
