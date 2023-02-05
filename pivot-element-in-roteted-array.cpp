#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> &v)
{
    int start = 0, end = v.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (v[mid] >= v[0])
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
    vector<int> v = {8, 10, 17, 1, 3};
    int pivotIndex = getPivot(v);
    cout << "Pivot element is : " << v[pivotIndex];
}