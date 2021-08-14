#include<stdio.h>
void main(void)
{
	
	float distance_difference_x = 0.1;
	float temperature_difference_y = 0.5;
	int row;
	int column;
	
	column = 1/distance_difference_x;
	row = 3 / temperature_difference_y;
	float matrix[10][10];



	int k = 0;
	
	for (int i = 0; i < column; i++) {
		for ( k = 0; k < row; k++) {
			if (i == 0) {
				matrix[k][0] = 100;
				
			}
			else if (i == column -1) {
				matrix[k][i] = 100;
				
			}
			else {
				matrix[k][i] = 0;
				
			}
			
		}
		
	}
	
	
	for ( k = 1; k < row; k++) {
		for (int i = 1; i < column; i++) {

				matrix[k][i] = (matrix[k - 1][i - 1] + matrix[k - 1][i + 1]) / 2;

		}
	
	}


	for (k = 0; k < row; k++) {
		for (int i = 0; i < column; i++) {

			printf("  %f", matrix[k][i]);

		}

		printf("\n");
	}


}


