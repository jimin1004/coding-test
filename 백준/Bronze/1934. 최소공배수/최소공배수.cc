#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    // cout << "!";
    int r = 0;
    if (a > b) {
        // cout << a << " > " << b << "\n";
        r = a % b;
        if (r == 0) {
            return b;
        } else {
            return gcd(b, r);
        }
    } else {
        // cout << "2";
        r = b % a;
        if (r == 0) {
            return a;
        } else {
            return gcd(a, r);
        }
    }
    // cout << "??";
    //  return 1;
}

int main() {
    int t = 0;
    int a = 0;
    int b = 0;
    int answer = 0;

    cin >> t;

    while (t--) {
        // cout << "�떆�옉";
        cin >> a >> b;

        answer = (a * b) / gcd(a, b);

        cout << answer << '\n';
    }

    return 0;
}

// int main() {
//   int t = 0;
//   int a = 0;
//   int b = 0;
//   vector<int> prime_a;
//   size_t p = 0;
//   int answer = 1;
//   cin >> t;
//   while (t--) {
//     cin >> a >> b;
//     for (int i = 2; i <= a; i++) {
//       while (a % i == 0) {
//         // cout << i << '\n';
//         prime_a.push_back(i);
//         a /= i;
//         answer *= i;
//       }
//     }

//     for (int i = 2; i <= b; i++) {
//       while (b % i == 0) {
//         // cout << i << '\n';
//         b /= i;

//         if (find(prime_a.begin(), prime_a.end(), i) == prime_a.end()) {
//           answer *= i;
//         } else {
//           p = find(prime_a.begin(), prime_a.end(), i) - prime_a.begin();
//           // cout << p << '\n';
//           prime_a.erase(prime_a.begin() + p);
//         }
//       }
//     }
//     cout << answer << '\n';
//     prime_a.clear();
//     answer = 1;
//   }

//   return 0;
// }