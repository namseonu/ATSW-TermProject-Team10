# Table of contents

1. [Introduction](#1-introduction)
   1. [Our project](#1-1-our-project)
   2. [Our repository](#1-2-our-repository)
2. [Open source we used](#2-open-source-we-used)
3. [How to run the open source](#3-how-to-run-the-open-source)
   1. [Build the environment](#3-1-build-the-environment)
   2. [RangeNet++](#3-2-rangenet)
   3. [SuMa++](#3-3-suma)
4. [Reference](#4-reference)

<br/>
<br/>

# 1. Introduction

## 1-1. Our project

- 2022-2 Advanced Topic in Software (AT-SW)
- Term Project & Active Learning
- Team 10

This project is an open source implementation project for term project of Gachon University's Advanced Topics in Software course. It is modified version of original open source to resolve some errors in implementation. We notice we don't use this project commercially. It is only used for university assignment/team project and is a repository for submission.

\* Term Project: A semester project

<br/>

## 1-2. Our repository

- The result of SuMa++ execution (including RangeNet++)
- We use KITTI odometry dataset (velodyne laser data, 80 GB, [more information](https://www.cvlibs.net/datasets/kitti/eval_odometry.php))

<u>This repository is a repository that has uploaded a directory after the build/run is complete. Therefore, refer to the original repository link for the build/run process below.</u>

<br/>

# 2. Open source we used

- SuMa++ (RangeNet++ and SuMa)
- Autonomouse driving - Semantic Segmentation
- Original open source link: [here](https://github.com/PRBonn/semantic_suma)
- Coressponding paper: [here](https://www.ipb.uni-bonn.de/wp-content/papercite-data/pdf/chen2019iros.pdf)

<br/>

# 3. How to run the open source

## 3-1. Build the environment

- Ubuntu 20.04.5 LTS
- NVIDIA Corporation TU102 [GeForce RTX 2080 Ti Rev. A] (rev a1)
- Cuda 11.5 (Multi Cuda version with 10 and 11)
- TensorRT 5.1.5.0
- cuDNN 8

The enviromental setting described below may not be applied to everyone. We wrote down vraious troubleshooting to be as helpful as possible. It is not the correct answer(or environment setting), but it is notified that the execution was successful with the following environment.

The overall way to build environment (or for dependencies) is based on README of original open source, and additional troubleshooting is written below.

If you want to know the some versions:

```python
# CUDA & cuDNN version in python
import torch
print("cuda version: {}".format(torch.version.cuda))
print("cudnn version: {}".format(torch.backends.cudnn.version()))
```

```bash
# NVIDIA version in bash
nvcc -V

# cuDNN version in bash
cat /usr/local/cuda/include/cudnn_version.h | grep CUDNN_MAJOR -A 2
```

```python
# TensorRT version in python
import tensorflow as tf
import tensorrt

print("tensorflow version: {}".format(tf.version.VERSION))
print("tensorRT version: {}".format(tensorrt.__version__))
```

```bash
# OPENGL_VERSION in bash
glxinfo | grep "version"
```

<br/>

### **Dependencies**

- catkin
- Qt5 >= 5.2.1
- OpenGL >= 4.0
- libEigen >= 3.2
- gtsam >= 4.0 (tested with [4.0.0-alpha2](https://github.com/borglab/gtsam/tree/4.0.0-alpha2))

<br/>

📌 **First,** Install all the above packages at once:

```bash
sudo apt-get install build-essential cmake libgtest-dev libeigen3-dev libboost-all-dev qtbase5-dev libglew-dev libqt5libqgtk2 catkin
```

If error with 'libqt5libqgtk2':

```bash
# Remove 'libqt5libqgtk2' from the above command (i.e., after installing all the above packages except libqt5libqgtk2 package).
# Then execute additional command below.
sudo apt-get install qt5-style-plugins
```

<br/>

📌 **Second,** install [catkin-tools](https://catkin-tools.readthedocs.io/en/latest/) and the [fetch](https://github.com/Photogrammetry-Robotics-Bonn/catkin_tools_fetch)

```bash
sudo apt install python-pip
sudo pip install catkin_tools catkin_tools_fetch empy
```

If error with package-catkin-pkg(Unable to handle package.xml format version '3', please update catkin_pkg):

```bash
# 1.
sudo apt-get update
sudo apt-get install --only-upgrade python-catkin-pkg

# 2. (if not resolved through the 1 way)
apt --fix-broken install
sudo apt-get update
sudo apt-get install python-catkin-pkg
```

<br/>

📌 **Third,** Install the NVIDIA Driver/CUDA and other dependencies:

- CUDA Installation guide: [Link](https://docs.nvidia.com/cuda/cuda-installation-guide-linux/index.html)
- Then you can do the other dependencies:

```bash
sudo apt-get update
sudo apt-get install -yqq  build-essential python3-dev python3-pip apt-utils git cmake libboost-all-dev libyaml-cpp-dev libopencv-dev
```

<br/>

📌 **Fourth,** Install the python packages needed:

```bash
sudo apt install python-empy
sudo pip install catkin_tools trollius numpy
```

If error with tensorflow.keras.models:

```bash
sudo pip install keras
```

<br/>

📌 **Fifth,** Install the TensorRT:

- Install TensorRT: [Link](https://developer.nvidia.com/tensorrt).
- <u>Be careful with TensorRT version! (should download 5.1.\*)</u>

After Unzip the TensorRT:

```bash
pip install --upgrade pip
```

Set PATH:

```bash
# For example
#     $ export LIBRARY_PATH="/home/seonnnu/TensorRT/TensorRT-5.1.5.0/lib"
#     $ export LD_LIBRARY_PATH="/home/seonnnu/TensorRT/TensorrT-5.1.5.0/lib"

export LIBRARY_PATH="{TensorRT_Directory_Path}/lib"
export LD_LIBRARY_PATH="{TensorRT_Directory_Path}/lib"
```

If error with TensorRT packages installation:

```bash
pip install nvidia-pyindex
pip install nvidia-tensorrt
```

<br/>

📌 **Sixth,** Install ROS:

- Ubuntu 16.04 -> ROS kinetic
- Ubuntu 18.04 -> ROS melodic
- Ubuntu 20.04 -> ROS noetic

```bash
# Ubuntu 18.04
# When we execute, the melodic -> noetic
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
apt --fix-broken install
sudo apt install curl # if you haven't already installed curl
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
sudo apt-get update && sudo apt-get upgrade -y
sudo apt install ros-melodic-desktop-full
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
sudo apt install python-rosdep
sudo rosdep init
rosdep update
```

## 3-2. RangeNet++

<br/>

📌 **Build the library:**  
We use the catkin tool to build the library.

```bash
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
git clone https://github.com/ros/catkin.git
git clone https://github.com/PRBonn/rangenet_lib.git
cd .. && catkin init
catkin build rangenet_lib
```

If error with TensorRT NOT FOUND:

```bash
# For example
#     $export TRT_LIB_DIR="/home/seonnnu/TensorRT/TensortRT-5.1.5.0/lib"

export TRT_LIB_DIR="{TensorRT_Directory_Path}/lib"
```

If error with library:

```bash
# Error
#     ... /usr/bin/ld: cannot find -l{Library_Name}
#     collect{n}: error: ld returned {n} exit status

# If you need the .so.{N} (e.g. .so.5), then write down .so.{N}
# For example
#     $ export LD_LIBRARY_PATH="/usr/lib/"
#     $ sudo ln -s /home/seonnnu/TensorRT/TensorRT-5.1.5.0/lib/libnvinfer.so /usr/lib/libnvinfer.so
#     $ sudo ln -s /home/seonnnu/cuDNN/cuda/lib64/libcudnn.so.7 /usr/lib/libcudnn.so.7

sudo ln -s {TensorRT_Directory_Path}/lib/lib{Library_Name}.so LD_LIBRARY_PATH/lib{Library_Name}.so

```

If error with cuDNN:

```bash
# For example (For me)
#     $ sudo cp /home/seonnnu/cuDNN/cuda/include/cudnn*.h /usr/local/cuda-11.5/include
#     $ sudo cp -P /home/seonnnu/cuDNN/cuda/lib64/libcudnn* /usr/local/cuda-11.5/lib64
#     $ sudo chmod a+r /usr/local/cuda-11.5/include/cudnn*.h /usr/local/cuda-11.5/lib64/libcudnn*

sudo cp {cuDNN_Directory_Path}/include/cudnn*.h /usr/local/{CUDA_DIRECTORY}/include
sudo cp -P {cuDNN_Directory_Path}/lib64/libcudnn* /usr/local/{CUDA_DIRECTORY}/lib64
sudo chmod a+r {cuDNN_Directory_Path}/include/cudnn*.h /usr/local/{CUDA_DIRECTORY}/lib64/libcudnn*
```

<br/>

📌 **Run the demo:**

- Need to download a pre-trained model: [here](https://www.ipb.uni-bonn.de/html/projects/semantic_suma/darknet53.tar.gz).
- Can use example dataset `example/000000.bin`

```bash
# go to the root path of the catkin workspace
cd ~/catkin_ws
# use --verbose or -v to get verbose mode
./devel/lib/rangenet_lib/infer -h # help
./devel/lib/rangenet_lib/infer -p /path/to/the/pretrained/model -s /path/to/the/scan.bin --verbose
```

<br/>

## 3-3. SuMa++

📌 **First,** Clone the repository in the `src` directory of the same catkin workspace where you built the rangenet_lib:

```bash
git clone https://github.com/PRBonn/semantic_suma.git
```

<br/>

📌 **Second,** Download the additional dependencies (or [glow](https://github.com/jbehley/glow.git) into your catkin workspace `src` yourself):

```bash
catkin deps fetch
```

If error with glow:

```bash
# Install gtsam
wget -O ~/Downloads/gtsam.zip https://github.com/borglab/gtsam/archive/4.0.0-alpha2.zip
cd ~/Downloads/ && unzip gtsam.zip -d ~/Downloads/
cd ~/Downloads/gtsam-4.0.0-alpha2/
mkdir build && cd build
cmake ..
sudo make install
```

<br/>

📌 **Third,** For the first setup of your workspace containing this project, you need:

```bash
# Unregardless the OPENGL_VERSION, we can execute this command.
catkin build --save-config -i --cmake-args -DCMAKE_BUILD_TYPE=Release -DOPENGL_VERSION=430 -DENABLE_NVIDIA_EXT=YES
```

If error with CMake:

```plain
Change line 9 in CMakeLists.txt to:
    find_package(Boost 1.65.1 REQUIRED COMPONENTS filesystem system serialization thread date_time regex timer chrono)
```

If error with shared libraries:

```bash
sudo apt-get install libparmetis-dev
```

<br/>

📌 **Fourth,** Execute the visualizer:

```bash
# For example
#     $ cd /catkin_ws/src/semantic_suma/bin
#     $ ./visualizer

cd {semantic_suma_Directory}/bin
./visualizer
```

If error with GLSL \*.\* is not supported:

```bash
# For example
#     If error with GLSL 3.3 is not supported:
#     $export MESA_GL_VERSION_OVERRIDE=3.3

export MESA_GL_VERSION_OVERRIDE={*.*}
```

<br/>

# 4. Reference

Some references below are the materials that were used to resolve/correct the error, and only the references that help us resolve/correct the error are written.

- [Open source: semantic_suma](https://github.com/PRBonn/semantic_suma)
- [Open source: rangenet_lib](https://github.com/PRBonn/rangenet_lib)
- [TensorRT Not Found Ubuntu 20.04](https://github.com/PRBonn/rangenet_lib/issues/36)
- [catkin 환경에서 작업공간 만들기](http://wiki.ros.org/ko/catkin/Tutorials/create_a_workspace)
- [Failed building catkin!](https://github.com/catkin/catkin_tools/issues/525)
- [fatal error: NvOnnxParser.h: No such file or directory](https://github.com/PRBonn/rangenet_lib/issues/14)
- [fatal error: NvInfer.h: No such file or directory](https://github.com/dusty-nv/jetson-inference/issues/281)
- [(Compiling Issue) Cannot find TensorRT](https://github.com/PRBonn/rangenet_lib/issues/13)
- [Catkin Workspace is not on the current folder](https://stackoverflow.com/questions/48055218/catkin-workspace-is-not-on-the-current-folder)
- [`catkin config` - Configure a Workspace](https://catkin-tools.readthedocs.io/en/latest/verbs/catkin_config.html)
- [Ubuntu install of ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu)
- [E: Unmet dependencies. Try 'apt --fix-broken install' with no packages (or specify a solution)...](https://unix.stackexchange.com/questions/537546/e-unmet-dependencies-try-apt-fix-broken-install-with-no-packages-or-speci)
- [LeGO-LOAM 패키지 설치](https://jdh1005a.tistory.com/22)
- [How to fix "fatal error: opencv2/core.hpp: No such file or directory"...](https://stackoverflow.com/questions/58478074/how-to-fix-fatal-error-opencv2-core-hpp-no-such-file-or-directory-for-opencv)
- [CMake Error when compiling...](https://github.com/PRBonn/semantic_suma/issues/12)
- [Error while loading shared libraries: \*.so](https://programmerah.com/error-while-loading-shared-libraries-libmetis-so-how-to-solve-46452/)
- [MultiCUDA: Multiple Versions of CUDA on One Machine](https://medium.com/@peterjussi/multicuda-multiple-versions-of-cuda-on-one-machine-4b6ccda6faae)
- [Error: GLSL 3.30 is not supported](https://stackoverflow.com/questions/52592309/0110-error-glsl-3-30-is-not-supported-ubuntu-18-04-c)
- [The error: 'std::runtime_error'](https://github.com/PRBonn/semantic_suma/issues/16)
