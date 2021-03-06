#ifndef SIM_SAMPLETASKS_EXE_H
#define SIM_SAMPLETASKS_EXE_H

// ROS libraries
#include <ros/ros.h>

// Control library
#include "vec6_hardwarecontroller.h"

// Misc libraries
#include "auv_3_0_testing_task_list.h"
#include <csignal>

/// @brief Instance of the underwater vehicle (UWV)'s controller
Vec6HardwareController g_vec6;


/**
 * @brief Handles CTRL+C signal
 */ 
void signalHandler(int signum);

#endif
