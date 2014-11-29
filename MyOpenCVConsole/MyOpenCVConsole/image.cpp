#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

// test function that creates an image

int main() {

	cv::namedWindow("Image");

	// read an image
	cv::Mat image = cv::imread("image.jpg");
	cv::imshow("Image", image); // show the image
	cv::waitKey(0); // wait for a key pressed

	return 0;
}

