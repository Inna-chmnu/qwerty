#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, y, dob;
    cout << "Enter x\n";
    cin >> x;
    dob = 1;
    for (int n = 1; n <= 5; n++) {
        dob *= cos(n * x);
    }
    y = (tan(x * x) + dob) / (x + 5);
    cout << "y= " << y;
}


//тест системи контролю версій
