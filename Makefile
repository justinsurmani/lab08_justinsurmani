CXX = g++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= labTests

COMMON_OBJECT_FILES = tddFuncs.o strFuncs.o linkedListFuncs.o recLinkedListFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./labTests

labTests: labTests.o ${COMMON_OBJECT_FILES}
	${CXX} ${CXXFLAGS} $(LDFLAGS} $^ -o $@

clean: 
	/bin/rm -f ${BINARIES} *.o

