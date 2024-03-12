# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 21:58:09 by gdornic           #+#    #+#              #
#    Updated: 2024/03/12 15:43:41 by gdornic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract_class

DEP = $(addprefix dep/, )

HEADERS = $(addprefix -I, $(DEP)) -Iinclude

LIB_LINK = $(addprefix -L, $(DEP))

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

define make_dep
	for d in $(DEP) ; do \
		make -C $$d $(1) ; \
	done
endef

all: $(NAME)

$(NAME): $(OBJ)
	$(call make_dep,all)
	$(CC) $(OBJ) $(HEADERS) $(LIB_LINK) -o $(NAME)

obj_tree:
	mkdir -p $(dir $(OBJ))

obj/%.o: src/%.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf obj
	$(call make_dep,clean)

fclean: clean
	rm -f $(NAME)
	$(call make_dep,fclean)

re: fclean all
