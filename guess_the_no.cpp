#include<iostream>
#include<cstdlib>//It provides a set of functions and macros to perform general-purpose tasks, such as dynamic memory allocation, random number generation, conversions between numbers and strings.
#include<conio.h>
#include<ctime> // It provides a set of functions for working with time, date etc.
using namespace std; 
int main(){
	/* If we want to get a different sequence of numbers for each execution, we need to go through a process
of randomizing. Randomizing is “seeding” the random number sequence, so we start in a different
place. The function that does this is srand() which takes an integer as the seed:
void srand(int seed); */

	srand((unsigned) time(NULL)); // we also can write srand(time(0)); for this. The time(NULL) function will return the computer’s time in second.
	int random = (rand()%100 +1);// 
	
/* The rand function generates a random number between 0 and RAND_MAX (a constant defined in cstdlib), and the expression rand() % 100 + 1 generates
	 a random number between 1 and 100 since we want number in between that range */
	
	int num; 
	cout<<"Guess a number(1-100): "; 
	cin>>num; 
	
	/* execution of loop until the number we guessed is not equal to random random. Once the condition become false 
	i.e the number becomes equal to random the loop ends and our guess will be right */
	while(num!= random){
		if(num>random){
			cout<<"Guess lower: ";
		}
		else{
		cout<<"Guess higher: "; 
			}
		
		    cin>>num; 
	}
	
	cout<<"Your guess was right. The number was "<<random<<endl; 
	return 0; 
}
