#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>

using namespace cv;
using namespace std;

int main()
{
//  Mat image = imread( "..\\img\\Lena.png", 1 );
    Mat image = imread(samples::findFile("Lena.jpg"), IMREAD_COLOR); // Read the file
    if (!image.data)
    {
        printf("No image data \n");
        return -1;
    }
    imshow("Temp title", image);
    waitKey(0);
    return 0;
}
