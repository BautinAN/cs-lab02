#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';

float max;
max = a + b;
if(max < a - b) max = a - b;
if(max < a * b) max = a * b;
if(max < a / b) max = a / b;
cout << "Max = " << max << '/n';

float min;
min = a + b;
if(min > a - b) min = a - b;
if(min > a * b) min = a * b;
if(min > a / b) min = a / b;
cout << "Min = " << min << '/n';
}
