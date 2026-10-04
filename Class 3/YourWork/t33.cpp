#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int row,col,x;
    cin >> row >> col;
    vector<int> nums;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            nums.push_back(x);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << nums[j] <<" ";
        }
        cout << endl;
    }
    return 0;
}