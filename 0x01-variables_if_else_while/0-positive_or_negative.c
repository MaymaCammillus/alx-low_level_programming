#include<stdlib.h>                                                                                                                

#include<time.h>                                                                                                                  

/*more headers*/                                                                                                                  

#include<stdio.h>                                                                                                                 

/*betty style doc for function main*/                                                                                             

/**                                                                                                                               
 *
 * *main -to check the code                                                                                                          
 *
 * *                                                                                                                                 
 *
 * *Description:return the results of the function                                                                                   
 *
 * *                                                                                                                                 
 *
 * * Return: 0                                                                                                                       
 *
 * *                                                                                                                                 
 *
 * */                                                                                                                                

int main(void)                                                                                                                    

{                                                                                                                                 

	        int n;                                                                                                                    

		                                                                                                                                  

		        srand(time(0));                                                                                                           

			        n = rand()-RAND_MAX/2;                                                                                                    

				        if(n>0)                                                                                                                   

						        {                                                                                                                         

								                printf("%d is positive\n",n);                                                                                     

										        }                                                                                                                         

					        else if (n==0);                                                                                                           

						        return 0;                                                                                                                 

}
							                 
