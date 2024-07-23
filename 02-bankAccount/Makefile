.PHONY: debug all clean

CXX = c++
CXXFLAGS = -std=c++11
PROGRAM = facc
OBJS = bankAccount.o certificateOfDeposit.o checkingAccount.o highInterestChecking.o highInterestSavings.o hw06.o noServiceCharge.o savingsAccount.o serviceChargeChecking.o
HEADERS = bankAccount.h certificateOfDeposit.h checkingAccount.h highInterestChecking.h highInterestSavings.h hw06.h noServiceCharge.h savingsAccount.h serviceChargeChecking.h

# Debugging information
debug:
	@echo "OBJS: $(OBJS)"
	@echo "HEADERS: $(HEADERS)"
	@echo "Existing cpp files:"
	@ls -l *.cpp || echo "No .cpp files found"
	@echo "Existing header files:"
	@ls -l *.h || echo "No .h files found"

# Default make target
all: debug $(PROGRAM)

# Link the program
$(PROGRAM): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(PROGRAM)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f *.o
	rm -f $(PROGRAM)