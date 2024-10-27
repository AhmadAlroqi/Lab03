task1: task1.c 
	gcc -o task1_exe task1.c

run task1: task1_exe
	./task1_exe
	
task2: task2.c
	gcc -o task2_exe task2.c

task3: task3.c
	gcc -o task3_exe task3.c

run task2: task2_exe
	./task2_exe
	
run task3: task3_exe
	./task3_exe
	
task4: task4.c 
	gcc -o task4_exe task4.c

run task4: task4_exe
	./task4_exe

task5: task5.c 
	gcc -o task5_exe task5.c

run task5: task5_exe
	./task5_exe


