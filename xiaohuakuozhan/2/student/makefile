./lib/libstu_module.a : ./lib/stu_info_module.o ./lib/stu_perform_module.o
	ar -rsv ./lib/libstu_module.a ./lib/stu_info_module.o ./lib/stu_perform_module.o

./lib/stu_info_module.o : ./lib/stu_info_module.c
	gcc -c -I ../include ./lib/stu_info_module.c -o ./lib/stu_info_module.o
./lib/stu_perform_module.o : ./lib/stu_perform_module.c
	gcc -c -I ../include ./lib/stu_perform_module.c  -o ./lib/stu_perform_module.o


