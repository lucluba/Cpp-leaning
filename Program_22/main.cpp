// Exponentiation using recursion

#include <iostream>

using namespace std;

int a, b;

long double expo(int b)
{
    if (b==0) return 1;
    else return expo(b-1)*a;
}

int main()
{
    cout<<"Type base and (use spacebar) exponent: ";
    cin>>a>>b;

    // Exponentiation a^b

    cout<<"Power: "<<expo(b)<<endl;

    return 0;
}
