#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
    double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int num=0;
	while (loan>0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << num+1; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << loan*(rate/100);
	loan = loan+(loan*(rate/100));
	cout << setw(13) << left << loan;
	if(loan > pay){
	cout << setw(13) << left << pay;
	}else{
	    pay=loan;
	    cout << setw(13) << left << pay;
	}
	loan=loan-pay;
	cout << setw(13) << left << loan;
	cout << "\n";
	num=num+1;
	}
	return 0;
}

	
	
