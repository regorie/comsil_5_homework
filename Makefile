cc = gcc
target = main
objects = main.o count_digit.o one.o others.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : main.c
	$(cc) -c -o main.o main.c

count_digit.o : count_digit.c
	$(cc) -c -o count_digit.o count_digit.c

one.o : one.c
	$(cc) -c -o one.o one.c

others.o : others.c
	$(cc) -c -o others.o others.c

$(objects) : Header.h

.PHONY : clean
clean :
	rm $(target) $(objects)
