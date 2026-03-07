build:
	g++ calculator.cpp -o calculator

test:
	g++ test_calculator.cpp -o test
	./test