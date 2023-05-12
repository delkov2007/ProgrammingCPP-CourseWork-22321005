#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Task: Calculate formula: 𝑓=∑(−1)(𝑘+1)𝑛 𝑘=1 𝑥(2𝑘−1) (2𝑘−1)!

    int n;
    double x, sum = 0.0;

    cout << "Calculate f(x)\n";
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    // 'Term' stores the current term of series, while 'sign' keeps track of the sign of each term, 
    // alternating between positive and negative
    double term = x;
    double sign = -1.0;

    // Calculate each term in the series and adding it to the sum
    for (int k = 1; k <= n; k++)
    {
        sum += sign * term;

        // This expression updates the value of term for each iteration, 
        // using a running product that accounts for the odd powers of x and 
        // the factorial values in the denominator.
        term *= (x * x) / ((2 * k) * (2 * k + 1));

        // Flip sign for each term in the series
        sign *= -1.0;
    }

    cout << "The value of the sum up to " << n << " terms is : " << sum << endl;

    return 0;
}