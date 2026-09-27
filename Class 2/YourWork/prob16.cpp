#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    for (int i = 1; i < INFINITY; i++)
    {
        cin >> n;
        if (n==0)
        {
            break;
        }
        cout << i << " " << endl;
    }
    return 0;
}