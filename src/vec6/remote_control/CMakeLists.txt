add_executable(sim_remote_control   ${COMMON_SRC_FILES}
									${COMMON_VEC6_SIM_FILES}
									sim_remote_control.cpp)

target_link_libraries(sim_remote_control ${catkin_LIBRARIES} ${CURSES_LIBRARIES})

add_executable(hardware_remote_control   ${COMMON_SRC_FILES}
									${COMMON_VEC6_HARDWARE_FILES}
									hardware_remote_control.cpp)
target_link_libraries(hardware_remote_control ${catkin_LIBRARIES} ${CURSES_LIBRARIES})