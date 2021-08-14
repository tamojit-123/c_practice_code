#include <iostream>

using namespace std;
#include <conio.h>
int main()
{
    char dir='a';
    int x=10, y=10;
    while (dir !='\r')
    {
        cout << "\nyour location is " << x << ", " << y;
        cout << "\nenter direction (n, s, e, w): ";
        dir = getch();
        switch(dir)
        {
            case 'n': y--; break;
            case 's': y++; break;
            case 'e': x++; break;
            case 'w': x--; break;
            case '\r': cout << "exiting\n"; break;
            default: cout << "try again\n";
        }
    }
    return 0;
}
