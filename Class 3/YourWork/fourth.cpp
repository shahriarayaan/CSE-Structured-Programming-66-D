#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int t,x,target;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    target = nums[0];
    for (int i = 0; i <t; i++)
    {
        if (target<nums[i])
        {
            target = nums[i];
        }
    }
    cout << target << endl;
    return 0;
}