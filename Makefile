all: compile link clean

compile:
	g++ -I"include" -c main.cpp mainMenu.cpp sceneOne.cpp sceneTwo.cpp sceneThree.cpp sceneFour.cpp sceneFive.cpp sceneSix.cpp sceneSeven.cpp sceneEight.cpp sceneNine.cpp jack.cpp isabelle.cpp king.cpp monster.cpp villager.cpp

link:
	g++ main.o mainMenu.o sceneOne.o sceneTwo.o sceneThree.o sceneFour.o sceneFive.o sceneSix.o sceneSeven.o sceneEight.o sceneNine.o jack.o isabelle.o king.o monster.o villager.o -o Main -L"lib" -mwindows -lglut32 -lopengl32 -lglu32

clean:
	del main.o mainMenu.o sceneOne.o sceneTwo.o sceneThree.o sceneFour.o sceneFive.o sceneSix.o sceneSeven.o sceneEight.o sceneNine.o jack.o isabelle.o king.o monster.o villager.o