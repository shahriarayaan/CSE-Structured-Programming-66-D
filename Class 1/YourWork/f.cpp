#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = a+b;
    int sub = a-b;
    if (sum%2==0)
    {
        cout << "Sum is even" << endl;
    } else{
        cout << "Sum is odd" << endl;
    }
    if (sub > 0)
    {
        cout << "sub is positive" << endl;
    } else if(sub< 0){
        cout << "Sub is negetive" << endl;
    } else{
        cout << "sub is zero" << endl;
    }
    if (a>b)
    {
        cout<< "First is Greater than Second" << endl;
    } else if(a<b){
        cout << "First is less than second" << endl;
    } else{
        cout <<"First is equal to second" << endl;
    }
    return 0;
}