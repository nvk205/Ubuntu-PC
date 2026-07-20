//in chan le delay 1s
#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;
}

void printfChanLe(void){
    static int cnt = 0;
    cnt = 1 - cnt;
    if (cnt == 1)
    {
        printf("Le");
    }
    else{
        printf("Chan");
    }
}

int main(){
    
    while (1)
    {
        printfChanLe();
        delay(1);
    }
    

    return 0;
}