#include <iostream>
#include <iomanip>
using namespace std;

double bill(int unit, double rate, char type){
    double nonCbill = unit*rate;
    if (type == 'c' || type =='C')
    {
        nonCbill = nonCbill + (nonCbill*0.15); 
    }
    return nonCbill; 

}

int main(){
    int unit;
    double rate;
    char type;
    cin >> unit >> rate >> type;
    double toPay = bill(unit,rate,type);
    cout << fixed << setprecision(2) << toPay << endl;
    return 0;
}