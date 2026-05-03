NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

PRINTF_DIR	= ft_printf
PRINTF		= $(PRINTF_DIR)/ft_printf.a

INCLUDES	= -I. -I$(PRINTF_DIR)/include

SRCS		= 	main.c				\
				func_push.c			\
				func_revrotate.c	\
				func_rotate.c		\
				func_swap.c			\
				operations.c		\
				utils.c				\
				ft_split.c 			\
				error.c 			\
				algorithm.c 		\
				push_swap.c 		\
				prep_a_to_b.c 		\
				prep_b_to_a.c 		\
				sort_three.c 		\

OBJS_DIR	= obj
OBJS		= $(SRCS:%.c=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: %.c include/push_swap.h | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(PRINTF_DIR) clean
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(MAKE) -C $(PRINTF_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re