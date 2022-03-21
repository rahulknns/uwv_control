#include "auv_3_0_testing_task_list.h"

void Task1::execute(){
	bool task_done = false;
	while(ros::ok() && !task_done){
		vec6_->doHeave(1.2, 0.01);

		// add a bit of delay for heave to stabilize
		vec6_->spinningDelay(8);

		vec6_->doYaw(45, 0.01);
		ros::spinOnce();

		task_done = true;
	}
	ROS_INFO_STREAM("Executed task 1!");
}

void Task2::execute(){
	bool task_done = false;
	while(ros::ok() && !task_done){
		vec6_->doSurge(20, 3);
		ros::spinOnce();

		task_done = true;
	}
	ROS_INFO_STREAM("Executed task 2!");
}

void Task3::execute(){
	bool task_done = false;
	while(ros::ok() && !task_done){
		vec6_->doSway(20, 3);
		ros::spinOnce();

		task_done = true;
	}
	ROS_INFO_STREAM("Executed task 3!");
}