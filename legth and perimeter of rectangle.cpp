#include <iostream>
using namespace std;
int main()
{
    double length, breadth, perimeter, area;
    cout << "enter length of rectangle: ";
    cin >> length;

    cout << "enter breadth of rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area of rectangle is: " << area << endl;
    cout << "Perimeter of rectangle is: " << perimeter << endl;

    if (area > perimeter)
    {
        cout << "Area is greater than perimeter" << endl;
    }
    else if (perimeter > area)
    {
        cout << "Perimeter is greater than area" << endl;
    }
    else
    {
        cout << "Area is equal to perimeter" << endl;
    }
    return 0;
}