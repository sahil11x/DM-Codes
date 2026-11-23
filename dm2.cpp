#include <iostream>
using namespace std;

long long sumOfCubesIterative(long long n)
{
    long long sum = 0;

    for (long long i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }

    return sum;
}

int main()
{
    long long n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of cubes = "
         << sumOfCubesIterative(n);

    return 0;
}
