
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool is_prime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    for (int i=2; i < n-1; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    vector<int> primes;
    for (int i=2; i <= 10000; i++)
        if (is_prime(i))
            primes.push_back(i);

    int T, N;

    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> N;
        if(std::find(primes.begin(), primes.end(), N) != primes.end()) {
            cout << "Prime" << endl;
        } else {
            for(int j = 0; j != primes.size(); j++) {
                if (N % primes[j] == 0) {
                    cout << primes[j] << endl;
                    break;
                }
            }
        }
    }

    return 0;
}