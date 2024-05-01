CXX := c++
CXXFLAGS := -Wall -Wextra -std=c++98
SRC := megaphone.cpp
TARGET := megaphone

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)

fclean: clean

re: fclean all

.PHONY: clean fclean re
