ALL:=test
OBJECT:=%.o
CC:=gcc
OPTION:=-g -Wall -lm
$(ALL):$(OBJECT)
	$(CC) $^ -o $@ $(OPTION)
%.o:%.c
	$(CC) -c $^ -o $@
clean:
	rm -rf $(ALL) $(OBJECT)
 
