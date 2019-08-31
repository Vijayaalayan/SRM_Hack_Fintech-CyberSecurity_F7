/*Examination of soil content and addition of nutrients automatically to water during irrigation time*/
#include<stdio.h>
#include<string.h>
void tomato();
void carrot();
void paddy();
void wheat();
void sugarcane();  
/*Here we select selected number of plants which we have examined it can be elobarated*/
void main()
{
	int choice_of_plant;
	printf("\tPlants you might grow\n");
	/*One can change the type of plant which they wish to grow*/
		/*for(int i=0;i<=endl;i++)
			printf("-");*/
	printf("1.Tomato\n");
	printf("2.Carrot\n");
	printf("3.Paddy\n");
	printf("4.Wheat\n");
	printf("5.Sugarcane\n");
	printf("Enter the choice of plant which u choose to grow\t");
	scanf("%d",&choice_of_plant);
	switch(choice_of_plant)
	{
		case 1:
			printf("You have chosen tomato plant...\n");
			/*printf("Confirm your selection...[Y/N]\n");
			char b;
			scanf("%s",&b);
			if(!strcmp(b,"y") || !strcmp(b,"yes"))*/
				tomato();
			break;
		case 2:
			printf("You have chosen carrot plant...\n");
			/*printf("Confirm your selection...[Y/N]\n");
			char c;
			scanf("%s",&c);
			if(!strcmp(b,"y") || !strcmp(b,"yes"))*/
				carrot();
			break;
		case 3:
			printf("You have chosen paddy plant...\n");
			/*printf("Confirm your selection...[Y/N]\n");
			char d;
			scanf("%s",&d);
			if(!strcmp(b,"y") || !strcmp(b,"yes"))*/
			paddy();
			break;
		case 4:
			printf("You have chosen wheat plant...\n");
			/*printf("Confirm your selection...[Y/N]\n");
			char e;
			scanf("%s",&e);
			if(!strcmp(b,"y") || !strcmp(b,"yes"))*/
			wheat();
			break;
		case 5:
			printf("You have chosen sugarcane plant...\n");
			/*printf("Confirm your selection...[Y/N]\n");
			char f;
			scanf("%s",&f);
			if(!strcmp(b,"y") || !strcmp(b,"yes"))*/
			sugarcane();
			break;
		default:
			printf("Enter the value between 1 and 5");
	}
}



