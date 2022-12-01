#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int n;
    int i;
    bool ris;
    cin>>n;
    i=n-1;
    ris=num_prim(n,i);
    if (ris==1)
        cout<<"numero primo";
    else
        cout<<"numero non primo";
    return 0;
}
