# **************************************************************************** #
#                                                                              #
#                                                            ____    _____     #
#    Makefile                                               |___ \  |___ /     #
#                                                             __) |   |_ \     #
#    By: shobeedev <https://shobee.space/>                   / __/   ___) |    #
#                                                           |_____| |____/     #
#    Created: 2025/12/24 15:32:03 by shobeedev               shobee4ever       #
#    Updated: 2025/12/25 15:36:36 by shobeedev            tfaaty fi l3oolaa    #
#                                                                              #
# **************************************************************************** #

createlib: src/lib.o
	ar rcs libmylib.a src/lib.o

build: createlib
	g++ main.cpp -L. -lmylib -o myprogram
.PHONY : clean
clean:
	@if [ -e myprogram ] ;\
	then\
		rm -rf src/*.o;\
		rm -rf  *.o *.a;\
		rm myprogram;\
	fi;

