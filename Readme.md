# wxWidgets Starter Project
A basic project for building wxWidgets apps. 

**Note: This project uses [CMake](https://cmake.org/), which must be installed and be on your Path for this setup to work.**

## Setup
1. Clone this repo.
2. Make a `build` directory in the main directory
`$ mkdir build`
3. Move into the `build` directory and run CMake:
`$ cmake ..`
4. Once CMake has finished running (assuming there were no errors), a Makefile should have been generated. Run it:
`$ make`
5. Once the build has succeeded, there should be an executable named `WxStarter` in the `build` folder. Run it and you should see a basic wxWidgets window!
`./WxStarter`

### Building for Xcode (Mac)
1. Make a folder called `xcode_build`.
`$ mkdir xcode_build`
2. Move into the folder
`$ cd xcode_build`
3. Run CMake with the Xcode generator:
`$ cmake -G Xcode ..`
4. Open the `.xcodeproj` file in Xcode.