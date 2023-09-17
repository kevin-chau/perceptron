all: perceptron nand add

perceptron:
	mkdir -p build
	gcc -o build/perceptron src/perceptron.c

nand:
	mkdir -p build
	gcc -o build/nand src/perceptronNAND.c

add:
	mkdir -p build
	gcc -o build/add src/perceptronTwoBitAdd.c

sigmoid:
	mkdir -p build
	gcc -o build/sigmoid src/sigmoid.c

clean:
	rm -rf build/

run_perceptron:
	./build/perceptron

run_nand:
	./build/nand

run_add:
	./build/add

run: run_perceptron run_nand run_add