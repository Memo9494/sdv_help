ros2 pkg create --build-type ament_python py_srvcli --dependencies rclpy encoder
ros2 run encoder encoder_node 
ros2 topic echo encoder_position
sudo apt-get install python3-pip
pip3 install can
sudo apt-get install python3-can
pip3 install python-can
pip3 install python-can --upgrade

#Panel
ros2 topic pub --once /panel_control  std_msgs/msg/String data:\ 'dds'\ 
 ros2 topic pub --once /status_panel std_msgs/msg/String data:\ ''\  
ros2 run panel panel_module 
#Xbox Controller
#sudo xboxdrv --detach-kernel-driver
#ros2 run xbox_controller xbox_node 
ros2 topic pub --once /car_mode  std_msgs/msg/String data:\ 'Manual'\ 
cd /workspaces/isaac_ros-dev/src/xbox_controller/xbox_controller/launch
sudo xboxdrv --detach-kernel-driver
ros2 launch xbox_launch.py