
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
void main(void)
{
	cv::Mat image;
	std::cout << "size: " << image.size().height << " , " << image.size().width << std::endl;
	image = cv::imread("img.jpg");
	if (!image.data) { 
		std::cout << "No file found!" << std::endl;
	}
	cv::namedWindow("Original Image"); 
	// define the window 
	cv::imshow("Original Image", image); 
	// show the image
	cv::Mat result;
	cv::flip(image, result, 1);
	cv::namedWindow("Output Image"); 
	cv::imshow("Output Image", result);
	cv::waitKey(0);
	cv::imwrite("output.bmp", result);


	return;
}