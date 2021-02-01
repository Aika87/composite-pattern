#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string> 

class Op : public Base {
    public:
        Op(double value) : val(value) {}
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
        virtual Iterator* create_iterator(){
                it = new NullIterator(this);
		return it;
        }
	virtual Base* get_left(){ return nullptr;} 
        virtual Base* get_right(){ return nullptr;}
	virtual void accept(CountVisitor * visitor){visitor->visit_op();}

    private: 
	double val; 
};

#endif //__OP_HPP__
