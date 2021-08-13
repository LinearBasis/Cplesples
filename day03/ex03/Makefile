NAME = fragtrap

MAIN = main.cpp

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_DIRS = .

HDRS_DIRS = .

OBJS_DIR = ./objs

SRCS = $(wildcard $(addsuffix /*.cpp, $(SRCS_DIRS)))

HDRS = $(wildcard $(addsuffix /*.hpp, $(HDRS_DIRS)))

OBJS = $(addprefix objs/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

VPATH = $(SRCS_DIRS)

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS) $(MAIN)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
