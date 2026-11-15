#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int highest(vector<int>nums, int n){
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >mx)
        {
            mx = nums[i];
        }
    }
    return mx;

}

double avg(vector<int>nums, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+nums[i];
    }
    double aavg = sum/n;
    return aavg;
}

int main(){
    int n,x;
    cin >> n;
    vector<int>nums;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    int mxAns = highest(nums,n);
    double avgAns = avg(nums,n);
    cout << mxAns << endl<< fixed << setprecision(2) << avgAns << endl;
    return 0;
}