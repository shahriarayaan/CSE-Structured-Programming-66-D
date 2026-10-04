#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int t,x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    int oddCounter = 0;
    int evenCounter = 0;
    for (int i = 0; i < t; i++)
    {
        if(nums[i]%2==0){
            evenCounter++;
        } else{
            oddCounter++;
        }
    }
    cout << "Odd counter " << oddCounter << endl;
    cout << "Even counter " << evenCounter << endl;
    return 0;
}