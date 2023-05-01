#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n = 2;
    cin >> i >> j;
    char * a[i][j];
    char * b[i][j];
    while(n--){
    for (int aux = 0;aux < i ; aux++){
        for (int aux2 = 0;aux2 < j; aux++){
            char element;
            cin >> element;
            (n == 1)?*a[aux][aux2] = element: *b[aux][aux2];
        }
    }
    }
    int equals = 0;
    int shift_v_times = 0;
    int shift_h_times = 0;
    while(!equals){
        for (int aux = 0;aux < i ; aux++){
            for (int aux2 = 0;aux2 < j; aux++){
            *a[aux+1][aux2] = *a[aux][aux2];
            *b[aux+1][aux2] = *a[aux][aux2];
            }
        }
        shift_v_times++;
        if()
        
    }

}