#include <iostream>
#include <opencv2/core/matx.hpp>
#include <opencv2/imgcodecs.hpp>
#include <sstream>
#include <string>
#include "config/CVEnv.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, const char **argv)
{
    std::cout << ASSETS_PATH << std::endl;
    cv::Mat color = cv::imread(ASSETS_PATH + "/lena.png");
    cv::Mat gray = cv::imread(ASSETS_PATH + "/lena.png", cv::IMREAD_GRAYSCALE);

    if (color.data)
    {
        // Let's write the image
        cv::imwrite("lenaGray.png", gray);

        int row = color.rows - 1;
        int col = color.cols - 1;
        cv::Vec3b pixel = color.at<cv::Vec3b>(row, col);

        std::cout << "Pixel value (B,G,R) : (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2]  << ")"<< std::endl;

        cv::imshow("Lena Color", color);
        cv::imshow("Lena Gray", gray);

        cv::waitKey();
    } else {
        std::cout << "Could not open the file or image not found." << std::endl;
    }
    return 0;
}
