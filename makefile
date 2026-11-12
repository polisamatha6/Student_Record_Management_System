flag = -c
compiler = cc

exe: stud_main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_sort.o stud_reverse.o stud_delete_all.o
        cc stud_main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_sort.o stud_reverse.o stud_delete_all.o -o student

stud_main.o: stud_main.c
        $(compiler) $(flag) $^ -o $@

stud_add.o: stud_add.c
        $(compiler) $(flag) $^ -o $@

stud_del.o: stud_del.c
        $(compiler) $(flag) $^ -o $@

stud_show.o: stud_show.c
        $(compiler) $(flag) $^ -o $@

stud_mod.o: stud_mod.c
        $(compiler) $(flag) $^ -o $@

stud_save.o: stud_save.c
        $(compiler) $(flag) $^ -o $@

stud_sort.o: stud_sort.c
        $(compiler) $(flag) $^ -o $@

stud_reverse.o: stud_reverse.c
        $(compiler) $(flag) $^ -o $@

stud_delete_all.o: stud_delete_all.c
        $(compiler) $(flag) $^ -o $@

clear:
        @echo "Cleaning up..."
        @rm -f *.o student
