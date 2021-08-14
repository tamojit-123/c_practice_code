#include <iostream>

using namespace std;
#include <conio.h>
int main()
{
    int chcount=0;
    int wdcount=1;
    char ch;
    while ((ch=getch()) != '\r')
    {
        if (ch==' ' )
            wdcount++;
        else
            chcount++;
    }
    cout << "\nWords=" << wdcount << endl
         << "letter=" << chcount << endl;
    return 0;
}
