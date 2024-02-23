#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>


std::string type2str(int type) {
  std::string r;

  uchar depth = type & CV_MAT_DEPTH_MASK;
  uchar chans = 1 + (type >> CV_CN_SHIFT);

  switch ( depth ) {
    case CV_8U:  r = "8U"; break;
    case CV_8S:  r = "8S"; break;
    case CV_16U: r = "16U"; break;
    case CV_16S: r = "16S"; break;
    case CV_32S: r = "32S"; break;
    case CV_32F: r = "32F"; break;
    case CV_64F: r = "64F"; break;
    default:     r = "User"; break;
  }

  r += "C";
  r += (chans+'0');

  return r;
}


int main()
{
    /**
     * Mat cv::imread  (   const String &  filename,
                           int flags = IMREAD_COLOR )
        It has 2 arguments:
            -Path of the image file (filename): This can be an absolute or relative path. This is a mandatory argument.
            -flags: These flags are used to read an image in a particular format (for example, grayscale/color/with alpha channel). This is an optional argument with a default value of IMREAD_COLOR or 1 which loads the image as a color image.
        
        Before we proceed with some examples, let's also have a look at the flags available.
        Flags
            -IMREAD_GRAYSCALE or 0: Loads image in grayscale mode
            -IMREAD_COLOR or 1: Loads a color image. Any transparency of image will be neglected. It is the default flag.
            -IMREAD_UNCHANGED or -1: Loads image as such including alpha channel.
    */
   std::string image_path = "/ssd/dev/computer_vision/img/lena.png";

   cv::Mat img = cv::imread(image_path,0);

   std::cout << "Data type = " << type2str(img.type()) << std::endl;
   std::cout <<"Image Dimensions ="<< img.size() << std::endl;


}
