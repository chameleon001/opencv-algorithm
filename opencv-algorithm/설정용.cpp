#include <opencv2\core\core.hpp>
#include <opencv2\highgui.hpp>

using namespace cv;
int main()
{
    Mat img = imread("image.jpg", IMREAD_COLOR); // 본래의 색으로 출력한다 

    imshow("OpenCV", img);  // 실행 프로그램의 이름

    waitKey(0); // 키 입력을 기다림

    return 0;
}
