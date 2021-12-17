project(icpsolvers)


#For simplicity, not separating classes into .hpp and .cpp files
set(HEADER_FILES 
    dataloader.hpp
    icpsolvers.hpp
    visualise.hpp)

add_executable(icpsolvers main.cpp ${HEADER_FILES})
