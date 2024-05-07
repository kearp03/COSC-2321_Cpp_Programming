#ifndef DAYS_H_
#define DAYS_H_

class Days{
	private:
		int hours;
		double days;
		void updateDays();
	public:
		Days(int);
		void setHours(int);
		int getHours() const;
		double getDays() const;

		Days operator+(const Days&);
		Days operator-(const Days&);
		Days& operator++();
		Days operator++(int);
		Days& operator--();
		Days operator--(int);
};

#endif /* DAYS_H_ */
