cmake_minimum_required(VERSION 3.27)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp
        array/implementation/Array.cpp
        array/implementation/Array.h
        "linked list/singly/SinglyLL.cpp"
        "linked list/singly/SinglyLL.h"
        "linked list/problems/MergeTwoSortedLL.cpp"
        "linked list/problems/SortedLL.cpp"
        "linked list/problems/ReverseLLRecur.cpp"
        "linked list/doubly/DoublyLL.cpp"
        "linked list/doubly/DoublyLL.h"
        "linked list/circular/CircularLL.cpp"
        "linked list/circular/CircularLL.h"
        "linked list/circular doubly/CDoublyLL.cpp"
        "linked list/circular doubly/CDoublyLL.h"
        sorting/BubbleSort.cpp
        sorting/SelectionSort.cpp
        sorting/InsertionSort.cpp
        sorting/BucketSort.cpp
        sorting/CountSort.cpp
        sorting/MergeSort.cpp
        sorting/QuickSort.cpp
        sorting/RadixSort.cpp
        sorting/ShellSort.cpp
        heap/Heap.cpp
        heap/Heap.h
        "trees/avl tree/AVL.cpp"
        "trees/avl tree/AVL.h"
        graphs/implementation/Graph.cpp
        graphs/implementation/Graph.h
        graphs/prims/Prims.cpp
        graphs/kruskals/Kruskals.cpp
        "stack/expression eval/ParanthesisMatching.cpp"
        "stack/expression eval/PostfixEval.cpp"
        "stack/expression eval/InfixToPostfix.cpp"
        polynomial/array/PolyArr.cpp
        polynomial/array/PolyArr.h
        "polynomial/linked list/PolyLL.cpp"
        "polynomial/linked list/PolyLL.h"
        array/problems/RearrangeNegatives.cpp
        array/problems/ReverseAndShift.cpp
        array/set/USet.cpp
        array/set/USet.h
        "array/student challenge/1.cpp"
        "array/student challenge/2.cpp"
        "array/student challenge/3.cpp"
        "array/student challenge/4.cpp"
        "array/student challenge/5.cpp"
        hashing/chaining/ChainHashing.cpp
        hashing/chaining/ChainHashing.h
        "hashing/double hashing/DHtable.cpp"
        "hashing/double hashing/DHtable.h"
        hashing/probing/linear/LProbingHT.cpp
        hashing/probing/linear/LProbingHT.h
        strings/Anagram.cpp
        strings/FindDuplicates.cpp
        strings/InvertCase.cpp
        strings/LexicographicalCompare.cpp
        strings/Permutation.cpp
        strings/Palindrome.cpp
        recursion/Factorial.cpp
        recursion/Fibonacci.cpp
        recursion/TaylorSeries.cpp
        "matrices/diagonal matrix/DiagMatrix.cpp"
        "matrices/diagonal matrix/DiagMatrix.h"
        "matrices/lower triangular matrix/LTMatrix.cpp"
        "matrices/lower triangular matrix/LTMatrix.h"
        queues/array/circular/CQueue.h
        queues/array/circular/CQueue.cpp
        queues/array/deque/DEQUEUE.h
        hashing/probing/quadratic/QProbingHT.cpp
        hashing/probing/quadratic/QProbingHT.h)
