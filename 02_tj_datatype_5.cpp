#include<iostream>
#include<string>
using namespace std;

//初始结构体
struct LidarDataType {
    int channel_num;
    double distance[128];
    double intensity[256];
};

//将类型定义为一个别名，真实名字是没有的
typedef struct
{
    int Camera_num;
    double C_distance[128];
    double C_intensity[256];

    /* data */
}CameraDataType;


int main(){

    struct LidarDataType Lidardata;
    CameraDataType Cameradata;
   
    return 0;
}