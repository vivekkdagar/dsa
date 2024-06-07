#include <iostream>
#include <vector>
#include "hashing/double hashing/DHtable.h"

using namespace std;

int main() {
    int A[] = {2,12,22,32,432};
    DHtable h;
    h.insert(5);
    h.insert(25);
    cout << h.getLoadFactor();

    return 0;
}
