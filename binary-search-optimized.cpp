#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &v, int key)
{
    int start = 0, end = v.size() - 1;
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
    vector<int> even = {2, 4, 6, 8, 12, 18};
    vector<int> odd = {3, 8, 11, 14, 16};
    int key = 12;

    int evenIndex = binary_search(even, key);
    cout << "Index of " << key << " is : " << evenIndex;
    cout << '\n';
    int oddIndex = binary_search(odd, key);
    cout << "Index of " << key << " is : " << oddIndex;
}