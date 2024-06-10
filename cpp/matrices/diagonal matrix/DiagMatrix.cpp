//
// Created by vivekdagar on 6/8/24.
//

#include "DiagMatrix.h"

DiagMatrix::DiagMatrix(const unsigned short n) : n(n) {
    array.resize(n);
}

void DiagMatrix::set(unsigned short i, unsigned short j, int x) {
    if (i == j)
        array[i - 1] = x;
}

int DiagMatrix::get(unsigned short i, unsigned short j) const {
    return (i == j) ? array[i - 1] : 0;
}

std::ostream &operator<<(std::ostream &os, const DiagMatrix &matrix) {
    for (int i{1}; i <= matrix.n; i++) {
        for (int j{1}; j <= matrix.n; j++)
            os << matrix.get(i, j) << " ";
        os << std::endl;
    }
    return os;
}

