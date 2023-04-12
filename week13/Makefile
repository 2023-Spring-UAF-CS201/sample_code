run: fly_away
	./fly_away

fly_away: fly_away.o HotAirBalloon.o
	g++ -std=c++17 -o fly_away fly_away.o HotAirBalloon.o


fly_away.o: fly_away.cpp HotAirBalloon.h
	g++ -std=c++17 -c fly_away.cpp


HotAirBalloon.o: HotAirBalloon.cpp HotAirBalloon.h
	g++ -std=c++17 -c HotAirBalloon.cpp


clean:
	rm -f *.o


cleanest: clean
	rm -f fly_away























get_ready: get_up eat_breakfast make_bed brush_teeth
	echo "Dad, I'm ready to go to school" > get_ready

make_bed: get_up
	echo "You made your bed" > make_bed

brush_teeth: eat_breakfast
	echo "You brushed your teeth" > brush_teeth

eat_breakfast: get_up
	echo "You ate breakfast" > eat_breakfast

get_up:
	echo "You got up" > get_up
