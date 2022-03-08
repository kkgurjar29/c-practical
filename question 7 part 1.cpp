#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a == 0 || b == 0)
    return 0;
    if (a>b)
    return gcd(a-b,b);
    return gcd(a,b-a);
}
int main() 
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cout << " Input the first number: ";
    cin >> num1;
    cout << " Input the second number: ";
    cin >> num2;
 
    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}


