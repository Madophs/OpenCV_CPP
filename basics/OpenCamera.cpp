#include <opencv2/videoio.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture vidCap;
    int deviceID = 0;
    int apiID = cv::CAP_ANY; // Default API ID

    vidCap.open(deviceID, apiID);

    if (!vidCap.isOpened())
    {
        std::cerr << "[ERROR] Unable to start the camera." << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Starting grabbing the frames\n";
    std::cout << "[INFO] Press any key to terminate..." << std::endl;

    cv::Mat frame;

    while (true)
    {
        vidCap.read(frame);

        if (frame.empty())
        {
            std::cerr << "[ERROR] Unable to read the frame" << std::endl;
            exit(EXIT_FAILURE);
        }

        cv::imshow("Camera", frame);

        if (cv::waitKey(5) >= 0)
            break;
    }

    return EXIT_SUCCESS;
}
