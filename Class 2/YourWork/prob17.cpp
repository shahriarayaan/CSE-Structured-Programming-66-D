#include <iostream>
using namespace std;

int main(){
    int a;
    int sum = 0;
    for (int i = 0; i <5; i++)
    {
        cin >> a;
        if (a<0)
        {
            continue;
        }
        sum = sum + a;
    }
    cout << sum << endl;
    return 0;
}