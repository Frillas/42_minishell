NAME = libftprintf.a

RM = @rm -f
CC = cc

DIR_LIBFT= libft

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_list1.c ft_list2.c
SRCLIB = ../ft_atoi.c ../ft_bzero.c ../ft_calloc.c ../ft_isalnum.c ../ft_isalpha.c ../ft_isascii.c ../ft_isdigit.c \
../ft_isprint.c ../ft_memchr.c ../ft_memcmp.c ../ft_memcpy.c ../ft_memmove.c ../ft_memset.c ../ft_strchr.c \
../ft_strdup.c ../ft_strlcat.c ../ft_strlcpy.c ../ft_strlen.c ../ft_strncmp.c ../ft_strnstr.c \
../ft_strrchr.c ../ft_tolower.c ../ft_toupper.c ../ft_substr.c ../ft_strjoin.c ../ft_strtrim.c \
../ft_split.c ../ft_itoa.c ../ft_strmapi.c ../ft_striteri.c ../ft_putchar_fd.c ../ft_putstr_fd.c \
../ft_putendl_fd.c ../ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)
OBJLIB = $(SRCLIB:.c=.o)

SRCS = $(SRC) $(SRCLIB)
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(addprefix ./,$(DIR_LIBFT))
	@mkdir obj
	cp $(OBJ) ./obj
	cp $(OBJLIB) ./obj
	@ar rcs $@ $(OBJS)
	@rm -rf ./obj	
	
clean :
	$(RM) $(OBJ)
	make clean -C $(addprefix ./,$(DIR_LIBFT))

fclean : clean
	$(RM) $(NAME) 
	$(RM) $(addprefix ./,$(DIR_LIBFT))/libft.a

re : fclean all

.PHONY: all clean fclean re 
