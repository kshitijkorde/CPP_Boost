CXX=g++
BOOST_HEADER_PATH=/home/kshi/Boost/boost_1_65_0
BOOST_LIBRARY_PATH=/home/kshi/Boost/boost_1_65_0/stage/lib/
BOOST_LIBRARIES=-lboost_system -lboost_filesystem
LIBS= -I $(BOOST_HEADER_PATH)
LIBS+= -L $(BOOST_LIBRARY_PATH) $(BOOST_LIBRARIES)

binPath: Path.cpp
	$(CXX) -o binPath Path.cpp $(LIBS) 
clean:
	rm binPath

#export LD_LIBRARY_PATH=/home/kshi/Boost/boost_1_65_0/stage/lib/
