#! usr/bin/bash

echo 'Updating files...'
echo ''
cd CPP_In_21_Days && git pull origin master && cd ..
cd OrderServer && git pull origin master && cd ..
cd Quandrax && git pull origin master && cd ..
cd Quandrax_1.1.0 && git pull origin master && cd ..
cd Quandrax_Cpp && git pull origin master && cd ..
echo ''
echo 'Update complete!'
