#include "ros_subscriber_callbacks.hpp"

#include "captivity.hpp"

void GameStateCB(const captivity::GameState& incoming_msg) {
  Captivity::current_state = incoming_msg.game_state;
  Captivity::player1_state = incoming_msg.player1;
  Captivity::player2_state = incoming_msg.player2;

  return;
}

void FrontDoorActorCB(const std_msgs::UInt8& incoming_msg){
  Captivity::front_door_actor_state = incoming_msg.data;
  return;
}
