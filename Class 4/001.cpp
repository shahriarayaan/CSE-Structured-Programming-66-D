#include <iostream>
#include <iomanip>
using namespace std;

int total(int quiz, int mid, int Final){
	int sum = quiz+mid+Final;
	return sum;
}

double per(double tt, double mx){
	double pct = (tt/mx)*100;
	return pct;
}

char grade(double pct){
	if(pct >= 80.0){
		return 'A';
	} else if(pct>=65){
		return 'B';
	} else if(pct >=60){
		return 'C';
	} else{
		return 'F';
	}
}

int main(){
	double quiz, mid, Final;
	cin >> quiz >> mid >> Final;
	double tt = total(quiz,mid,Final);
	double pct = per(tt,100);
	char gr = grade(pct);
	cout << tt << " | " << fixed << setprecision(2) <<  pct << " | " << gr << " | " << endl;
	return 0;
}