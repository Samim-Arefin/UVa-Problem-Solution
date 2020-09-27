31#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int first, second, one, two;

    while (cin>>first>>second && (first>=0 && second>=0))
    {
        if (first > second)
        {
            one = first - second;
            two = second + 100 - first;

        }
        else
        {
            one = second - first;
            two = first + 100 - second;
        }
        cout<<min(one, two)<<endl;
    }
}

