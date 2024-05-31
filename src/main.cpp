#include <iostream>
#include "foo/fooparameterization.hpp"

int main(){

    double radius;
    std::cout<<" Enter a radius to perform the calculation: "<<std::endl;
    std::cin>>radius;
    
    double volume=foo::FooParameterization::calculateVolume(radius);
    std::cout<<"Volume of the sphere is: "<<volume << std::endl;



    return 0;
}