CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES = rectest

COMMON_OBJECT_FILES = LinkedListFuncs.o recLinkedListFuncs.o strFuncs.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./rectest

rectest: rectest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o

