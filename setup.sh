# criando pastas para as libs

mkdir lib
mkdir include

unzip raylib-master.zip
cd ./raylib-master/src && make PLATFORM=PLATFORM_DESKTOP
mv raylib.h ../../include
cd ../ && mv libraylib.a ../lib