#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int t,x;
    int sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    for (int i = 0; i < t; i++)
    {
        sum += nums[i];
    }
    cout << sum << endl;
    return 0;
}