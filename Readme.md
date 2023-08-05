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

### Building with Visual Studio (Windows)
**Note: This guide assumes you have a system environment variable called WXWIN which points at the wxWidgets root folder (the one which contains `include`, `lib`, `samples`, `src` etc. If this environment variable is named something different on your computer, adjust the following commands accordingly.**
1. Make sure you have installed **Desktop Development with C++** for Visual Studio with the Visual Studio Installer.
2. Double-click the `wxStarter.sln` file to open it in Visual Studio.
3. Right click on the wxStarter project in the Solution Explorer (*not* the solution but one level down from it) and select "Properties".
*The following settings should be already enabled, but if not, here's how to set them up:*  
4. Go to **C/C++** an select 'General'. Make sure the Additional Include Directories include `$(WXWIN)\include` and `$(WXWIN)\include\msvc`.
5. Go to **Linker** and select ''General'. Make sure that the SubSystem is set to `Windows (/SUBSYSTEM:WINDOWS)`.
6. Go to **Linker** -> 'General'.
    1. Select the 'Platform' dropdown at the top of the dialog and select 'Win32'. Add `$(WXWIN)\lib\vc_lib` to 'Additional Library Directories'.
    2. Select 'x64' from the 'Platform' dropdown, and add `$(WXWIN)\lib\vc_x64_lib` to 'Additional Library Directories.
7. Click 'Apply', then 'OK'.
8. In the main Visual Studio window, select 'Release' and 'x64', then click the 'Local Windows Debugger' icon. The window should appear on the screen!
