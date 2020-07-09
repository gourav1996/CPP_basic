//  ##########  std Array ################

// std::array<T,N> array;
// T: dataType, N: Number of element

// Array size is needed at compile time.
// Assign by value is actually by value. // if we pass array to function it is copy of array (pass by value not pass by refrence like traditional array)
// Access Elements:
// a. at()
// b. []
// c. front()
// d. back()
// e. data() // gives access to the underlying array

#include <iostream>
#include <array>


int main(){

    // Declare
    std::array<int, 5> arr;
    
    // Assign 
    arr = {1,2,3,4,5};
    std::array<int, 5> arr2 {1,225,62,72,88} ;// uniform initialization
    
}