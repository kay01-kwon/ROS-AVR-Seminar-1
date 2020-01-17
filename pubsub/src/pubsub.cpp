#include "pubsub/pubsub.hpp"

int main(int argc,char** argv)
{
    ros::init(argc,argv,"pub_sub");
    Pubsub pubsub;
    pubsub.pub_setting();

    ros::Rate loop_rate(100);

    while (ros::ok())
    {
        pubsub.pub_fnc();
        pubsub.sub_setting();
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}