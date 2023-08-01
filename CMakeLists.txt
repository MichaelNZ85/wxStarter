cmake_minimum_required(VERSION 3.12)
project(WxStarter)

# Set the C++ standard (optional but recommended)
set(CMAKE_CXX_STANDARD 11)

# Find the wxWidgets package
find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

# Add the source files of your app
set(SOURCES
    App.cpp
    MainWindow.cpp
    # Add other source files here
)

# Add the header files of your app
set(HEADERS
    App.h
    MainWindow.h
    # Add other header files here
)

# Define the target executable
add_executable(WxStarter ${SOURCES} ${HEADERS})

# Link the wxWidgets libraries to the target
target_link_libraries(WxStarter ${wxWidgets_LIBRARIES})

# Add the root directory of your app as a header directory
target_include_directories(WxStarter PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
