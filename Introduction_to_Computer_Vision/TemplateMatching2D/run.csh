#! /bin/csh -f
./clean.csh
cmake .
make

./TemplateMatching2D_main
#./TemplateMatching2D_main -start_j 21 -start_i 33 -end_j 71 -end_i 83
