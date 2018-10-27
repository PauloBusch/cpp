#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int>n{0,1,2,3,4,5,6,7,8,9};
    //vector<int>::iterator it;//auto substitui
    for_each(n.begin(),n.end(),[](int n){
        n += 10;
        cout << n << endl;
    });
    /*for(auto it:n){
        cout << it << endl;
    }*/
    return 0;
}
