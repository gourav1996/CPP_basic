#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Floor rounds off the given value to the closest integer which is less than the given value.
// Ceil rounds off the given value to the closest integer which is more than the given value.
// Trunc rounds removes digits after decimal point.
// round() : Rounds given number to the closest integer.
// setprecision(): Setprecision when used along with 'fixed' provides precision to floating point numbers correct to decimal numbers mentioned in the brackets of the setprecison.

// int main()
// {
//     double x =1.411, y=1.500, z=1.711;
//     //
//     cout <<floor(x)<<endl;
//     cout <<floor(y)<<endl;
//     cout <<floor(z)<<endl;

//     double a =-1.411, b =-1.500, c =-1.611;
//     cout << floor(a) << endl;
//     cout << floor(b) << endl;
//     cout << floor(c) << endl;

//     cout <<"Ceil:"<<endl;
//     double x = 1.411, y = 1.500, z = 1.611;
//     cout << ceil(x) << endl;
//     cout << ceil(y) << endl;
//     cout << ceil(z) << endl;

//     double a = -1.411, b = -1.500, c = -1.611;
//     cout << ceil(a) << endl;
//     cout << ceil(b) << endl;
//     cout << ceil(c) << endl;    

//     return 0;

// }

int main()
{
    double pi = 3.14159, npi = -3.14159;
    cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(1) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(2) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(3) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(4) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(5) << pi <<" "<<npi<<endl;
    cout << fixed << setprecision(6) << pi <<" "<<npi<<endl;
}
