# '=' recursive expanded variable
# ':=' simply expanded variable
SRCS	=	srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strlen.c \
			srcs/ft_swap.c
HDRS	=	includes/
# Both ${VAR} and $(VAR) are valid references to a variable
# ${VAR:<pattern>=<new_patter>} is a substitution reference
OBJS	=	${SRCS:.c=.o}
# ${SRCS:.c=.o} means:
# take the variable value ${SRCS}, which is a string composed of words
# separated by spaces, and for each word, replace the suffix .c with .o 
NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -c
AR		=	ar r
RM		=	rm -f

# RULE SYNTAX:
# target:	prerequisites
# <TAB>		recipe
all:		${NAME}

# '%.o: %.c' means that any file ending in .o
# depends on the same filename ending in .c to be present
# '$<' when used in the "recipe" means "the first prerequisite"
%.o:		%.c
			${CC} ${CFLAGS} -I ${HDRS} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

# .PHONY will run the target's recipe regardless of whether a file with that
# name exists or what its last modification time is
.PHONY:		all clean fclean re
