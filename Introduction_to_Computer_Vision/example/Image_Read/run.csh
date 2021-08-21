#! /bin/csh -f
cmake .
make
./Image_Read_main ./lena.jpg
