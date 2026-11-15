#include <iostream>
using namespace std;

bool isPal(string& s, int left, int right){
    if(left>=right){
        return true;
    }
    if (s[left] != s[right])
    {
        return false;
    }
    isPal(s, left+1, right-1);
}

int main(){
    string s;
    cin >> s;
    int sz = s.length();
    if(isPal(s,0,sz-1)){
        cout << "PALINDROME" << endl;
    } else{
        cout << "NOT A PALINDROME" << endl;
    }
    return 0;
}