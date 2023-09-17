all: perceptron nand

perceptron:
	mkdir -p build
	gcc -o build/perceptron src/perceptron.c

nand:
	mkdir -p build
	gcc -o build/nand src/perceptronNAND.c

clean:
	rm -rf build/

run_perceptron:
	./build/perceptron

run_nand:
	./build/nand

run: run_perceptron run_nand