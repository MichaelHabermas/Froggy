SRC := $(wildcard src/*.cpp)

app: $(SRC)
	g++ -w -o app -std=c++17 -lsfml-system -lsfml-graphics -lsfml-window $(SRC)

clean: ./app
	rm ./app

toolchain:
	which -s brew
	if [[ $? != 0 ]] ; then
		/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
	fi
	brew install sfml

fullRun:
	make clean && make app && ./app

