/*
 *  Input data from a file into an array and reverse it
 *  
 *	Author:		Keyann Al-Kheder
 *	Date: 		Jan 8th, 2019
 *
 */

#include <stdio.h>
#include <stdlib.h>






int main(int argc, char const *argv[])
{
	/* code */

	if (argc != 2){
		printf("Error, too many or not enough arguments");
		exit(-1);	
	}
	else{
		

		//open File
		FILE* inputFile;
		inputFile = fopen(argv[1], "r");

		int size;
		fscanf(inputFile,"%i", &size);


		// load data from file
		int array[size];
		int i;

		while (i < size){
			fscanf(inputFile,"%i", &array[i]);
			i++;
		}

		fclose(inputFile);

		//print data loaded into the array
		i = 0;

		while (i <= size){
			printf("%i ", array[i]);
			i++;
		}



		// reverse data in array
		i = 0;
		int j = size;
		int temp;

		while (i <= j){
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}

		//print data in the array
		i = 0;
		printf("\n");
		while (i <= size){
			printf("%i ", array[i]);
			i++;
		}


		return 0;
	}
}



