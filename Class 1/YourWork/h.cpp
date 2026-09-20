#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (c>='A' && c<='Z')
    {
        cout << "Uppercase Alphabet" << endl; 
    } else if(c>= 'a' && c<='z'){
        cout << "Lowercase Alphabet" << endl;
    } else if(c>= '0' && c<='9'){
        cout << "Digit" << endl;
    } else{
        cout << "Special Character" << endl;
    }
    return 0;
}