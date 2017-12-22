#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
  Mat im = imread("image.jpg", CV_LOAD_IMAGE_COLOR);
  namedWindow("image");
  imshow("image", im);
  waitKey(0);
}
