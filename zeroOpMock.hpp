#ifndef __ZEROOPMOCK_HPP__
#define __ZEROOPMOCK_HPP__

#include "base.hpp"

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { };

        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; }
}

#endif
