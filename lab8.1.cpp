#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    float loan;
    float rate;
    float pay;
  
    
    cout <<"Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		int year=1;
		float Interest;
		float Total ;
		float NewBalance;
		
	while(loan > 0.0){
		
		 Interest = loan*rate/100;
		 Total = loan+Interest;
		 if(pay > Total){
			pay = Total;
			
		}
		NewBalance = Total-pay;
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;  //PrevBalance
		cout << setw(13) << left << Interest;  //Interest 
		cout << setw(13) << left << Total; //Total
		cout << setw(13) << left << pay;
		cout << setw(13) << left << NewBalance ; //NewBalance
		cout << "\n";
		loan = NewBalance;
		year++;	
	}
	
	return 0;
}
