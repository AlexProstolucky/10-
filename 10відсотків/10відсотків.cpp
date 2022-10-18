#include <iostream>
#include <list>
using namespace std;
template<class I>

void print(const I& start, const I& end)
{
    for (I it = start; it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

bool sort(double a, double b) 
{
    return a + a * 0.1 > b ? true : false;
}

int main()
{
    list <double> l{ 1.1,1.2,2, 3,4,5,6 };
    cout << "List: ";
    print(l.begin(), l.end());

    l.unique(sort);

    cout << "List after: ";
    print(l.begin(), l.end());
}