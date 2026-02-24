# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magolube <magolube@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 21:44:45 by maksymgolub       #+#    #+#              #
#    Updated: 2026/02/18 17:34:48 by magolube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c \
          ft_isalnum.c ft_isalpha.c ft_isascii.c \
          ft_isdigit.c ft_isprint.c ft_itoa.c \
          ft_memchr.c ft_memcmp.c ft_memcpy.c \
          ft_memmove.c ft_memset.c ft_putchar_fd.c \
          ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
          ft_split.c ft_strchr.c ft_strdup.c \
          ft_striteri.c ft_strjoin.c ft_strlcat.c \
          ft_strlcpy.c ft_strlen.c ft_strmapi.c \
          ft_strncmp.c ft_strnstr.c ft_strrchr.c \
          ft_strtrim.c ft_substr.c ft_tolower.c \
          ft_toupper.c

PRINTF_DIR = ft_printf/
PRINTF_SRCS = $(addprefix $(PRINTF_DIR), ft_printf.c ft_putchar.c ft_putstr.c \
              ft_putnbr.c ft_putunsigned.c ft_puthex.c ft_putptr.c)

BONUS   = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
          ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
          ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS    = $(SRCS:.c=.o) $(PRINTF_SRCS:.c=.o)
BONUS_O = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_O)
	$(AR) $(NAME) $(OBJS) $(BONUS_O)

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(PRINTF_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

# NAME    = libft.a
# CC      = cc
# CFLAGS  = -Wall -Wextra -Werror
# AR      = ar rcs
# RM      = rm -f

# SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c \
#           ft_isalnum.c ft_isalpha.c ft_isascii.c \
#           ft_isdigit.c ft_isprint.c ft_itoa.c \
#           ft_memchr.c ft_memcmp.c ft_memcpy.c \
#           ft_memmove.c ft_memset.c ft_putchar_fd.c \
#           ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
#           ft_split.c ft_strchr.c ft_strdup.c \
#           ft_striteri.c ft_strjoin.c ft_strlcat.c \
#           ft_strlcpy.c ft_strlen.c ft_strmapi.c \
#           ft_strncmp.c ft_strnstr.c ft_strrchr.c \
#           ft_strtrim.c ft_substr.c ft_tolower.c \
#           ft_toupper.c

# BONUS   = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
#           ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
#           ft_lstclear.c ft_lstiter.c ft_lstmap.c

# OBJS    = $(SRCS:.c=.o)
# BONUS_O = $(BONUS:.c=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(AR) $(NAME) $(OBJS)

# bonus: $(OBJS) $(BONUS_O)
# 	$(AR) $(NAME) $(BONUS_O)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	$(RM) $(OBJS) $(BONUS_O)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all bonus clean fclean re
