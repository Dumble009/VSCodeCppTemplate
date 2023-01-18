PATH=/bin:/usr/bin:/sbin:/usr/sbin:/usr/local/bin:/usr/local/sbin
export PATH
mkdir build
cd ./build; cmake ..
cd ../
cmake --build ./build --config Release --target all -j 8 --