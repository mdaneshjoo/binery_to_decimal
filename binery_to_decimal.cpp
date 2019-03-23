#include <iostream>
#include <math.h>
using namespace std;
void number_of_digit(int num)
{

    int bagimande;
    int b = 0;
    int cntr = 0;

    while (num > 0)
    {

        bagimande = num % 10;
        b += bagimande * pow(2, cntr);
        num = num / 10;
        cntr++;
    }

    cout << b << endl;
}
int main()
{
    int num;

    cin >> num;
    number_of_digit(num);
}