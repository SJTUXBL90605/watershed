#include <iostream>
#include <D:/opencv/opencv/build/include/opencv2/core.hpp>
#include <D:/opencv/opencv/build/include/opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgcodecs/legacy/constants_c.h>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/highgui/highgui_c.h>

using namespace cv;

int main()
{
	//∂¡»Î“ª’≈Õº∆¨
	Mat  img = imread("E:/shujujiegou/bigwork/watershed/Project1/test.jpg",CV_LOAD_IMAGE_COLOR);
	namedWindow("Õº∆¨",CV_WINDOW_AUTOSIZE);
	imshow("Õº∆¨",img);
	waitKey(60000);
	return 0;
}