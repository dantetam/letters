// color your text in Windows console mode
// colors are 0=black 1=blue 2=green and so on to 15=white
// colorattribute = foreground + background * 16
// to get red text on yellow use 4 + 14*16 = 228
// light red on yellow would be 12 + 14*16 = 236
// a Dev-C++ tested console application by vegaseat 07nov2004

#include <iostream>
#include <windows.h> // WinApi header
#include "Grid.h"

using namespace std; // std::cout, std::cin

int main()
{
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    Grid g(10,10);
    for (int r = 0; r < 10; r++)
    {

    }

    // you can loop k higher to see more color choices
    for(int k = 1; k < 255; k++)
    {
        SetConsoleTextAttribute(hConsole, k);
        cout << k << " I want to be nice today!" << endl;
    }

    cin.get(); // wait
    return 0;
}
