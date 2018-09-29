/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex02-binarysearch
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @robertsilver2
 */


#include <cstdint>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv15 {

                template <class T>
                int64_t binarysearch(const T& value, T array[], size_t size) {
                  //std::cout << "DEBUG: made it into binary search.. " << std::endl;
                    //std::cout << "DEBUG: target = " << value << " and size = " << size << std::endl;

                    if (array == NULL) {
                        std::cout << "This Dang Ol' Array is NULL!! >:(" << std::endl;
                        return (-1);
                    }//if array empty break the dang ol thing

                    //find test point
                    uint64_t start = 0;
                    uint64_t end = int(size) -1;
                    uint64_t mid=((start+end)/2);

                    //note: idea for loop found in next lines was given to me by
                    //Alden, who originally got the idea from Prof. Knight

                    for(start; end; mid=((start+end)/2)){



                        if(array[mid]==value){
                            std::cout << "index definitely found @ " << mid << " .... definitely." << std::endl;
                            return(mid);
                        }


                        if(array[mid]>value){
                            end = mid-1;
                            //std::cout << "cut RHS" << std::endl;
                        }

                        if(array[mid]<value) {
                            start = mid + 1;
                            //std::cout << "cut LHS" << std::endl;
                        }


                        if(end < start) {
                            std::cout << "Index not found >_<" << std::endl;
                            return (-1);
                        }


                    }
                    return(-1);
                }





            }
        }
    }
}