#include "ros/ros.h"
int main (int argc, char **argv)
{
    ros::init(argc,argv,"hello_world");
    ros::NodeHandle n;
    ROS_INFO("HELLO WORLD!");
    ros::spin();
    return 0;
}
