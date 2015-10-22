class Person {
	private:
		static const LIMIT = 25;
		string lname; // Person’s last name
		char fname[LIMIT]; // Person’s first name
	public:
		Person() {lname = ""; fname[0] = ‘\0’; } // #1
		Person(const string & ln, const char * fn ="Heyyou") :
			lname(ln),
			fname(fn)
			{}
			} // #2
		// the following methods display lname and fname
		void Show() const {
			cout << lname << " " << fname;
			
		} // firstname lastname format
		void FormalShow() const{
			cout << fname << "," << " " << lname;
		}
		// lastname, firstname format
}
void main (){
	Person one();
	
	
	Person two("Youssef");
	Person three("Youssef", "Abdo");
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;

	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	
	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;
	}
