.DEFAULT_GOAL = build

build: compile link clean

debug: debug-compile link clean

main.o:
	g++ src/main.cpp -c

debug-main.o:
	g++ src/main.cpp -c -g

SchoolYear.o:
	g++ src/SchoolYear.cpp -c

debug-SchoolYear.o:
	g++ src/SchoolYear.cpp -c -g

StudentClass.o:
	g++ src/StudentClass.cpp -c

debug-StudentClass.o:
	g++ src/StudentClass.cpp -c -g

Student.o:
	g++ src/Student.cpp -c

debug-Student.o:
	g++ src/Student.cpp -c -g

compile: main.o SchoolYear.o StudentClass.o Student.o

debug-compile: debug-main.o debug-SchoolYear.o debug-StudentClass.o debug-Student.o

link:
	g++ main.o SchoolYear.o StudentClass.o Student.o -o output/main

clean:
	rm *.o
