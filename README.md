# WastedDomination
## How to compile CorrectWordGenerator

 vari_rep_lex.c : Library to generate all words

 Compile with 

	$ gcc -c vari_rep_lex.c -o vari_rep_lex.o

 CorrectWordGenerator.c : Source code to generate all the correct words

 Compile with:

	$ gcc vari_rep_lex.o CorrectWordGenerator.c -o CorrectWordGenerator

## How to compile MatrixGenerator

MatrixGenerator.c : Source code to generate the matrix

Compile with
	
	$ gcc MatrixGenerator.c -o MatrixGenerator -lm

## How to compile PowerMatrix tropical matrix product

power_matrix.c : Source code to make the power

Compile with 

	$ gcc power_matrix.c -o power_matrix libcsparse.a -I{path to csparse lib include files} -lm

	Note : you need to install the csparse matrix library
       
	Download link https://people.sc.fsu.edu/~jburkardt/c_src/csparse/csparse.html

