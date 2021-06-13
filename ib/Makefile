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

SRC	= 	$(wildcard *.c)

AUTHORS = RedGinor

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -O

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\n$(GREEN)[Compiling]$(WHITE) %s$(DEFAULT)" $@

all: $(NAME) clean

clean:
		@printf "\n$(RED)[cleaning...]$(WHITE)\n$(DEFAULT)"
		@rm -f $(OBJ)
		@printf "$(GREEN)done$(WHITE)\n$(DEFAULT)"

fclean: clean
		@rm -f ../$(NAME)

$(NAME): $(OBJ)
		@ar -rc $(NAME) $(OBJ)
		@mv $(NAME) ../
		@printf "\n\n$(CYAN)Done, don't forget to compile wtih $(GREEN)$(BOLD)$(UNDER)-lib$(WHITE)\n$(DEFAULT)"
		@make print_info

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
