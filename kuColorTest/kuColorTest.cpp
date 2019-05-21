#include <opencv2/opencv.hpp>

void main()
{
	cv::Mat testImage = cv::Mat::zeros(480, 640, CV_8UC3);
	cv::Mat testImageHSV;

	testImage = cv::Scalar(66, 44, 166);

	cv::cvtColor(testImage, testImageHSV, CV_RGB2HSV);

	int rVal = testImageHSV.at<uchar>(240, 3 * 320);
	int gVal = testImageHSV.at<uchar>(240, 3 * 320 + 1);
	int bVal = testImageHSV.at<uchar>(240, 3 * 320 + 1);

	std::cout << rVal << ", " << gVal << ", " << bVal << std::endl;

	cv::imshow("Test", testImage);
	cv::imshow("TestHSV", testImageHSV);
	cv::waitKey(0);
}