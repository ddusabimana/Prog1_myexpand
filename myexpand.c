/*
  CS 350 Program : 1
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char ** argv) // char ** 
{
  unsigned int nX, nCols,col; // declaring any viriable num
    unsigned int chrX;
    nCols = 8;// initiazing viriable
    col=0;
    chrX = 0;
    if(argc==3)// checking if you get 3 argument from command line
    nCols = atoi(argv[2]);//atoi convert a string to a numbe;  get number from command line
    else if((argc!=3)&&(argc!=1)){
      fprintf(stderr,"Command error.\n");
      return 0;
    }
    chrX = ' '; // initializing to space.
    while(chrX != EOF) { // go through the file until the end of file
      chrX = getchar();// read charactor from keyboard(standard input)
      if(chrX == '\t') {// if the charx is equal to tab
	for(;;){// then add spaces
	  col++;//
	  putchar(' '); // add a space	 
	  if(col%nCols == 0)// How many space have I added, if 
	    break;
	}
      }
      else if(chrX == '\n'){
	col = 0;
	putchar(chrX);
      } 
      else { // not tab, just reproduce as original
            putchar(chrX);
	    col++;
      }
   }
}
/* - E N D - */

