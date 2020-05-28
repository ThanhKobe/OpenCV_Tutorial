#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc , char** argv){
    string imageName ("/home/kobe/Documents/OpenCV_Tutorial/face_to_face.jpg");
    Mat image;
    //load image

    image = imread (samples::findFile( imageName ) , CV_LOAD_IMAGE_COLOR);

    if (!image.data){
        cout << "No image data "<< endl;
        return -1; 

    }

    Mat gray_image ;
    cvtColor (image, gray_image, COLOR_BGR2GRAY);
    imwrite ("/home/kobe/Documents/OpenCV_Tutorial/gray_image.jpg",gray_image);
    
    namedWindow( imageName, CV_WINDOW_AUTOSIZE );
    namedWindow( "Gray image", WINDOW_AUTOSIZE );

    imshow( imageName, image );
    imshow( "Gray image", gray_image );

    waitKey(0);
    return 0;
}