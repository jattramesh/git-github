#ifdef_MYMACROS_
#define _MYMACROS_
#include<iostream>
using namespace std;
#define ABS(a) ((a)>=0 ? (a): -(a))
#define MIN(a,b) ((a)<=(b)? (a) :(b))
#define MAX(a,b) ((a)>=(b)? (a) :(b))
//macro for screen co0ntrolling
#define CLS (cout<<"\033[2J")
//macrom locate  for finding podition in (row,cvolumn)
#define LOCATE(r,c) (cout<<"\033["<<(r)<<';'<<(c)<<'H')
//macro for color C
//call COLOR(foregroend,backgtround )
#define COLOR(f,b) (cout<<"\033[1;3"<<(f)<<";4"<<(b)<<'m'<<flush)
/*1: lighgt foreground
2: 3x:foreground x
3 : 4x background x
*/
/* color values for macro color
to call ex. COLOR(WHITE<BLUE)*/
#define BLACK 0
#define GREEN 2
#define RED 1
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE &
// macro for followwing output to be reverted
#define INVERSE (cout<<"\033[7m")
//for setiing all attribute to default values
#define NORMAL (cout<<"\033[0m")
//endinf of a mavcor
#endif
