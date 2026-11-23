#include <iostream>
using namespace std;

long long sumOfCubesRecursive(long long n)
{
    if (n == 0)
        return 0;

    return sumOfCubesRecursive(n - 1)
           + n * n * n;
}

int main()
{
    long long n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of cubes = "
         << sumOfCubesRecursive(n);

    return 0;
}
