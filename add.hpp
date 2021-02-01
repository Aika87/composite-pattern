#ifndef __ADD_HPP__
#define __ADD_HPP__

#include <string>
#include "base.hpp"
#include <iostream>

using namespace std;

//class Iterator; 

class Add : public Base {
    private:
        double sum;
        char operand;
        Base* child1;
        Base* child2;
    public:
        Add(Base* value1, Base* value2){
	  child1 = value1;
	  child2 = value2;
  	  operand = '+';
	  sum = 0.0;
	}

        /* Pure Virtual Functions */
         virtual string stringify(){ 
	    string strValue = child1->stringify();
	    strValue += operand;
	    strValue += child2->stringify();
	    return strValue;
	}
	virtual double evaluate(){  
	   double sum = child1->evaluate() + child2->evaluate();  
	   return sum;
	}
	
	virtual Iterator* create_iterator(){
		it = new BinaryIterator(this);
		return it;  	
	}
	
	virtual Base* get_left(){ return child1;} 
        virtual Base* get_right(){ return child2;}
	virtual void accept(CountVisitor * visitor){
		visitor->visit_add();
	}

};

#endif
