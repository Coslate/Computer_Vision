#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <TemplateMatching1D.h>

int main(int argc, char** argv ){
    std::vector<int> s{ -1, 0, 0, 1, 1, 1, 0, -1, -1, 0, 1, 0, 0, -1 };
    std::vector<int> t{ 1, 1, 0 };
//    std::vector<int> t{ 0, -1, -1, 0 };
//    std::vector<int> t{ 1, 1, 1, 0, 0 };
    size_t index = 0;

    displayArray("Signal", s);
    displayArray("Template", t);
    templateMatching1D(s, t, index);
    std::cout<<"index = "<<index+1<<std::endl;//match with result of Octave/Matlab

    return 0;
}
