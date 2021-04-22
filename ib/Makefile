##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makesfiles
##

BOLD=$'\x1b[1m
UNDER=$'\x1b[4m
RED=$'\x1b[31m
PURPLE=$'\x1b[35m'
GREEN=$'\x1b[32m
YELLOW = \x1b[33;01m
WHITE = \x1b[00;00m
CYAN = \x1b[34;01m
DEFAULT=$'\e[39m\e[0m

NAME	=	libib.a

CC	=	gcc

SRC	= 	str/ib_strlen.c			\
		str/ib_strcmp.c			\
		str/ib_strdup.c			\
		str/ib_revstr.c			\
		num/ib_atoi.c			\
		num/ib_itoa.c			\
		arr/ib_rev_str_arr.c	\
		arr/ib_rev_int_arr.c	\
		arr/ib_str_size.c		\
		arr/ib_sort_int.c		\
		arr/ib_sort_str.c		\
		print/ib_putnbr.c		\
		print/ib_puterr.c		\
		print/ib_putstr.c

AUTHORS = RedGinor

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\n$(GREEN)[Compiling]$(WHITE) %s$(DEFAULT)" $@

all: $(NAME)

$(NAME): $(OBJ)
		@mkdir -p ../includes
		@scp ../includes/ib.h ../../includes
		@ar -rc $(NAME) $(OBJ)
		@scp $(NAME) ../
		@printf "\n\n$(CYAN)Done, don't forget to compile wtih $(GREEN)$(BOLD)$(UNDER)-lib$(WHITE)\n$(DEFAULT)"
		@make print_info

clean:
		@printf "\n$(RED)[cleaning...]$(WHITE)\n$(DEFAULT)"
		@rm -f $(OBJ)
		@printf "$(GREEN)done$(WHITE)\n$(DEFAULT)"

fclean: clean
		@rm -f $(NAME)
		@rm -f ../$(NAME)
		@rm -f ../../includes/ib.h
		@printf "$(GREEN)done$(WHITE)\n$(DEFAULT)"

print_info:
	@echo -e "\n"
	@echo -e "$(PURPLE) ▄▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄▄"
	@echo -e "$(PURPLE)█░░░░░░░░░░░░█ █░░░░░░░░░░░█"
	@echo -e "$(PURPLE) ▀▀▀▀█░░█▀▀▀▀  █░░░░█▀▀█░░░█"
	@echo -e "$(PURPLE)     █░░█      █░░░░█▄▄█░░░█"
	@echo -e "$(PURPLE)     █░░█      █░░░░░░░░░░░█"
	@echo -e "$(PURPLE)     █░░█      █░░█████████▄"
	@echo -e "$(PURPLE)     █░░█      █░░░░░░░░░░░░█"
	@echo -e "$(PURPLE)     █░░█      █░░░░█▀▀▀█░░░█"
	@echo -e "$(PURPLE) ▄▄▄▄█░░█▄▄▄▄  █░░░░█▄▄▄█░░░█"
	@echo -e "$(PURPLE)█░░░░░░░░░░░░█ █░░░░░░░░░░░░█"
	@echo -e "$(PURPLE) ▀▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀▀▀"
	@echo -e "$(BOLD)$(CYAN)C utils library made by $(AUTHORS)$(DEFAULT)\n\n"
