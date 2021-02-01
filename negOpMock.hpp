#ifndef __NEGOPMOCK_HPP__
#define __NEGOPMOCK_HPP__

#include "base.hpp"

class NegOpMock: public Base {
    public:
        NegOpMock() { };

        virtual double evaluate() { return -1; }
        virtual string stringify() { return "-1"; }
}

#endif
