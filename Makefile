game: main.o menu.o utils.o game.o shop.o player.o weapons.o
	g++ main.o menu.o utils.o game.o shop.o player.o weapons.o -o game

main.o: src/main.cpp
	g++ -Wall -c src/main.cpp

menu.o: src/menu.cpp src/include/menu.h
	g++ -Wall -c src/menu.cpp

game.o: src/game.cpp src/include/game.h
	g++ -Wall -c src/game.cpp

utils.o: src/utils.cpp src/include/utils.h
	g++ -Wall -c src/utils.cpp

shop.o: src/shop.cpp src/include/shop.h
	g++ -Wall -c src/shop.cpp

player.o: src/player.cpp src/include/player.h
	g++ -Wall -c src/player.cpp

weapons.o: src/weapons.cpp src/include/weapon.h src/include/weapons.h
	g++ -Wall -c src/weapons.cpp

clean:
	del *.o