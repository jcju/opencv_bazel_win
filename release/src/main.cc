#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
using namespace cv;

int main()
{
    Mat image;
//    image = imread( "src\\Lena.png", 1 );
    image = imread( "D:\\Projects\\Lena.png", 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    imshow("Temp title", image);
    waitKey(0);
    return 0;
}
