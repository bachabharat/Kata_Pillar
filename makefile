final: main.o ADD_ROMAN.o SUB_ROMAN.o Is_Valid_Roman.o romanstring_to_int.o roman_to_int.o int_to_romanstring.o pre_dgt_evaluate.o pst_dgt_evaluate.o
	gcc main.o ADD_ROMAN.o SUB_ROMAN.o Is_Valid_Roman.o romanstring_to_int.o roman_to_int.o int_to_romanstring.o pre_dgt_evaluate.o pst_dgt_evaluate.o -o final

roman_to_int.o: roman_to_int.c roman_to_int.h
	gcc -c roman_to_int.c -o roman_to_int.o

pre_dgt_evaluate.o: pre_dgt_evaluate.c pre_dgt_evaluate.h
	gcc -c pre_dgt_evaluate.c -o pre_dgt_evaluate.o

pst_dgt_evaluate.o: pst_dgt_evaluate.c pst_dgt_evaluate.h
	gcc -c pst_dgt_evaluate.c -o  pst_dgt_evaluate.o

int_to_romanstring.o: int_to_romanstring.c int_to_romanstring.h pre_dgt_evaluate.h pst_dgt_evaluate.h
	gcc -c int_to_romanstring.c -o  int_to_romanstring.o

romanstring_to_int.o: romanstring_to_int.c romanstring_to_int.h roman_to_int.h
	gcc -c romanstring_to_int.c -o  romanstring_to_int.o

Is_Valid_Roman.o: Is_Valid_Roman.c Is_Valid_Roman.h
	gcc -c Is_Valid_Roman.c -o Is_Valid_Roman.o

ADD_ROMAN.o: ADD_ROMAN.c Is_Valid_Roman.h int_to_romanstring.h romanstring_to_int.h
	gcc -c ADD_ROMAN.c -o ADD_ROMAN.o

SUB_ROMAN.o: SUB_ROMAN.c Is_Valid_Roman.h int_to_romanstring.h romanstring_to_int.h
	gcc -c SUB_ROMAN.c -o SUB_ROMAN.o

main.o: main.c ADD_ROMAN.h SUB_ROMAN.h
	gcc -c main.c -o  main.o 

clean: 
	rm main.o ADD_ROMAN.o SUB_ROMAN.o Is_Valid_Roman.o romanstring_to_int.o roman_to_int.o int_to_romanstring.o pre_dgt_evaluate.o pst_dgt_evaluate.o
