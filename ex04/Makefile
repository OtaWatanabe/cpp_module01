CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
CXX = c++
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = replace

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
