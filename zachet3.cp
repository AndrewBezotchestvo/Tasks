#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    int i=1;
 
    ifstream in("input.txt"); // окрываем файл для чтения

        while (getline(in, line))
        {
            cout <<"в строке "<<i<<" записанно число"<<line << endl;
            i=i+1;
        }

    return 0;
}
