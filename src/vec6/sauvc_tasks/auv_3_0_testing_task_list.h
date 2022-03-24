#ifndef AUV_3_0_TESTING_TASK_LIST_H
#define AUV_3_0_TESTING_TASK_LIST_H

#include <ros/ros.h>

#include "vec6_hardwarecontroller.h"
#include "vec6_config.h"
#include "tasks.h"


/**
 * @brief Abstract class defining and implementing methods and members common to tasks
 * that must be performed in actual environment
 */ 
class HardwareTasks : public Tasks{
    protected:

    /// @brief Pointer to the controller
    Vec6HardwareController *vec6_;

};

/**
 * @brief Class defining the procedure to accomplish SAUVC task 1
 */ 


/**
 * @brief Class defining a sample task.
 */ 
class Task1 : public HardwareTasks{
    public:
    /**
     * @brief Constructor
     * 
     * @param _controller Reference to the controller in use
     */ 
    Task1(Vec6HardwareController &_controller){
        vec6_ = &_controller;
    }

	/**
	 * @brief Task 1 execution algorithm
	 */ 
	void execute() override;
};

/**
 * @brief Class defining a sample task.
 */ 
class Task2 : public HardwareTasks{
    public:
    /**
     * @brief Constructor
     * 
     * @param _controller Reference to the controller in use
     */ 
    Task2(Vec6HardwareController &_controller){
        vec6_ = &_controller;
    }

	/**
	 * @brief Task 2 execution algorithm
	 */ 
	void execute() override;
};

/**
 * @brief Class defining a sample task.
 */ 
class Task3 : public HardwareTasks{
    public:
    /**
     * @brief Constructor
     * 
     * @param _controller Reference to the controller in use
     */ 
    Task3(Vec6HardwareController &_controller){
        vec6_ = &_controller;
    }

	/**
	 * @brief Task 3 execution algorithm
	 */ 
	void execute() override;
};


#endif