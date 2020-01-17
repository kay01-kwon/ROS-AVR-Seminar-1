#include "ros/ros.h"
#include "pubsub/MsgTutorial.h"

using namespace pubsub;
class Pubsub{
    
    public:
    void pub_setting();
    void sub_setting();
    void pub_fnc();
    void callback_fnc(const MsgTutorial& msg_reference);

    private:
    
    int input_;

    ros::NodeHandle nh;
    ros::Publisher publisher;
    ros::Subscriber subscriber;

};

void Pubsub::pub_setting(){
    publisher = nh.advertise<MsgTutorial>("/pub",1);
}

void Pubsub::sub_setting(){
    subscriber = nh.subscribe("/sub",1,&Pubsub::callback_fnc,this);
}

void Pubsub::callback_fnc(const MsgTutorial& msg_reference){
    input_ = msg_reference.input;
}

void Pubsub::pub_fnc(){
    MsgTutorial msg;

    msg.input = input_;
    publisher.publish(msg);
}