#include <iostream>

template <typename T>
class mesh
{
    // Read point cloud, and save it as internal variable.
    // Calculate its features on demand and save them as attributes.


    // ICP variants do not need every detail about the nodes.
    // We will call the following methods from icpSolver class to calculate the ones we need.
    // This will make it easier to calculate
public:
    void normals(){}
    void faces(){}
    void neighbors(){}
    void adjacentfaces(){}
    void curvature(){} // need to calculate to use normal-space sampling.

};