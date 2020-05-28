#include<stdio.h>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(int argc, char** argv){
    String imageName("/home/kobe/Documents/OpenCV_Tutorial/face_to_face.jpg");
    if (argc >1){
        imageName = argv[1];

    }
    Mat image;
    image = imread(samples::findFile(imageName),IMREAD_COLOR);
    
    if(image.empty()){
        cout << " Could not open or find the image" << endl;
        return -1;
    }
    namedWindow ("Display window", WINDOW_AUTOSIZE);
    imshow("Display window", image);
    waitKey(0);
    return 0;

}