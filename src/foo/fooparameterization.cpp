#include "foo/fooparameterization.hpp"
#include <cmath>


namespace foo{

    double FooParameterization::calculateVolume(double radius){


        //M_PI is more exact :)
        return(4.0 / 3.0)*M_PI*std::pow(radius,3);
    }
} 