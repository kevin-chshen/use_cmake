#include "circle.h"
#include <iostream>

circle::circle()
{
    std::cout << "constructor " << __FILE__ << std::endl;
}

circle::~circle()
{ 
    std::cout << "destructor " << __FILE__ << std::endl;
}
