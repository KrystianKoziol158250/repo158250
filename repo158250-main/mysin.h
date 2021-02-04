	#ifdef mysin.h
	#define mysin.h
	/**klasa*/
	class MySin{
		/**klasa publiczna*/
	public:
	/**a*/
	MySin();
	/**b*/
	MySin(double x);
	/**c*/
	MySin(const MySin &obj);
	/**d*/
	double value();
	/**e*/
	void setX(double);
	/**f*/
	double getX();
	/**g*/
	private:
	/**klasa prywatna*/
	}
	double mX;
	#endif/**mysin.h*/