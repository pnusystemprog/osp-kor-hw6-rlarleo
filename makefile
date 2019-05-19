CC = gcc
OBJECTFILES = phoneBookMain.o registerPhoneData.o printAll.o searchByName.o deleteByName.o
all = main
main : $(OBJECTFILES)
	$(CC) -o main $^
%.o : %.c
	$(CC) -c $^
