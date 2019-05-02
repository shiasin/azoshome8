all:
	mkdir output/q1;
	gcc -pthread q1/code.c -o output/q1/result;
	cp q1/readme.txt output/q1/readme.txt;
	cat output/q1/readme.txt
	mkdir output/q2;
	gcc -pthread q2/thread2.c -o output/q2/result;
	cp q2/readme.txt output/q2/readme.txt;
	cat output/q2/readme.txt
	mkdir output/q3;
	gcc -pthread q3/thread3.c -o output/q3/result;
	cp q3/readme.txt output/q3/readme.txt;
	cat output/q3/readme.txt
	mkdir output/q4;
	gcc -pthread q4/thread4.c -o output/q4/result;
	mkdir output/q5;
	gcc -pthread q5/thread5.c -o output/q5/result;
	mkdir output/q6;
	gcc -pthread q6/thread6.c -o output/q6/result;
	cp q6/readme.txt output/q6/readme.txt;
	cat output/q6/readme.txt
q1:
	mkdir output/q1;
	gcc -pthread q1/code.c -o output/q1/result;
	cp q1/readme.txt output/q1/readme.txt;
	cat output/q1/readme.txt

q2:
	mkdir output/q2;
	gcc -pthread q2/thread2.c -o output/q2/result;
	cp q2/readme.txt output/q2/readme.txt;
	cat output/q2/readme.txt


q3:
	mkdir output/q3;
	gcc -pthread q3/thread3.c -o output/q3/result;
	cp q3/readme.txt output/q3/readme.txt;
	cat output/q3/readme.txt

q4:
	mkdir output/q4;
	gcc -pthread q4/thread4.c -o output/q4/result;
q5:
	mkdir output/q5;
	gcc -pthread q5/thread5.c -o output/q5/result;

q6:
	mkdir output/q6;
	gcc -pthread q6/thread6.c -o output/q6/result;
	cp q6/readme.txt output/q6/readme.txt;
	cat output/q6/readme.txt

clean:
	rm -rf output/q1;
	rm -rf output/q2;
	rm -rf output/q3;
	rm -rf output/q4;
	rm -rf output/q5;
	rm -rf output/q6;


