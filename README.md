# ROS-AVR-Seminar-1
The node that subscribe and publish at the same time

catkin_ws$ catkin_make

Execution
terminal1 $ roscore

terminal2 $ rosrun pubsub pubsub


Check

publish any integer input data to the excuted node

terminal3 $ rostopic pub /sub pubsub/MsgTutorial "input: 5"

subscribe to the topic from the excuted node

terminal4 $ rostopic echo /pub
