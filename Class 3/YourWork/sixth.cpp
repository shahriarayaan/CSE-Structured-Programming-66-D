#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int t,x,target;
    cin >> t >> target;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    int flag = 0;
    for (int i = 0; i < t; i++)
    {
        if(nums[i]==target){
            flag = 1;
            cout << i << endl;
            break;
        }
    }
    if(flag == 0){
        cout << "Not found" << endl;
    }
    return 0;
}