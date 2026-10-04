#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int t, x;
    cin >> t;
    for (int i = 0; i <t; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    for (int i = 0; i < t; i++)
    {
        cout << nums[i] <<" ";
    } 
    cout << endl;
    return 0;
}