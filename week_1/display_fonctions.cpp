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
     * Additional Display Utility Fonctions :
     * There are 4 more functions that are present in OpenCv which are commonly used with imshow function.
     * 
     * 1 cv::namedWindows : 
     *  This functions is used to create a  display windows with a specific name. This name is provided as the 
     *  the first argument of this function. The second argument is a flag which decides whether the windows can be
     *  (WINDOW_NORMAL) or to be fixed to match the image size (WINDOW_AUTOSIZE - Default flag).
     * Function Syntax
     * void cv::namedWindow    (const String &  winname,int flags = WINDOW_AUTOSIZE)
     * Parameters
     *   winname - Name of the window in the window caption that may be used as a window identifier.
     *   flags - Flags of the window
     * 
     * 2 cv::waitKey : 
     *  This function is widely used in image as well as video processing. It is a keyboard binding function.
     *  Its only argument is time in milliseconds. The function waits for specified milliseconds for any keybaord
     *  event. If you press any key in that time the program continues.
     *  If 0 is passed, it waits indefinitely for a key stroke.j
     *  Function syntac : 
     *  int cv::waitKey(int delay = 0)
     * Parameters:  
     *  - delay - Delay in millisseconds O is the special value that means "forever"
     * 
     * 3 cv::destroyWindow
     *  This function is used to destroy or to close a particular display windows. The name of the windows is provided as
     *  an argument ot the this function
     * Function Syntax
     *  void cv::destroyWindows(const String& winname)
     *  Parameters : 
     *  winname - Name of the windows to be destroyed
     * 
     * 4. cv::destroyAllWindows
     *  this function is used to destroy windows. This function does not take any argument
     *  void cv::destroyAllWindows()
    */
    
    return 0;
}