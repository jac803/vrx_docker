#!/bin/bash
set -e

# Setup ROS environment
source /opt/ros/noetic/setup.bash
source $WORK/jacob_vrx/devel/setup.bash

roslaunch vrx_gazebo vrx.launch
