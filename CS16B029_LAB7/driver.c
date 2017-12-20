// This Program contains main program which uses the Structure declared rb_tree.h and Functions Defined in rb_tree.c to create Red Black Trees and nodes in it .
// In this program we perform dictionary operations such as Insertions , Deletions and Searh Operations in Red Black Tree .
// We measure the time take for Insertion and Deletion for different number of operations and plot it .
// We need to prove Time Complexity is Log(N) for random operations .

#include "rb_tree.h"								// To include the header partial_tree.h

#define MaxSize 100000								// To limit the maximum value of random number generated .

int main()											// main() where the exexution of the program starts .
{
	
	tree *RB_Tree;								// Declaring a RB_Tree of data type struct Tree to store the root and Nil of tree .					
	RB_Tree = Intialise();
	RB_Insert( RB_Tree ,500);
	RB_Insert( RB_Tree ,240);
	RB_Insert( RB_Tree ,600);
	RB_Insert( RB_Tree ,550);
	RB_Delete( RB_Tree , 500 );
	LevelOrder(RB_Tree);
	/*clock_t start , end ;							// Variabes used to measure time for each insertions and deletions .					
	
	srand( time( NULL ) ) ;							// Used to generate random numbers					
	
	double time ;									// time is used measure time for each 2^i operations .								
	
	int operations ;								// operarations variables used to count number of insertions , deletions and search .
	int  i = pow( 2 , 10 ) ;						// i looping variable for Least no of Operations.
	int j = pow( 2 ,22 );							// j looping variable for Highest no of Operations.
	int coin , element ;							// Tossing Coin to select insertion or deletion ; Element generated by rand() for insertion or deletion .


	FILE *out ;										// Creating a File pointer					
	out = fopen( "graph.txt" , "w" );				// Opening the file "graph.txt" in write mode.	
	
	for(  ; i <= j ; i*=2 )							// Iterating for different number of total operations.  
	{
		time = 0 ; operations = 0;   				// Intialising time , no of operations as zero for each value of i .
		
		tree *RB_Tree;								// Declaring a RB_Tree of data type struct Tree to store the root and Nil of tree .					
		RB_Tree = Intialise();						// Intialising the RB_Tree ny allocating space by malloc . 

		start 	= clock() ;							// Start time for  operation .	

		while( operations <= i )					// Iteraring for number of operations less than i .
		{
		
			coin = rand()%10 ;						// Tossing Coin to select Insertion , Deletion or Search operation . 	
			element = rand()%MaxSize + 1 ;			// Genearting a random number for a each operation .
			
			if( coin < 5  )							// If coin turns out to be less than 5 then insertion opeartion takes palce. 50% Insertion 
			{
				RB_Insert( RB_Tree ,element );		// Calling RB_Insert() to insert an element into RB_Tree .
				operations++;						// Incrementing the number of operations ;
			}
			
			else if ( coin == 5 || coin == 6 )		// If coin turns out to be 5 or 6 then Search operation takes place . 20 % Searching .
			{										
				node *temp = Search( RB_Tree , element );	// Searching whether the random number is present in RB_Tree .
		 		operations++;								// Incrementing the number of operations ;
			}
			else if( coin > 6  )					// If coin turns out be greater than 6 the Delete Operation takes place . 30% Deletion .
			{
				RB_Delete( RB_Tree , element );				// Calling RB_Insert() to insert an element into RB_Tree .	
				operations++;								// Incrementing the number of operations ;
			}

		}
		end 	= clock() ;									// End time for deletion operation .
		time 	= (double) (end-start) ;					// Calculating time for each 2^i operation .
		time 	/= CLOCKS_PER_SEC ;							// Converting the time into seconds .		
														
	fprintf( out , "%d\t%.10f\n" , i  , time/i  ) ;			// Writing the outputs to file "graph.txt".
	printf( "%d\t%.10f\n" , i  , time/i) ;					// Printing the outputs .
	DestroyTree(RB_Tree);									// Calling DestroyTree to free the memory space alloted to tree .
	}
	
	fclose( out ) ;	*/										// Closing the File .
	
	return 0;
}