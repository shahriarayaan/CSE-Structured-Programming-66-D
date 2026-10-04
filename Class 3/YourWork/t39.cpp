#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sz = s.length();
    int left = 0;
    int right = sz-1;
    for (int i = 0; i < sz; i++)
    {
        if (left<=right && s[left] == s[right])
        {
            left++;
            right--;
        } else{
            break;
        }
    }
    if (right<=left)
    {
        cout << "YES" << endl;
    } else{
        cout <<"NO" << endl;
    }
    return 0;
}