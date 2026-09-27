#include <iostream>
using namespace std;

int main(){
    int t;
    int sum = 0;
    int a = 0;
    cin >> t;
    while (t--)
    {
        a++;
        sum = sum + a;
    }
    cout << sum << endl;
    return 0;
}