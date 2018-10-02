// Fibonacci numbers - iteration vs recursion method

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int n;
clock_t start, stop;
double speed1, speed2;

long double fibrec(int n) {
    if (n==1 || n==2) return 1;
    else return fibrec(n-2)+fibrec(n-1);
}

int main() {

    cout << setprecision(100);

    cout << "Which Fibonacci sequence number you want to display: " << endl;
    cin >> n;

// Fibonacci numbers - iteration

    cout << "Result using iteration: " << endl;

    long double fib[n];

    start = clock();

    fib[0] = 1;
    fib[1] = 1;

    if (n == 1 || n == 2) {
        cout << fib[n-1] << endl;
    } else {
        for (int i = 2; i < n; i++) {
            if (i < n - 1) {
                fib[i] = fib[i - 1] + fib[i - 2];
//            cout << fib[i] << ", ";
            } else {
                fib[i] = fib[i - 1] + fib[i - 2];
                cout << fib[i] << endl;
            }
        }
    }

    stop = clock();

    speed1 = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << "Iteration time: " << speed1 << endl << endl;

// Fibonacci numbers recursion

    cout << "Result using recursion: " << endl;

    start = clock();

    cout << fibrec(n) << endl;

    stop = clock();

    speed2 = (double)(stop - start) / CLOCKS_PER_SEC;

    cout << "Recursion time:" << speed2 << endl << endl;


    if(speed1 < speed2) cout<<"Iteration seems to be faster"<<endl;
    else if (speed2 != speed1) cout<<"Recursion seems to be faster"<<endl;
    else cout<<"Both are equally fast"<<endl;

    return 0;
}