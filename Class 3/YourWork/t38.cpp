#include <iostream>
using namespace std;

int main(){
    int vowelCounter = 0;
    int constCounter = 0;
    string s;
    cin >> s;
    int sz = s.length();
    for (int i = 0; i < sz; i++)
    {
        if(s[i]=='a'|| s[i]=='e' || s[i] == 'i' || s[i] == 'o' || s[i]=='u' || s[i]=='A'|| s[i]=='E' || s[i] == 'I' || s[i] == 'O' || s[i]=='U'){
            vowelCounter++;
        }
    }
    cout << vowelCounter << endl;
    return 0;
}