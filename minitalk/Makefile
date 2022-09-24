SRV = server
CLN = client
GCC = gcc -Wall -Wextra
LIB =  -L./libft -lft
LIBFT = libft.a

all:  $(LIBFT) $(SRV) $(CLN)

$(LIBFT):
	$(MAKE) -C libft
$(CLN): client.o
	$(GCC) $(LIB) client.o -o $@
$(SRV): server.o
	$(GCC) $(LIB) server.o -o $@

%.o: %.c
	$(GCC) -c $< 
clean:
	rm -f client.o server.o
	$(MAKE) -C libft clean

fclean: clean 
	rm -f $(SRV) $(CLN)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re