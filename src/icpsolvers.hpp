#include <iostream>
#include "dataloader.hpp"

class icpSolver{
    // This is a template class skeleton for each icpSolver variant.
    // We can reproduce this template for every variant.
    // This way we can have everything in one place for every icpSolver.
    // Initialize solver such that it keeps meshes as internal variables.
    // Every iteration should update them, and cache information about them. 
    // Did not decide how to do the caching yet.
    // Do you know about any profiling tool to track the time it takes to run the code?


    // 1st step: data association - find closest points
    void findClosestPoints() 
    {
        // Find corresponding points
        // idea here: the better the data association is, the more successful the procrustes algorithm will perform.
        // so we can use procrustes to compare data association methods.

    }

    // minimize the distance between point pairs
    void align()
    {
        //calculate Center Of Mass of corresponding points (not the whole point cloud)
        //shift center of masses on top of each other = substract the calculated means from point clouds
        //rotate so that error measure is minimized

    }
public:
    void iterateOnce()
    {
        findClosestPoints();
        align();
    }
};