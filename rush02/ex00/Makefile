CC =		gcc
NAME =		rush-02
SRCS_NAME =	ft_read_to_line.c \
			ft_split.c \
			ft_puterror.c \
			ft_make_tab_struct1.c \
			ft_make_tab_struct2.c \
			main.c \
			ft_check_param.c \
			ft_transform1.c \
			ft_transform2.c \
			ft_transform3.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_putstr.c \
			ft_free.c \
			ft_putchar.c \
			ft_only_zero.c
SRCS =		$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
SRCS_PATH =	srcs
INC_NAME =	ft.h \
			struct.h
INC =		$(addprefix $(INC_PATH)/, $(INC_NAME))
INC_PATH =	includes
RM =		rm -rf
OBJ =		$(SRCS:.c=.o)
CFLAG =		-Wall -Wextra -Werror
INCFLAGS =	-I$(INC_PATH)

all :		 $(NAME)

%.o : %.c
			$(CC) $(CFLAG) $(INCFLAGS) -c $< -o $@

$(NAME) : 	$(OBJ) $(INC)
			$(CC) -o $@ $(OBJ)

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re : 		fclean all

.PHONY : 	all clean fclean re
