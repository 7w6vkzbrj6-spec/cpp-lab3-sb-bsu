#include<iostream>
using namespace std;
int main()
{
int k, i = 1, sum
_
k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
do {
cout << "Enter integer nr.
" << i << ": ";
cin >> number;
sum
_
k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: " << sum
_
k;
return 0;
}
