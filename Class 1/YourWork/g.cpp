#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        cout << "Vowel" << endl;
    } else if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout << "Vowel" << endl;
    } else{
        cout << "consonant" << endl;
    }
    return 0;
}