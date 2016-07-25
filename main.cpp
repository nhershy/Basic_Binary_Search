//Basic Binary Search
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ary[] = {2,3,4,5,6,7,8,10,13,18,22,34,40,43,46,47,49,55,57,58,59,60};
    int size = 22;
    int pos = 0;
    int target = 49;
    bool found = false;
    int first = 0;
    int last = size - 1;
    int middle;

    while (!found && first <= last)
    {
        middle = (first+last)/2;
        if (ary[middle] == target)
        {
            found = true;
            pos = middle;
            cout << "found at pos " << pos;
        }
        else if (ary[middle] > target)
        {
            last = middle -1;
        }
        else
        {
            first = middle+1;
        }
    }
    if (!found)
        cout << "not found" << endl;
    return 0;
}
