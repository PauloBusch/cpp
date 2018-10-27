#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto soma=[](vector<int>v)->int{
        auto s=0;
        for(int x:v){
            s+=x;
        }
        return s;
    };
    cout << "A soma e : " << soma({1,2,3,1,2,5,9,7,4,6,5}) << endl;
    return 0;
}
