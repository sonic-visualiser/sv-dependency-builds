
rem Interposed by Chris Cannam

rem 32-bit build, run from MSVC 2019 x86 native tools command line

mkdir build

cd build

cmake .. -G "Visual Studio 16 2019" -DCMAKE_MSVC_RUNTIME_LIBRARY=MultiThreaded -DCMAKE_GENERATOR_PLATFORM=Win32

rem cmake --build build --config Release

cd ..
