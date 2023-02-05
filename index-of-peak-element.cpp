#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> &v)
{
    int start = 0, end = v.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (v[mid] < v[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> v = {1, 15, 25, 45, 42, 21, 17, 12, 11};
    int index = peakIndex(v);
    cout << "Index of peak element is : " << index;
}