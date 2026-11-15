#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int bnSearch(vector<int>& nums, int lb, int ub, int target){
    if (lb > ub)
    {
        return -1;
    }
    int mid = (lb + ub)/2;
    if (nums[mid]==target)
    {
        return mid;
    } else if(nums[mid]>target){
        return bnSearch(nums, lb, mid-1, target);
    } else{
        return bnSearch(nums, mid+1, ub, target);
    }
}

int main(){
    int n,target,x;
    vector<int>nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    sort(nums.begin(),nums.end());
    int pos = bnSearch(nums, 0, n-1, target);
    if(pos == -1){
        cout << "NOT FOUND" << endl;
    } else{
        cout << "INDEX " << pos << endl;
    }
    return 0;
}


