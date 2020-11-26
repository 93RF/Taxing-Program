#include <iostream>
#include <conio.h> 
#include <iomanip>
 
using namespace std;

int main(){
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	string taxDisplay;
	double taxIncome, line1, line2, line3, tax;
	
	cout << " Taxable Income $ ";
	cin >> taxIncome;
	
	cout << "\n Income $ " << setw(9) << taxIncome << endl;
	
	if (taxIncome <= 45916){
		line2 = 0.15;
		tax = line2 * taxIncome;
		cout << setw(19) << " X 15%";
		cout << "\n ------------------";
		cout << "\n Tax " << setw(6) << "$" << setw(8) << tax;
		return 0;
	}
	
	else if (taxIncome > 45916 && taxIncome < 91831 ){
		line1 = 45916;
		line2 = 0.205;
		taxDisplay = "20.5%";
		line3 = 6887;
	}
	
	else if (taxIncome > 91831 && taxIncome < 142353 ){
		line1 = 91831;
		line2 = 0.26;
		taxDisplay = "26%";
		line3 = 16300;
	}
	
	else if (taxIncome > 142353 && taxIncome < 202800 ){
		line1 = 142353;
		line2 = 0.29;
		taxDisplay = "29%";
		line3 = 29436;
	}
	
	else if (taxIncome > 202800 ){
		line1 = 202800;
		line2 = 0.33;
		taxDisplay = "33%";
		line3 = 46965;
		
	}
	
		tax = ((taxIncome - line1) * line2) + line3 ;
		cout << setw(11) << "-" << setw(8) << line1;
		cout << "\n ------------------" << endl;
		cout << setw(19) << taxIncome - line1 << endl;
		cout << setw(13) << " x " << taxDisplay;
		cout << "\n ------------------" << endl;
		cout << setw(19) << taxIncome * line2 << endl;
		cout << setw(11) << "+" << setw(8) << line3;
		cout << "\n ------------------" << endl;
		cout << " Tax " << setw(6) << "$" << setw(8) << tax;
		
}
	
