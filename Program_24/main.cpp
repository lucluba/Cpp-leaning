// Factorial numbers - iteration vs recursion method

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int n;
clock_t start, stop;
double speed1, speed2;

long double factrec(int n) {
    if(n==0) return 1;
    else return factrec(n-1)*n;
}

int main() {

    cout << setprecision(100);

    cout<<"Type which factorial sequence number you want to calculate: " << endl;
    cin>>n;

// Factorial numbers iteration

    cout << "Result using iteration: " << endl;

    start = clock();

    long double fact[n];

    fact[0] = 1;

    for(int i=1; i<=n; i++) {
        fact[i] = fact[i-1]*i;
    }

    cout << fact[n] << endl;

    stop = clock();
    speed1 = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << "Iteration time: " << speed1 << endl << endl;

// Factorial numbers recursion

    cout << "Result using recursion: " << endl;

    start = clock();

    cout << factrec(n) << endl;

    stop = clock();
    speed2 = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << "Recursion time: " << speed2 << endl << endl;


    if(speed1 < speed2) cout<<"Iteration seems to be faster"<<endl;
    else if (speed2 != speed1) cout<<"Recursion seems to be faster"<<endl;
    else cout<<"Both are equally fast"<<endl;

    return 0;
}