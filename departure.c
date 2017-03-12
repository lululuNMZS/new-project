#include<stdio.h>
#include<string.h>

struct track{
	char track_A_B;
	int train_number;
	char train_state[5];
};

struct train{
	int train_number;
	char *train_state;
	char *track_number;
	int order_num_back;
	int order_num_out;
};

int main()
{
	struct track track_A[12]={0};  //save the train_number and state
	struct track track_B[12]={0};
	int order_number_back[21]={0};
	int order_number_out[21]={1101,1102,1103};
	int train_number[21];

	int input_track_number;
	int input_train_number;
	char input_train_state[5];
	int num;
	while(1){
		printf("Please input the track_A number, train number, train state:");
		scanf("%d %d %s",&input_track_number,&input_train_number,input_train_state);
		getchar();
		if (input_track_number == 0)
			break;
		if (input_track_number<0 || input_track_number>15){
			printf("out of track_A side! Retry:");
			continue;
		}
	//	printf("Please input the train number:");
	//	scanf("%d",&input_train_number);
	//	printf("Please input the train state:");
	//	scanf("%s",input_train_state);
		track_A[input_track_number-1].train_number=input_train_number;
//		track_A[input_track_number-1].train_state=input_train_state;
		strcpy(track_A[input_track_number-1].train_state,input_train_state);
		printf("%d,%d,%s\n",input_track_number,track_A[input_track_number-1].train_number,track_A[input_track_number-1].train_state);
	}
	
	for (int i=0 ; i<12; i++)
		printf("%-4d  ",i+1);
	printf("\n");
	for (int i=0 ; i<12; i++)
		printf("%-4d  ",track_A[i].train_number);
	printf("\n");
	for (int i=0 ; i<12; i++)
		printf("%-4s  ",track_A[i].train_state);
	printf("\n");
/*
	int i;
	for (i=1 ; i<=15 ; i++)
		printf("%dA  ",i);
	
	printf("\n\n\n\n");
	for (i=1 ; i<15 ; i++)
		printf("%dB  ",i);
	printf("\n\n\n\n");
	
	for (i=0 ; i<21 ; i++)	
		printf("%d  ",order_number_back[i]);

	printf("\n\n\n");
	for (i=0 ; i<21 ; i++)
		printf("%d  ",order_number_out[i]);
	
	printf("\n\n");
*/
	return 0;

}
