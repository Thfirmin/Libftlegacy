# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 20:52:29 by thfirmin          #+#    #+#              #
#    Updated: 2023/04/02 07:44:35 by thfirmin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAMES 

NAME	= $(MASTERLIB)

PROJ	= ftprintf
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    CONFIG

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    SOURCES 

SRCS	= ft_printf.c \
		  ft_puthex_fd.c \
		  ft_putunbr_fd.c

OBJS	= $(SRCS:.c=.o)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     CODES 

NULL			= \e[m
RED				= \e[38;5;9m
YELLOW			= \e[38;5;11m
GREEN			= \e[38;5;2m
BLUE			= \e[38;5;6m
PURPLE			= \e[38;5;5m
PINK			= \e[38;5;13m
WHITE			= \e[38;5;15m

BOLD			= \e[1m
SHADOW			= \e[2m
ITALIC			= \e[3m
UNDLINE			= \e[4m
UPPLINE			= \e[53m
DUNDLINE		= \e[21m
CENSORED		= \e[9m
UPALIGN			= \e[73m
DWALIGN			= \e[74m
FULLER			= \e[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES

.c.o:
	$(CC) $(CFLAGS) $(DFLAGS) $(OFLAGS) $(IFLAGS) -c $< $(LFLAGS) -o $(<:.c=.o)

all:	$(NAME)

re:		fclean all
.PHONY: all clean fclean re
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                   MANDATORY

$(NAME):	$(OBJS)
	@echo "[${YELLOW}${BOLD}INFO${NULL}] ${UNDLINE}Compiling${NULL} ${PROJ} library" $(REDIR)
	ar -rcs $(MASTERLIB) $(OBJS)
	ranlib $(MASTERLIB)
	@echo "[${GREEN}${BOLD}INFO${NULL}] ${BOLD}Compiled ${PROJ} library${NULL}" $(REDIR)

mclean:
ifneq (,$(shell ls $(OBJS) 2> /dev/null))
	@echo "[${YELLOW}${BOLD}INFO${NULL}] ${UNDLINE}Deleting${NULL} ${PROJ} objects" $(REDIR)
	rm -rf $(shell ls $(OBJS) 2> /dev/null)
	@echo "[${BLUE}${BOLD}INFO${NULL}] ${BOLD}Deleted ${PROJ} objects${NULL}" $(REDIR)
endif
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     BONUS

bonus:	all

bclean: mclean

bre:	fclean bonus
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     CLEAN 

clean:	mclean bclean

fclean:	clean
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
