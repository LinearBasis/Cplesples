NAME = account

MAIN = tests.cpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_DIRS = .

OBJS_DIR = ./

SRCS = $(wildcard $(addsuffix /*.cpp, $(SRCS_DIRS)))

OBJS = $(addprefix $(OBJS_DIR), $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

VPATH = $(SRCS_DIRS)

$(OBJS_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS) $(MAIN)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
