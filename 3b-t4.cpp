#include <iostream>
#include <limits> 
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    do {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        if (cin.fail()) {
            cout << "Warning: Invalid input. Please enter a valid integer." << endl;
            cin.clear(); // Reset the error flags on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
