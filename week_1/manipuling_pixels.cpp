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
     * First index will be the row number and second index is column number.
     * This leads to a lot of confusion since we think of pixels in terms of (x,y) or 
     * (column,row) coordinates and not (row,column)
     * For example, to access the element at 4th row and 5th column, we should use img[3,4].
     * But as we will see in Image annotation section, we will deal with points which are 
     * represented as (x,y) and thus, the coordinates will be (4,3).
    */
    std::cout << "Pixel Value (0,0) " <<(int)img.at<uchar>(0,0) << std::endl;

                    // row (first) y , colums x
    cv::Mat roi = img(cv::Range(0,2),cv::Range(0,4));
    std::cout << "Selected Region \n" <<roi << std::endl;

    //Set value to a specific roi
    // all the pixel value are 111
    roi.setTo(111);
    std::cout << "Selected Region \n" <<roi << std::endl;

    /**
     * OpenCV's imshow
     * Function Syntax
     * void cv::imshow ( const String &  winname,
                        InputArray  mat )
                        Parameters
        winname - Name of the window.
        mat - Image to be displayed.
        
        imshow("Boy",boy);
        // Wait for user to press a key
        waitKey(0);
        // Destroy the window
        destroyAllWindows();
    
    */

    return 0;
}