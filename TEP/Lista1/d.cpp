#include <bits/stdc++.h>
using namespace std;
//8  == 01000
//16 == 10000]
/*The program will receive an integers l and r. l defines the minimum value of the sequence, and r defines the maximum value of the sequence. The terms in the sequence are given by a^b(a xor b)  with integers a and b (l<=a<=b<=r)
Simplificando: O programa receberá os valores de l e r, onde l define o valor mínimo dos inteiros a e b, e r o valor maximo dos inteiros a e b, onde l é menor ou igual a a, e a é menor ou igual a b, e b é menor ou igual a r. O processo que o programa deve realizar é de encontrar o valor máximo da operação a XOR b para todos os pares de (a,b) */


int main() {
    int64_t l, r;
    cin >> l >> r;

    int64_t max_xor = 0;
    ios::sync_with_stdio(0);
    for (int64_t a = l; a <= r; a++) {
        for (int64_t b = a; b <= r; b++) {
            int64_t xor_ab = a ^ b;
            if (xor_ab > max_xor) {
                max_xor = xor_ab;
            }
        }
    }

    cout << max_xor << endl;
    return 0;
}
