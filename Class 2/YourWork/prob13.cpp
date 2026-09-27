#include <iostream>
using namespace std;

int main(){
    int n;
    int ans =1;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        ans = ans * i;
    }
    cout << ans << endl;
    return 0;
}