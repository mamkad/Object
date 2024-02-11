Object:
	g++ -c Src/Object.cpp
	ar rvs Object.a Object.o
	del Object.o
	move Object.a Bin/
	copy Src\Object.hpp Bin\

ObjectTest:
	g++ -o Object Test/Main.cpp Bin/Object.a ../Guid/Bin/Guid.a ../../Algs/Hash/Md5/Bin/Md5.a
	move Object.exe Test/Bin/
	Test/Bin/Object.exe