#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    int clock_t;
    srand( time( 0 ) );
    int start=clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
	  system("cls");
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
      
   }
   int end=clock();
   
   	if(tortoise==70)
		cout<<"烏龜獲勝"<<endl;
	if(hare==70)
		cout<<"兔子獲勝"<<endl; 
		
	cout<<"比賽時間: "<<(end-start)/1000<<"秒"<<endl; 
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i=1;i<=7;i++)
	{
		cout<<"---------|";
	} 
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}

/*移動烏龜*/
void moveTortoise( int * const turtlePtr )
{
	int a=rand()%10;
	
	if(a>=0 and a<=4)
		*turtlePtr+=3;
	else if(a>=5 and a<=6)
		*turtlePtr-=6;
	else if(a>=7 and a<=9)
		*turtlePtr+=1;

	if(*turtlePtr<1)
		*turtlePtr=1;
	else if(*turtlePtr>70)
		*turtlePtr=70;
}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
	int a=rand()%10;
	
	if(a>=0 and a<=1)
		 *rabbitPtr+=0;
	else if(a>=2 and a<=3)
		*rabbitPtr+=9;
	else if(a==4)
		*rabbitPtr-=12;
	else if(a>=5 and a<=7)
		*rabbitPtr+=1;
	else if(a>=8 and a<=9)
		*rabbitPtr-=2;
		
	if(*rabbitPtr<1)
		*rabbitPtr=1;
	else if(*rabbitPtr>70)
		*rabbitPtr=70;
}
