#include <iostream>
#include "icpsolvers.hpp"

int main(int argc, char *argv[]) // can set it so, that it follows
{
    std::cout << "Hello world";
    // initiate classes
    icpSolver solver1;
    while (false)
    {
        solver1.iterateOnce();
    }
    std::cout << "Hello world" << std::endl;
    // icpSolver caches information we need to use for plots, so we don't need a fat loop above.
    // Instead call the plotting functions in the end.
    return 0;
}