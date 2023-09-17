all:
	gcc -o perceptron src/perceptron.c

clean:
	rm perceptron

run:
	./perceptron