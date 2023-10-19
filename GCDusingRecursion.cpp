/*Problem 1: Finding greatest common divisor (GCD)
Write a recursive function to find the greatest common divisor (GCD) of two integers using the Euclidean
algorithm. The GCD of two numbers is the largest number that divides both of them without leaving a
remainder.*/
#include <iostream>
using namespace std;
int GCD(int n, int m)
{
    if (m != 0)
    {
        return GCD(n, n % m);
    }
    else
        return n;
}
int main()
{
    int n, m;
    cout << "Enter 2 nums" << endl;
    cin >> n >> m;
    cout << "The GCD of " << n << " and " << m << " is " << GCD(n, m);
}