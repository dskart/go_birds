#ifndef ROS_TOPICS_HPP
#define ROS_TOPICS_HPP

#include "ros_subscriber_callbacks.hpp"

#include <ros.h>
#include <captivity/GameState.h>
#include <std_msgs/Int32.h>

enum PublisherTopics {
};

class RosTopics {
 public:
  RosTopics() : game_state_sub("game_state", &GameStateCB){}


  ros::Subscriber<captivity::GameState> game_state_sub;

  ros::Publisher* GetTopicPublisher(const PublisherTopics& topic);

 private:
  // DEFINE YOUR MESSAGES HERE
};

#endif  // ROS_TOPICS_HPP