build:
	g++ calculator.cpp -o calculator

test:
	g++ -DTESTING test_calculator.cpp calculator.cpp -o test
	./test

clean:
	rm -f calculator test
