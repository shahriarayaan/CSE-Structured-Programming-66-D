#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a = 0;
    while (t--)
    {
        a++;
        if (a%2==0)
        {
            cout << a << " ";
        }
    }
    return 0;
}