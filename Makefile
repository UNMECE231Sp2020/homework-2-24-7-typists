FNS=complex.cpp
MAIN=main.cpp $(FNS)

all:
	g++ $(MAIN) -o run_complex
clean:
	rm run_complex
