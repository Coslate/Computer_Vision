#include <opencv2/opencv.hpp>
#include <iostream>
#include <cstdlib>
#include <TemplateMatching2D.h>

int main(int argc, char** argv ){
    cv::Mat image;
    image = cv::imread( "./lena.jpg", 1 );
    int start_j = 75;
    int start_i = 165;
    int end_j   = 150;
    int end_i   = 85;

    if ( !image.data ){
        printf("No image data \n");
        return -1;
    }

    if(argc > 2){
        if(std::string(argv[1]) == "-start_j"){
            start_j = std::stoi(argv[2]);
        }
        if(std::string(argv[3]) == "-start_i"){
            start_i = std::stoi(argv[4]);
        }
        if(std::string(argv[5]) == "-end_j"){
            end_j = std::stoi(argv[6]);
        }
        if(std::string(argv[7]) == "-end_i"){
            end_i = std::stoi(argv[8]);
        }
    }

    printf("(start_j, start_i) = (%5d, %5d)\n", start_j, start_i);
    printf("(end_j, end_i)     = (%5d, %5d)\n", end_j, end_i);

    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE );
    cv::imshow("Display Image", image);

    cv::waitKey(0);
    return 0;
}