void tomato()
{
	int nitrogen,phosphorous,potassium,choice_of_ratio;
	printf("The two ratios which will be apt for tomato are\n1.8:32:16\n2.6:24:24\n");
	/*int n,p,k;
	n=nitrogen;
	p=phosphorous;
	k=potassium;*/
	printf("Which ratio would you like to select?\n");
	scanf("%d",&choice_of_ratio);
	printf("Enter the amount of nitrogen present in the soil\n");
	scanf("%d",&nitrogen);
	printf("Enter the amount of phosophorous present in the soil\n");
	scanf("%d",&phosphorous);
	printf("Enter the amount of potassium present in the soil\n");
	scanf("%d",&potassium);
	printf("Nitrogen=%d\nPhosphorous=%d\nPotassium=%d\n",nitrogen,phosphorous,potassium);

	/*The choice may be taken accordingly based on the soil condition*/
	{
	switch(choice_of_ratio)
            {
		case 1:
			/*printf("The ratio is being converted to normal form...\n");
			for(p;p>=phosphorous;*/
			printf("Comparing...\n");
			if(nitrogen<8)
			{
			float n;
			float divide;
			n=8-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
			}
			else
			printf("Nitrogen content is perfect\n");
			
			if(phosphorous<32)
			{
			int p;
			p=32-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
			}
			else
			printf("Phosphorous content is perfect\n");
			
			if(potassium<16)
			{
			int k;
			k=16-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
			}
			else
			printf("Potassium content is perfect\n");
			break;
		
		case 2:
			printf("Comparing...\n");
			if(nitrogen<6)
			{
			int n;
			float divide;
			n=6-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
			}
			else
			printf("Nitrogen content is perfect\n");
			
			if(phosphorous<24)
			{
			int p;
			p=24-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
			}
			else
			printf("Phosphorous content is perfect\n");
			
			if(potassium<24)
			{
			int k;
			k=24-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
			}
			else
                        
			printf("Potassium content is perfect\n");
			break;
		default:
			printf("Enter value between 1 and 2");
		}
		}while(choice_of_ratio!=(1||2));
}
void carrot()
{
	int nitrogen,phosphorous,potassium,choice_of_ratio;
	printf("The ratio which will be apt for carrot is1:2:2\n");
	/*int n,p,k;
	n=nitrogen;
	p=phosphorous;
	k=potassium;*/
			/*printf("The ratio is being converted to normal form...\n");
			for(p;p>=phosphorous;*/
	printf("Enter the amount of nitrogen present in the soil\n");
	scanf("%d",&nitrogen);
	printf("Enter the amount of phosophorous present in the soil\n");
	scanf("%d",&phosphorous);
	printf("Enter the amount of potassium present in the soil\n");
	scanf("%d",&potassium);
	printf("Nitrogen=%d\nPhosphorous=%d\nPotassium=%d\n",nitrogen,phosphorous,potassium);
	
	printf("Comparing...\n");
	if(nitrogen<1)
		{
			float n;
			float divide;
			n=1-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
		}
	else
			printf("Nitrogen content is perfect\n");
	if(phosphorous<2)
		{
			int p;
			p=2-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
		}
	else
		printf("Phosphorous content is perfect\n");
	if(potassium<2)
		{
			int k;
			k=2-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
		}
	else
		printf("Potassium content is perfect\n");
}
void paddy()
{
	int nitrogen,phosphorous,potassium,choice_of_ratio;
	printf("The two ratios which will be apt for paddy are\n200:75:50\n2.150:50:50\n");
	/*int n,p,k;
	n=nitrogen;
	p=phosphorous;
	k=potassium;*/
	printf("Which ratio would you like to select?\n");
	scanf("%d",&choice_of_ratio);
	/*The choice may be taken accordingly based on the soil condition*/
	printf("Enter the amount of nitrogen present in the soil\n");
	scanf("%d",&nitrogen);
	printf("Enter the amount of phosophorous present in the soil\n");
	scanf("%d",&phosphorous);
	printf("Enter the amount of potassium present in the soil\n");
	scanf("%d",&potassium);
	printf("Nitrogen=%d\nPhosphorous=%d\nPotassium=%d\n",nitrogen,phosphorous,potassium);
	{
	switch(choice_of_ratio)
              {
		case 1:
			/*printf("The ratio is being converted to normal form...\n");
			for(p;p>=phosphorous;*/
			printf("Comparing...\n");
			if(nitrogen<200)
			{
			float n;
			float divide;
			n=200-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
			}
			else
			printf("Nitrogen content is perfect\n");
			if(phosphorous<75)
			{
			int p;
			p=75-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
			}
			else
			printf("Phosphorous content is perfect\n");
			if(potassium<50)
			{
			int k;
			k=50-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
			}
			else
			printf("Potassium content is perfect\n");
			break;
		case 2:
			printf("Comparing...\n");
			if(nitrogen<150)
			{
			float n;
			float divide;
			n=150-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
			}
			else
			printf("Nitrogen content is perfect\n");
			if(phosphorous<50)
			{
			int p;
			p=50-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
			}
			else
			printf("Phosphorous content is perfect\n");
			if(potassium<50)
			{
			int k;
			k=50-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
			}
			else
			printf("Potassium content is perfect\n");
			
                        break;
		default:
			printf("Enter value between 1 and 2");
		}		
		}while(choice_of_ratio!=(1||2));
}
void wheat()
{
	int nitrogen,phosphorous,potassium,choice_of_ratio;
	printf("The two ratios which will be apt for wheat are\n1.16:10:10\n2.40:25:25\n");
	/*int n,p,k;
	n=nitrogen;
	p=phosphorous;
	k=potassium;*/
	printf("Which ratio would you like to select?\n");
	scanf("%d",&choice_of_ratio);
	/*The choice may be taken accordingly based on the soil condition*/
	printf("Enter the amount of nitrogen present in the soil\n");
	scanf("%d",&nitrogen);
	printf("Enter the amount of phosophorous present in the soil\n");
	scanf("%d",&phosphorous);
	printf("Enter the amount of potassium present in the soil\n");
	scanf("%d",&potassium);
	printf("Nitrogen=%d\nPhosphorous=%d\nPotassium=%d\n",nitrogen,phosphorous,potassium);
	{
	switch(choice_of_ratio)
           {
		case 1:
			/*printf("The ratio is being converted to normal form...\n");
			for(p;p>=phosphorous;*/
			printf("Comparing...\n");
			if(nitrogen<16)
			{
			float n;
			float divide;
			n=16-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
			}
			else
			printf("Nitrogen content is perfect\n");
			if(phosphorous<10)
			{
			int p;
			p=10-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
			}
			else
			printf("Phosphorous content is perfect\n");
			if(potassium<10)
			{
			int k;
			k=10-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
			}
			else
			printf("Potassium content is perfect\n");
			
                        break;
		case 2:
			printf("Comparing...\n");
			if(nitrogen<40)
			{
			float n;
			float divide;
			n=40-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
			}
			else
			printf("Nitrogen content is perfect\n");
			if(phosphorous<25)
			{
			int p;
			p=25-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
			}
			else
			printf("Phosphorous content is perfect\n");
			if(potassium<25)
			{
			int k;
			k=25-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
			}
			else
			printf("Potassium content is perfect\n");
			
                        break;
		default:
			printf("Enter value between 1 and 2");
		}
		}while(choice_of_ratio!=(1||2));
}
void sugarcane()
{
	int nitrogen,phosphorous,potassium,choice_of_ratio;
	printf("The ratio which will be apt for sugarcane is 200:150:150\n");
	printf("Enter the amount of nitrogen present in the soil\n");
	scanf("%d",&nitrogen);
	printf("Enter the amount of phosophorous present in the soil\n");
	scanf("%d",&phosphorous);
	printf("Enter the amount of potassium present in the soil\n");
	scanf("%d",&potassium);
	printf("Nitrogen=%d\nPhosphorous=%d\nPotassium=%d\n",nitrogen,phosphorous,potassium);	
			/*printf("The ratio is being converted to normal form...\n");
			for(p;p>=phosphorous;*/
	printf("Comparing...\n");
	if(nitrogen<250)
		{
			float n;
			float divide;
			n=250-nitrogen;
			printf("Nitrogen must be given to the field 3 times to attain it's full growth\n");
			divide=(float)n/3;
			printf("The ratio of nitrogen to be given to the field each time is %f\n",divide);
		}
	else
		printf("Nitrogen content is perfect\n");
	if(phosphorous<150)
		{
			int p;
			p=32-phosphorous;
			printf("Phosphorous must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of phosphorous to be given to the field  is %d\n",p);
		}
	else
		printf("Phosphorous content is perfect\n");
	if(potassium<150)
		{
			int k;
			k=150-potassium;
			printf("Potassium must be given to the field 1 time to attain it's full growth\n");
			printf("The ratio of potassium to be given to the field  is %d\n",k);
		}
	else
		{ printf("Potassium content is perfect\n"); }
      }





