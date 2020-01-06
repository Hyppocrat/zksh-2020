#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generate(const vector <int> &a, vector <int> &b, int k, int n, int x, bool &pp){
    if (pp){
        return ;
    }
    if (k == n){
        int sum = 0;
        for(int i = 0; i < n; ++i){
            if (b[i] == 0){
                sum += a[i];
            }
            else {
                sum -= a[i];
            }
        }
        if (sum == x){
            pp = 1;
            for(int i = 0 ; i < n; ++i){
                if (b[i] == 0){
                    cout << " + " << a[i];
                }
                else {
                    cout << " - " << a[i];
                }
            }
            cout << endl;
        }
    }
    else {
        for(int i = 0; i <= 1; ++i){
            b[k] = i;
            generate(a, b, k + 1, n, x, pp);
        }
    }
}


int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool pp = 0;
    generate(a, b, 0, n, x, pp);
}
