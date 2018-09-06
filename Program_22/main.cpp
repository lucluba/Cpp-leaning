// Exponentiation using recursion

#include <iostream>
#include <iomanip>

using namespace std;

int a, b;

long double expo(int p, int q)
{
    if (q==0) return 1;
    else return p * expo(p, q-1);
}

int main()
{
    cout << setprecision(12);

    cout<<"Type base and (use spacebar) exponent: ";
    cin>>a>>b;

    // Exponentiation a^b

    cout<<"Power: "<< expo(a,b) <<endl;

    return 0;
}
