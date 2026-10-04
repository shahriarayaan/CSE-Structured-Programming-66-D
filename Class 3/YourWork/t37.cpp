#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int counter = 0;
    while (s[counter] != '\0')
    {
        counter++;
    }
    cout << counter << endl;
    return 0;
}