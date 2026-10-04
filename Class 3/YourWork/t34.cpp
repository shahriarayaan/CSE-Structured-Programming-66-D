#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int row, col, x;
    cin >> row >> col;
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            vec1.push_back(x);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            vec2.push_back(x);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int index = i * col + j;
            vec3.push_back(vec1[index] + vec2[index]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int index = i * col + j;
            cout << vec3[index] << " ";
        }
        cout << endl;
    }
    return 0;
}