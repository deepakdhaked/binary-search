#include <iostream>
#include <vector>
using namespace std;

long long sqrt(int n)
{
    int start = 0, end = n;
    long long mid = (start + end) / 2;
    int long ans;
    while (start <= end)
    {
        long long square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int n = 27;
    long long squareRoot = sqrt(n);
    cout << "Square Root of " << n << " is " << squareRoot;
}