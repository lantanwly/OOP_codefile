#include<iostream>
// #include"stdint.h"
#include<bitset>
using namespace std;

enum  class LidarStatusType{
    running,
    warning,
    shutdown
} lidar_status;


//指定底层数据类型
enum class CameraStatusType:uint16_t{
    running,
    warning,
    shutdown
} ;

int main(){
    
    lidar_status=LidarStatusType::running;
    int lidar_num=static_cast<int>(lidar_status);//显式类型转换
    cout<<"lidar num is :"<<lidar_num<<endl;
    return 0;
}