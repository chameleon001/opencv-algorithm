#include <opencv2\core\core.hpp>
#include <opencv2\highgui.hpp>

using namespace cv;
int main()
{
    Mat img = imread("image.jpg", IMREAD_COLOR); // ������ ������ ����Ѵ� 

    imshow("OpenCV", img);  // ���� ���α׷��� �̸�

    waitKey(0); // Ű �Է��� ��ٸ�

    return 0;
}
