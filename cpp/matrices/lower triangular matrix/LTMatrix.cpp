////
//// Created by vivekdagar on 6/8/24.
////
//
//#include "LTMatrix.h"
//
//LTMatrix::LTMatrix(unsigned short dimensions) : dimensions(dimensions) {
//    nonZeroElements = (dimensions * (dimensions - 1)) / 2;
//    A.resize(nonZeroElements);
//}
//
//std::ostream &operator<<(std::ostream &os, const LTMatrix &matrix) {
//    os << "nonZeroElements: " << matrix.nonZeroElements << " A: " << matrix.A << " dimensions: " << matrix.dimensions;
//    return os;
//}
