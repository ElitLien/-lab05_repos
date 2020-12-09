#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double f(int N, int K)
{
    if (N < K)
        return 0;
    else if (K == 0)
        return 1;
    else 
        return (N - K + 1) / double(K) * f(N, K - 1);
}

int main() 
{
    int n, width = 6;
    cout << "n = " ; cin >> n;
     
    for (int i = 0; i < n; i++) 
    {
        cout << string((n - i) * width / 2, 0x20);
        for (int j = 0; j <= i; j++)
        {
            cout << f(i, j);
            cout << setw(width);
        }
        cout << "\n";
    }
    return 0;
}
