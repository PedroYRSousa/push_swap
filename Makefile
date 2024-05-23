NAME					=	push_swap

LIBFT_DIR				=	./libs/libft

INC_DIR					=	-I./includes -I./libs/libft/includes

CC						=	gcc

CFLAGS					=	-Wall -Wextra -Werror -g -fsanitize=address ${INC_DIR}

LFLAGS					=	-Wall -Wextra -Werror -g -fsanitize=address -L${LIBFT_DIR} -lft

SOURCES					=	\
							main.c \
							./src/utils/error.c \
							./src/utils/clear_matrix.c \
							./src/stack/pop_stack.c \
							./src/stack/show_stack.c \
							./src/stack/push_stack.c \
							./src/stack/size_stack.c \
							./src/stack/clear_stack.c \
							./src/stack/is_order_stack.c \
							./src/stack/node/create_node.c \
							./src/stack/node/destroy_node.c \
							./src/stack/node/get_big_node.c \
							./src/stack/node/get_last_node.c \
							./src/stack/node/contains_node.c \
							./src/stack/node/get_small_node.c \
							./src/stack/instance/get_stack_a_instance.c \
							./src/stack/instance/get_stack_b_instance.c \
							./src/functions/pa.c \
							./src/functions/pb.c \
							./src/functions/ra.c \
							./src/functions/rb.c \
							./src/functions/rr.c \
							./src/functions/rra.c \
							./src/functions/rrb.c \
							./src/functions/rrr.c \
							./src/functions/sa.c \
							./src/functions/sb.c \
							./src/functions/ss.c \
							./src/functions/generic/push.c \
							./src/functions/generic/swap.c \
							./src/functions/generic/rotate.c \
							./src/functions/generic/reverse_rotate.c \
							./src/sort/small_sort.c \
							./src/sort/three_sort.c \
							./src/sort/big_sort.c \
							./src/sort/comum/get_direction_comum.c \
							./src/sort/drafts/create_darfts.c \
							./src/sort/drafts/destroy_darfts.c \
							./src/sort/big_sort/find_first.c \
							./src/sort/big_sort/find_last.c \
							./src/sort/big_sort/get_best_way.c \
							
OBJS					=	$(SOURCES:.c=.o)

all: libft	$(NAME)

$(NAME):	${OBJS}
	$(CC) -o $(NAME) $(OBJS) $(LFLAGS)
	${mv ${OBJS} ${"./"}}

%.o:	%.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean: libft_clean
	rm -f $(OBJS)

fclean:	libft_fclean clean
	rm -f $(NAME)

re:	fclean	all

libft:
	make -C ${LIBFT_DIR}

libft_clean:
	make clean -C ${LIBFT_DIR}

libft_fclean:
	make fclean -C ${LIBFT_DIR}

test:
	./tester/tester.sh

.PHONY:	all	clean	fclean	re libft libft_clean libft_fclean