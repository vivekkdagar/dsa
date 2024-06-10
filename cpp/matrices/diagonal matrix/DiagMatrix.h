//
// Created by vivekdagar on 6/8/24.
//

#ifndef CPP_DIAGMATRIX_H
#define CPP_DIAGMATRIX_H


#include <vector>
#include <ostream>

class DiagMatrix {
    const unsigned short n;         // dimension
    std::vector<int> array;
public:
    explicit DiagMatrix(unsigned short n);

    void set(unsigned short i, unsigned short j, int x);

    int get(unsigned short i, unsigned short j) const;

    friend std::ostream &operator<<(std::ostream &os, const DiagMatrix &matrix);
};


#endif //CPP_DIAGMATRIX_H
