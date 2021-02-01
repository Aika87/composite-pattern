#ifndef __POW_HPP__
#define __POW_HPP__

#include <string>
#include "base.hpp"

using namespace std;

class Pow : public Base {
    private:
        double sum;
        string operand;
        Base* child1;
        Base* child2;
    public:
        Pow(Base* value1, Base* value2){
          child1 = value1;
          child2 = value2;
         // operand = “hello”;
          sum = 0.0;
        }

        /* Pure Virtual Functions */
         virtual string stringify(){
            string strValue = child1->stringify();
            strValue += "**";
            strValue += child2->stringify();
            return strValue;
        }
        virtual double evaluate(){
	  int exponentNum = child1->evaluate();
	  int counter = child2->evaluate();  
	  int total = 1;
	  if(counter == 0){
		return 1.0;
	  } 
	  for(unsigned int i = 0; i < counter; i++){
	   	total *= exponentNum;
		//sum = total;
          }
	  sum = total;
          return sum;
        }
	
	virtual Iterator* create_iterator(){
                it = new BinaryIterator(this);
		return it;
        }
	virtual Base* get_left(){ return child1;} 
        virtual Base* get_right(){ return child2;}	
	virtual void accept(CountVisitor * visitor){visitor->visit_pow();}

};
#endif
