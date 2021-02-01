#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <string>
#include <stdlib.h>

class Rand : public Base {

     public:
        Rand(){
	  srand(0);
          int ran = rand() % 100;
          val = double(ran);
}
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
    
        virtual Iterator* create_iterator(){
          it = new NullIterator(this);
 	  return it; 	
        }
	
	virtual Base* get_left(){ return nullptr;}
        virtual Base* get_right(){ return nullptr;}
	virtual void accept(CountVisitor * visitor){visitor->rand_count();}
	 
     private:
        double val;

};

#endif
