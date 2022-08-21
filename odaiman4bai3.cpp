#include <iostream>
using namespace std;
int main()
{
    int so;
    int soTemp;
    int tong = 0;
   printf ("nhap n = :");
    cin >> so;
    soTemp = so;
    while (soTemp != 0) {
        tong += soTemp % 10;
        soTemp /= 10;
    }
printf ("tong cua cac chu so la \%d");
    return 0;
}