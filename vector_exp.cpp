// std::vector

// it is dynaminc array or Array list
// Its size can grow and shrink dynamically. no need to provide size at compile time

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

// it create double(2*x) of previously created array ; e.g: a[2]{1,2,3}, if we putt a[3]= 5, now a will of size 6 (2*3)

// .size(): Number of Elements in vector
// .capacity() : len of vector

// ver.reserver(1000) : it will create array of len 1000
 
#include<iostream>
#include<vector>

int main(){

    // DECLARATION
    std::vector<int> arr1;
    std::vector<int> arr2 (5,10); // vector of size 5 fill with 10 in all the posiotion
    std::vector<int> arr3 ={1,2,4,5,6,7};
    std::vector<int> vec;

    //ACCESSING ELEMENTS
    arr2[3] = 20;
    arr2.at(3) = 30;  // this is expection safe if we go out with range

    vec.reserve(60);
    for (int i=0; i<40; i++){
        vec.push_back(i);
        std::cout <<"Size:" << vec.size() << "  Capacity:"<<vec.capacity()<< std::endl;
    }

    return 0;

}