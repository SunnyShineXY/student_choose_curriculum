main : main.o 
	gcc  main.o  -L ./student/lib -lstu_module -L ./curriculum/lib -lcur_module -L ./public/ -lpublic -o main
main.o : main.c
	gcc main.c -I ./include -c -o main.o
