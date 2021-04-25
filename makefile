# ENVS
NAME		=	libasm.a

CFLAGS 		=	-Wall -Werror -Wextra

OBJ_DIR		=	obj/

SRCS		=	ft_strlen.s
OBJS		=	$(addprefix $(OBJ_DIR), $(SRCS:.s=.o))

# TARGETS
all:			 $(OBJ_DIR) $(NAME)

$(OBJ_DIR):		
				mkdir -p obj

$(OBJ_DIR)%.o:	%.s
				nasm -fmacho64 $< -o $@


$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

# RULES
.PHONY:			clean
clean:
				rm -rf $(OBJ_DIR)

.PHONY:			fclean
fclean:			clean
				rm -rf $(NAME) test

.PHONY:			re
re:				fclean all

.PHONY:			test
test:			$(NAME)
				gcc $(CFLAGS) -L. -lasm main.c -o $@
				./$@

.PHONY:			clean fclean re test bonus test_bonus