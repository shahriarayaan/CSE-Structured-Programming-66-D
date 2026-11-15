#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    int limit;
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}