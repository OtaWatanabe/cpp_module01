CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
CXX = c++
SRCS = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = violence

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean re
