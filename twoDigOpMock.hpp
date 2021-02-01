#ifndef __TWODIGOPMOCK_HPP__
#define __TWODIGOPMOCK_HPP__

#include "base.hpp"

class TwoDigOpMock: public Base {
    public:
        TwoDigOpMock() { };

        virtual double evaluate() { return 25; }
        virtual string stringify() { return "25"; }
}

#endif
