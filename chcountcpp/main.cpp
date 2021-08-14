#include <iostream>

using namespace std;
#include <conio.h>
int main()
{
    int chcount=o;
    int wdcount=1;
    char ch = 'a';
    cout << "enter a phrase: ";
    while (ch != '\r')
    {
        ch = getche();
        if (ch=='')
            wdcount++;
        else
            chcount++;
    }
    cout << "words=" << wdcount << endl
         << "letters=" << (chcount-1) << endl;
    return 0;
}
