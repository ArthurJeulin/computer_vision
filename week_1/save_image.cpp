#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main()
{
    std::string image_path = "/ssd/dev/computer_vision/img/lena.png";

    cv::Mat img = cv::imread(image_path,0);
    /**
     * Write the Image to Disk
     * In most cases, you would to save the output of your application. We do this using the imwrite function
     * Function Syntax
     * bool cv::imwrite(const String& filename, InputArray img, const std::vector<int>& params = std::vector<int>())
     * Parameters:
     *  filename - String providing the relative oar absolute path where the image should be saved
     *  img - Image matrix to be saved
     *  params - Additional, like specifying the JPEG compression quality etc..
    */
    cv::imwrite("the_path_to_save_img", img);
    
    return 0;
}