#include <iostream>
#include "hashing/probing/quadratic/QProbingHT.h"

using namespace std;

int main() {
    int A[] = {2,12,22,32,432};
    QProbingHT obj;

    obj.insert(1);


    cout << obj.indexOf(1);
    return 0;
}
