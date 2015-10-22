//1. Provide method definitions for the class described in Chapter Review
//Question 5
//and write a short program that illustrates all the features.
//Provide method definitions for the class described in Chapter Review
//Question 5
//and write a short program that illustrates all the features.

class BankAccount {

	private:

		string DepositerName, AccountNumber;
		double Balance;


	puplic:

		BankAccount (string depositername, string accountnumber, double balance) {
			Depositername = depositername;
			AccountNumber = accountnumber;
			Balance = balance;
		}
		BankAccount () {
			Depositername = "";
			AccountNumber = "";
			Balance = 0;
		}
		string getDepositerName () { return DepositerName; }
		void setDepositerName (string x) { DepositerName = x; }
		string getAccountNumber () {return AccountNumber;}
		void setAccountNumber (string y) {AccountNumber = y}
		double getBalance () {return Balance;}
		void setBalance (string z) {Balance=z;}
		
		double addBalance (double k) {
			Balance +=k;
			return Balance;
		}
		}
		void main () {
			BankAccount test ("Youssef", "123ABC", 8000);
			cout << test.getDepositerName() << " " << get.AccountNumber() << << " " << getBalance() ;
			test.setDepositerName("Youssef Abdelraouf");
			test.setAccountNumber("ABC123");
			test.Balance(20000);
			test.addBalance (5000);
		}
