#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> &v, int key)
{
    int start = 0, end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == v[mid])
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}

int lastOccurance(vector<int> v, int key)
{
    int start = 0, end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == v[mid])
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 4, 4, 4, 5, 6, 7, 8};
    int key = 4;

    int firstIndex = firstOccurance(v, key);
    int lastIndex = lastOccurance(v, key);

    cout << "First occurance of " << key << " is : " << firstIndex << '\n';
    cout << "last occurance of " << key << " is : " << lastIndex;
}