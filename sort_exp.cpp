#include <iostream> 
#include <algorithm> 
  
using namespace std; 

void show(int a[]){
    for (int i =0; i<10; ++i){
        cout<< a[i]<< " ";
    }
}

int main(){
    int a[10] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    cout<<"Array before sorting is: "<< endl;
    show(a);

    sort(a, a+10); // [startaddress, endaddress)
    cout<<"\n Array after sorting is: "<<endl;
    show(a);
    // Binary Search : binary_search(start, end+1, valuetofind)
    if (binary_search(a, a+10, 5) ){
        cout<<"\n Number found";
    };

    return 0;
}