#include <iostream>
using namespace std;

long long sumOfCubesFormula(long long n)
{
    long long t = n * (n + 1) / 2;
    return t * t;
}

int main()
{
    long long n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of cubes = "
         << sumOfCubesFormula(n);

    return 0;
}
