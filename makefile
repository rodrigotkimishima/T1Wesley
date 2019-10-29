o = graphColoring.o\
graph.o\
vertice.o

cc = -Wall -g

regalloc:	$(o)
	g++ $(o) testinput.cc $(cc) -o regalloc

graph.o:	graph.h	graph.cc vertice.h
	g++ $(cc) -c graph.cc

vertice.o:	vertice.cc vertice.h
	g++ $(cc) -c vertice.cc

graphColoring.o:	graphColoring.cc graphColoring.h graph.h
	g++ $(cc) -c graphColoring.cc
clean:		
	rm	-rf	*.o