#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> &v)
{
    int start = 0, end = v.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (v[mid] > v[0])
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

int binary_search(vector<int> &v, int key, int start, int end)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == v[mid])
        {
            return mid;
        }
        else if (key > v[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> v = {8, 10, 17, 1, 3};
    int key = 17;

    int pivotIndex = getPivot(v);

    int index;
    if (key >= v[pivotIndex] && key <= v[v.size() - 1])
    {
        index = binary_search(v, key, pivotIndex, v.size() - 1);
    }
    else
    {
        index = binary_search(v, key, 0, pivotIndex - 1);
    }

    cout << "Key is at index : " << index;
}