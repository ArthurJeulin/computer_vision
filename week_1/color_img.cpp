#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main()
{
    std::string image_path = "/ssd/dev/computer_vision/img/lena.png";

    cv::Mat img = cv::imread(image_path);
    /**
     * Color Images 
     * An image is represented as an 2D Matrix. We will see how to load color image
    */

    std::cout << "image size = "<< img.size() << std::endl;
    std::cout << "image channels = " << img.channels() <<std::endl;
    /**
     * Image Channels
     * The color image consists of multiples channeds. Each channel itself is grayscale image.
     * The combination of the intensity value of the three channel fives the color that is displayed on the screen.
     * There are many color spaces used in pratices.
     * In OpenCV the order of channelds R,G,B is reverse, i.e In the image matrix, the Blue channel is indexed first,
     * follwoed by Green Channel and finally the Red Channel.
     * 
     * Splitting and Mergin channels
     * One way of working with the indiviual channels is using split and merge.
    */
    cv::Mat img_channels[3];
    cv::split(img, img_channels);

    for(int i= 0;i<3 ; ++i)
    {
        std::string image_save = "/ssd/dev/computer_vision/img/lena_" + std::to_string(i);
        image_save+=".png";
        cv::imwrite(image_save,img_channels[i]);
    }

    /**
     * Manipulating Color Pixel
     *  The color image has 3 channels, when we access a piwel, we get a tuple/array of values
     *  from the 3 channels. We need to specify a tuple for changing the values in the color image.
     * 
    */

    // Acess Color pixel 
    // See the intensity value, one ofr each channel
    std::cout << img.at<cv::Vec3b>(0,0);

    /** Modify Piwel :
     *  Location[0,0] to Yellow (It's a miwture of Red and Green)
     *  Location[1,1] to Cyan (It's a mixture of Blue and Green)
     *  Location[2,2] to Magenta (It's a mixture of Blue and Red)
    */
   //RGB MAIS DANS L'AUTRE SANS DANS LE VECTEUR BLEU/GREEN/RED
   img.at<cv::Vec3b>(0,0) = cv::Vec3b(0,255,255);//GREEN /Red   
   img.at<cv::Vec3b>(1,1) = cv::Vec3b(255,255,0);//Bleu GREEN 
   img.at<cv::Vec3b>(2,2) = cv::Vec3b(255,0,255);//Bleu /Red


    cv::imwrite("/ssd/dev/computer_vision/img/lena_4.png",img);

    // Modity Region of Interest
    //   height from 3 to 60     width from 0 to 30    Color Blue
    img(cv::Range(3,60),cv::Range(0,30)).setTo(cv::Scalar(255,0,0));

    cv::imwrite("/ssd/dev/computer_vision/img/lena_5.png",img);

    return 0;
}