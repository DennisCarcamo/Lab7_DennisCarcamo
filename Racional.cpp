#include "Racional.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::ostream;
using std::istream;
using std::showpos;
using std::noshowpos;



Racional::Racional(int num, int denom): numer(num), denom(denom){
	
}

ostream& operator<<(ostream& output, const Racional& c){
	output << c.numer << "/" << c.denom;
	return output;
}

 Racional operator+(const Racional& lhsRacional , const Racional& rhsRacional){
	int nuevnum = ((lhsRacional.numer * rhsRacional.denom)+(lhsRacional.denom *rhsRacional.numer));
	int nuevdenom =lhsRacional.denom *rhsRacional.denom;
	Racional retVal(nuevnum,nuevdenom);
	return retVal;
}

 Racional operator-(const Racional& lhsRacional , const Racional& rhsRacional){
	
	int nuevnum = ((lhsRacional.numer * rhsRacional.denom)-(lhsRacional.denom * rhsRacional.numer));
	int nuevdenom =lhsRacional.denom *rhsRacional.denom;

	Racional retVal(nuevnum,nuevdenom);
	return retVal;
}

  Racional operator/(const Racional& lhsRacional , const Racional& rhsRacional){
	int nuevnum = lhsRacional.numer * rhsRacional.denom;
	int nuevdenom =lhsRacional.denom *rhsRacional.numer;



	Racional retVal(nuevnum,nuevdenom);
	return retVal;
}

 Racional operator*(const Racional& lhsRacional , const Racional& rhsRacional){
	int nuevnum = lhsRacional.numer * rhsRacional.numer;
	int nuevdenom =lhsRacional.denom *rhsRacional.denom;
	bool posible=true;
	///simplificar 
	Racional retVal(nuevnum,nuevdenom);
	return retVal;
}


