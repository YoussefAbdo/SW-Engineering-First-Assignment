class Move
{
	private:
		double x;
		double y;
	public:
		Move(double a = 0, double b = 0)
			x(a),
			y(b)
			{} // sets x, y to a, b
		void showmove() const{
			cout << "x and y are: " << x << "and" << y << "respectively";
			
		} // shows current x, y values
		double getx(){return x;}
		double gety(){return y;}
		
		Move add(const Move & m) const{
			Move afteradd (x+m.getx(), y+m.gety());
			return afteradd;
		} // this function adds x of m to x of invoking object to get new x,
		// adds y of m to y of invoking object to get new y, creates a new	
		// move object initialized to new x, y values and returns it
		reset(double a = 0, double b = 0)
			x(a),
			y(b)
			{}
		} // resets x,y to a, b
