final:	display push pop createlib
	gcc -o main main.c "HeaderFiles/stacklib.a"
	./main

createlib: display push pop
	ar crv "HeaderFiles/stacklib.a" "HeaderFiles/display.o" "HeaderFiles/push.o" "HeaderFiles/pop.o"

display:
	gcc -c "HeaderFiles/display.c" -o "HeaderFiles/display.o"

push:
	gcc -c "HeaderFiles/push.c" -o "HeaderFiles/push.o"

pop:
	gcc -c "HeaderFiles/pop.c" -o "HeaderFiles/pop.o"



