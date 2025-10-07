# WastedDomination

Published in:

- Bulletin of the Malaysian Mathematical Sciences Society: Bulletin of the Malaysian Mathematical Sciences Society publishes original and expository survey articles spanning all branches of mathematics.
    + Presents original research articles and expository survey articles.
    + Coverage spans all branches of mathematics.
    + Published jointly with the Malaysian Mathematical Sciences Society and Penerbit Universiti Sains Malaysia.
- A General Lower Bound for the Domination Number of Cylindrical Graphs. José Juan Carreño. José Antonio Martínez. María Luz Puertas. DOI: https://doi.org/10.1007/s40840-019-00765-1

In this paper, we present a lower bound for the domination number of the Cartesian product of a path and a cycle that is tight if the length of the cycle is a multiple of five. This bound improves the natural lower bound obtained by using the domination number of the Cartesian product of two paths that is the best one known so far.

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

## How to compile PowerMatrix 

power_matrix.c : Source code to make the power

Compile with 

	$ gcc power_matrix.c -o power_matrix libcsparse.a -I{path to csparse lib include files} -lm

	Note : you need to install the csparse matrix library
       
	Download link https://people.sc.fsu.edu/~jburkardt/c_src/csparse/csparse.html

