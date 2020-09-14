#include <iostream>

using namespace std;

int SumOfNnumbers(int n){
    int finalNumber = 0, currentNuber=0;
    for (int i = 0; i<n; i++){
        currentNuber = i+1;
        finalNumber = currentNuber+finalNumber;
        // cout<<finalNumber<<endl;
    }
    return finalNumber;
}

int main(){
    int n, total;
    cout<<"Find the Sum of numbers from 1+2+...+n"<<endl;
    cout<<"Enter the number : ";
    cin >> n;
    total = SumOfNnumbers(n);
    cout<<"Sum of "<<n<< " is : " <<total<<endl; 
}