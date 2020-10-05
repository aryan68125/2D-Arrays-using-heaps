#include<stdio.h>
#include<stdlib.h>
int main()
{
// Method to create a 2D Array partially in stack and partially on heap

	//creating a pointer array 
	//it will be created inside the stack
	//here 3 inside the bracket of pointer array B is the size of the row
	int *B[3];

	//now creating the array inside the heap and using the pointer array that we created inside the stack
	//to now point towars our array that we created inside the heap
	//here 4 inside the bracket of malloc is the size of cloumns
	B[0]=(int*)malloc(4*sizeof(int));
	B[1]=(int*)malloc(4*sizeof(int));
	B[2]=(int*)malloc(4*sizeof(int));

     //now Assigning the values inside the 2D array partially in stack and partially on heap
    printf("Assign the values inside the 2D array partially in stack and partially on heap\n");
    for(int i=0;i<3;i++) //loop that changes row and 3 here is size of row
    {
    	for(int j=0;j<4;j++) //loop that changes coulmns and 4 here is the size of column
    	{
    		scanf("%d",&B[i][j]); //Entering the values inside the 2D Array partially in stack and partially on heap
    	}
    }
    //now Printing 2D Array partially in stack and partially on heap
    printf("Printing 2D Array partially in stack and partially on heap\n");
    for(int i=0;i<3;i++) //loop that changes row and 3 here is size of row
    {
    	for(int j=0;j<4;j++) //loop that changes coulmns and 4 here is the size of column
    	{
    		printf("%d\n",B[i][j]); //Entering the values inside the 2D Array partially in stack and partially on heap
    	}
    }



//Method to create 2D Array completely in heap

	int **C; //Double Pointer

	//creating the array of pointers in heap
	//its responsible for accessing the rows and 3 here is the size of the row
	C=(int**)malloc(3*sizeof(int*));
    
    //creating the Actual Arrays in heap and using pointers in pointer array to access these array values
    //4 is the size of column
    C[0]=(int*)malloc(4*sizeof(int));
    C[1]=(int*)malloc(4*sizeof(int));
    C[2]=(int*)malloc(4*sizeof(int));

     //now Assigning the values inside the 2D Array completely in heap
    printf("Assign the values inside the 2D Array completely in heap\n");
    for(int i=0;i<3;i++) //loop that changes row and 3 here is size of row
    {
    	for(int j=0;j<4;j++) //loop that changes coulmns and 4 here is the size of column
    	{
    		scanf("%d",&C[i][j]); //Entering the values inside the 2D Array completely in heap
    	}
    }
    //now Printing 2D 2D Array completely in heap
    printf("Printing 2D Array completely in heap\n");
    for(int i=0;i<3;i++) //loop that changes row and 3 here is size of row
    {
    	for(int j=0;j<4;j++) //loop that changes coulmns and 4 here is the size of column
    	{
    		printf("%d\n",C[i][j]); //Entering the values inside the 2D Array completely in heap
    	}
    }
}