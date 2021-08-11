game: main.o menu.o utils.o game.o shop.o player.o weapon.o shield.o
	g++ main.o menu.o utils.o game.o shop.o player.o weapon.o shield.o -o game

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

weapon.o: src/weapon.cpp src/include/weapon.h src/include/weapons.h
	g++ -Wall -c src/weapon.cpp

shield.o: src/shield.cpp src/include/shield.h src/include/shields.h
	g++ -Wall -c src/shield.cpp

clean:
	del *.o