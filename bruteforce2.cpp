#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generate(vector <int> &b, vector<int> &a, int k, int n){
    if (k == n){
        for(int i = 0; i < n; ++i){
            cout << b[i];
        }
        cout << endl;
    }
    else {
        for(int i = 0; i < n; ++i){
            if (a[i] == 0){
                b[k] = i + 1;
                a[i] = 1;
                generate(b, a, k + 1, n);
                a[i] = 0;
            }
        }
    }
}


int main(){
    int n;
    cin >> n;
    //string s;
    //cin >> s;
    vector <int> a(n), b(n);
    generate(b, a, 0 ,n);
}
