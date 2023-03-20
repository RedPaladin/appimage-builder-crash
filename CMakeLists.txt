cmake_minimum_required(VERSION 3.0)
project(system_test)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 11)

# Add the executable target
add_executable(system_test main.cpp)

# Define the installation directory
set(CMAKE_INSTALL_PREFIX /usr/local)

# Install the executable to the bin directory
install(TARGETS system_test DESTINATION bin)