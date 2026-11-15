#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

void bonusReset(int gracePoints){
    gracePoints = 0;
}

void graceMarks(vector<int>& nums, int n, int gracePoints){
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>=35 && nums[i]<=39)
        {
            nums[i] += gracePoints;
        }
    }
}

int main(){
    int n,x, gracePoints = 5;
    cin >> n;
    vector<int>nums;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    bonusReset(gracePoints);
    graceMarks(nums,n,gracePoints);
    cout << gracePoints << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}