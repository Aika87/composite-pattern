#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>
#include "../lab-08---visitor-pattern-pfala001-akris023-lab8/iterator.hpp"
#include "../lab-08---visitor-pattern-pfala001-akris023-lab8/visitor.hpp" 

class Iterator; 

class Base {

    protected: 
	Iterator* it;
// 	CountVisitor * visitor

    public:
        /* Constructors */
        Base() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
	virtual Iterator* create_iterator() = 0; 
	virtual Base* get_left() = 0; 
	virtual Base* get_right() = 0;
	virtual void accept(CountVisitor * visitor) = 0; 
};

#endif //__BASE_HPP__
