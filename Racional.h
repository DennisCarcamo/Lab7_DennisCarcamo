#pragma once
#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::istream;

class Racional {
public:
	int numer, denom;

	explicit Racional(int=0 , int =1 );
	string toString() const;
	friend Racional operator+(const Racional& rshRacional , const Racional& lshRacional);
	friend Racional operator-(const Racional& rshRacional , const Racional& lshRacional);
	friend Racional operator*(const Racional& rshRacional , const Racional& lshRacional);
	friend Racional operator/(const Racional& rshRacional , const Racional& lshRacional);
	friend ostream& operator<<(ostream& output, const Racional& c);

};

	
