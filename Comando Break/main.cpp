#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    while(c++<1000){
        cout << c << "\n";
        if(c == 500){
            break;
        }
    }
    return 0;
}
