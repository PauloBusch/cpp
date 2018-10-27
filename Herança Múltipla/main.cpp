#include <iostream>
#include "Classes.h"
using namespace std;
int main()
{
    Base1 *b1=new Base1();
    Base2 *b2=new Base2();
    CFB   *b3=new CFB();
    b1->impBase1();
    b2->impBase2();
    b3->impBase1();
    b3->impBase2();
    return 0;
}
