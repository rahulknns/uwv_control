set(TASK_DEF_SRC_FILES tasks.cpp
					   sim_task_list.cpp
					   auv_3_0_testing_task_list.cpp)

add_executable(sim_sampletasks_exe  ${COMMON_SRC_FILES}
									${COMMON_VEC6_SIM_FILES}
									${TASK_DEF_SRC_FILES}
									sim_sampletasks_exe.cpp)

add_executable(auv_3_0_testing_tasks_exe  ${COMMON_SRC_FILES}
									${COMMON_VEC6_HARDWARE_FILES}
									${TASK_DEF_SRC_FILES}
									auv_3_0_testing_tasks_exe.cpp)
			

target_link_libraries(sim_sampletasks_exe ${catkin_LIBRARIES})
target_link_libraries(auv_3_0_testing_tasks_exe ${catkin_LIBRARIES})
