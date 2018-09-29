/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex02-binarysearch
 *
 * Statement of code ownership: I hereby state that, unless cited, I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @robertsilver2
 */

#include <iostream>
#include "binarysearch.h"
using edu::vcccd::vc::csv15::binarysearch;

int main(int argc, char *argv[]) {
    int array[] = {2, 5, 7, 9, 10, 11, 12, 14, 15, 17, 18, 19, 21, 27, 28, 35, 38, 40, 41, 42, 43, 47, 48, 49, 50};
    //array generated @ https://www.random.org/integer-sets/
    size_t size = 25;
    const int& target = 18;
    int64_t targetIndex = binarysearch(target, array, size);
    std::cout << "DEBUG: Target Index = " << targetIndex;
}

