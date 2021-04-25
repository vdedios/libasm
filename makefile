# ENVS
NAME		=	libasm.a

OBJ_DIR		=	obj/

SRCS		=	ft_strlen.s \
				ft_strcpy.s \
				ft_strdup.s \
				ft_write.s \
				ft_strcmp.s 

OBJS		=	$(addprefix $(OBJ_DIR), $(SRCS:.s=.o))

# TARGETS
all:			 $(NAME)

$(OBJ_DIR):		
				mkdir -p obj

$(OBJ_DIR)%.o:	%.s
				nasm -fmacho64 $< -o $@


$(NAME):		$(OBJ_DIR) $(OBJS)
				ar rcs $(NAME) $(OBJS)

# RULES
.PHONY:			clean
clean:
				rm -rf $(OBJ_DIR)

.PHONY:			fclean
fclean:			clean
				rm -rf $(NAME) test

.PHONY:			re
re:				fclean $(NAME)

.PHONY:			test
test:			$(NAME)
				gcc -L. -lasm main.c -o $@
				./$@

.PHONY:			clean fclean re test bonus test_bonus