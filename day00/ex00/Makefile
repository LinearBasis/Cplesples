NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = megaphone.cpp

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

HDRS = 

VPATH = $(SRCS_DIRS)

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all