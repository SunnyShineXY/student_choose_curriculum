gcc -c -I ../include ./lib/cur_info_module.c -o ./lib/cur_info_module.o
gcc -c -I ../include ./lib/cur_perform_module.c -o ./lib/cur_perform_module.o
ar rsv ./lib/libcur_module.a ./lib/cur_info_module.o ./lib/cur_perform_module.o
