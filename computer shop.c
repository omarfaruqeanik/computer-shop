
#include<stdio.h>
#include<string.h>
#include<windows.h>
#define max 100

typedef struct {
    char name[max];
    char mail[max];
    char gender[max];
    char new_password[max];
    char user[max];
	char password[max];
}registration;
registration reg[1000];
int *count=0;
int confirm=1;
int option=1;
int sum=0;
int choose;

//prototype function//
void Member_Registration(registration reg[],int *count);
int User_Choose_Cpu();
int user_Choose_Cpu_cooler();
int user_choose_motherboard();
int user_choose_Ram();
int user_choose_ssd();
int user_choose_hdd();
int user_choose_casing();
int user_choose_monitor();
int user_choose_powersupply();
int user_choose_waterblock();
int run();
void recit();

//main function
int main(){
	Member_Registration(reg,&count);
    return 0;
}

void recit()
{
    char receipt[1000];

       FILE * rece;
        rece = fopen("G:\\receipt.txt", "r");
        while (!feof(rece))
        {
        fgets(receipt,1000,rece);
        printf("%s\n", receipt);
        }
        fclose(rece);
}

//registration & login function//
void Member_Registration(registration reg[],int *count){

    FILE * account;
    account = fopen("G:\\account.txt", "a");
	printf("User Name :");
	scanf("%s",&reg[*count].name);
	fflush(stdin);
    printf("\nPassword : ");
    gets(reg[*count].new_password);
    printf("\nConfirm Password: ");
    gets(reg[*count].new_password);
    fflush(stdin);
    printf("\nE_Mail :");
    gets(reg[*count].mail);
    printf("\nGender :");
    gets(reg[*count].gender);
    system("cls");
	printf("\n\t******Please Login*******");
	again:
	printf("\n\tusernane: ");
	gets(reg[*count].user);
	printf("\tPassword: ");
	gets(reg[*count].password);
	if(strcmp(reg[*count].user,reg[*count].name)==0 && strcmp(reg[*count].password,reg[*count].new_password)==0)
	{
    fprintf(account,"User Name: %s\nPassword : %s\nE_Mail : %s\nGender : %s", reg[*count].name, reg[*count].new_password, reg[*count].mail, reg[*count].gender);
    fclose(account);
    printf("\n\t\tLogin Succefull");
    menu();
    printf("---Total price---: %d taka",sum);
	}
	else
	{
		printf("\n\tusername or Password incorrect!");goto again;
	}
	++(*count);
}

int menu(){

    while(confirm){
    system("cls");
    printf("\n\t\t\t\t\t1. CPU\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t2. CPU_cooler\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t3. Mother Board\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t4. Ram\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t5. ssd\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t6. hdd\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t7. casing\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t8. monitor\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t9. powersupply\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t10. waterblock\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t11. Receit\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t12. exit\n\t\t\t\t\t");
    printf("\n\t\t\t\t   Please enter choose the number:  ");
    scanf("%d",&choose);

    switch(choose)
    {
    case 1:
        User_Choose_Cpu();
        break;
    case 2:
        user_Choose_Cpu_cooler();
        break;
    case 3:
        user_choose_motherboard();
        break;
    case 4:
        user_choose_Ram();
        break;
    case 5:
        user_choose_ssd();
        break;
    case 6:
        user_choose_hdd();
        break;
    case 7:
        user_choose_casing();
        break;
    case 8:
        user_choose_monitor();
        break;
    case 9:
        user_choose_powersupply();
        break;
    case 10:
        user_choose_waterblock();
        break;
    case 11:
        recit();
        break;
    case 12:
        return 0;
    }
    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&confirm);
    }
}

int User_Choose_Cpu(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose1;
    while(option)
    {
    printf("\n\t\t\t\t1. Intel Pentium Gold G5420 8th gen Coffee Lake Processor");
    printf("\n\t\t\t\t2. AMD Ryzen 3 1200 Processor");
    printf("\n\t\t\t\t3. AMD Ryzen 3 1300X Processor");
    printf("\n\t\t\t\t4. Intel 9th Gen Core i3 9100F Processor");
    printf("\n\t\t\t\t5. Go to main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose1);

    switch(choose1)
    {
    case 1:
        printf("\n\t\tPrice     5,600 tk\n\t\tRegular Price      5,860 tk\n\t\tStatus      In Stock\n\t\tProduct Code      12541\n\t\tBrand   INTEL\n\n\t\t");
        printf("Features\n\t\t      Model: Intel Pentium Gold G5420\n\t\t      Clock Speed: 3.80 GHz\n\t\t      2 Cores and Thread 4\n\t\t      Intel UHD Graphics 610");
        sum+=5600;
        fprintf(receipt,"Model: Intel Pentium Gold G5420\nPrice : 5,600 tk\n\n");
        break;

    case 2:
        printf("\n\t\tPrice      5,700 tk\n\t\tRegular Price      6,000 tk\n\t\tStatus      In Stock\n\t\tProduct Code      11645\n\t\tBrand      AMD\n\n\t\t");
        printf("Features\n\t\t      Model: AMD Ryzen 3 1200\n\t\t      Speed: 3.1GHz up to 3.4GHz\n\t\t      Cores-4 & Threads-4\n\t\t      Memory Speed: 2667MHz");
        sum+=5700;
        fprintf(receipt,"Model: AMD Ryzen 3 1200\nPrice : 5,700 tk\n\n");
        break;

    case 3:
        printf("\n\t\tPrice      7,200 tk\n\t\tRegular Price      7,500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      11919\n\t\tBrand   AMD\n\n\t\t");
        printf("Features\n\t\t      Model: AMD Ryzen 3 1300X Processor\n\t\t      Speed: 3.5GHz up to 3.7GHz\n\t\t      Cores-4 & Threads-4\n\t\t      Memory Speed: 2667MHz");
        sum+=7200;
        fprintf(receipt,"Model: AMD Ryzen 3 1300X Processor\nPrice : 7,200 tk\n\n");
        break;

    case 4:
        printf("\n\t\tPrice      7,500 tk\n\t\tRegular Price      8,100 tk\n\t\tStatus      In Stock\n\t\tProduct Code      11355\n\t\tBrand   INTEL\n\n\t\t");
        printf("Features\n\t\t      Model: Intel Core i3 9100F\n\t\t      Base Frequency 3.60 GHz Up to 4.20 GHz\n\t\t      Socket Supported FCLGA1151\n\t\t      Max Memory Size 64GB");
        sum+=7500;
        fprintf(receipt,"Model: Intel Core i3 9100F\nPrice : 7,500 tk\n\n");
        break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%s",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_Choose_Cpu_cooler(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose2;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1. Antec Neptune 120 Advanced All in One ARGB CPU Cooler");
    printf("\n\t\t\t\t2.Corsair Hydro Series H115i RGB PLATINUM 280mm Liquid CPU Cooler");
    printf("\n\t\t\t\t3.KWG Crater E1 120 Lite RGB CPU Liquid Cooler");
    printf("\n\t\t\t\t4.Corsair Hydro Series H115i 280 Pro RGB Liquid CPU Cooler");
    printf("\n\t\t\t\t5. Go to main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose2);

    switch(choose2)
    {
    case 1:
        printf("\n\t\tPrice     7,600 tk\n\t\t         In Stock\n\t\tProduct Code      12541\n\t");
        printf("Features\n\t\t      Model:Antec Neptune 120 Advanced All in One ARGB CPU Cooler \n\t\t");
        sum+=7600;
        fprintf(receipt,"Model:Antec Neptune 120 Advanced All in One ARGB CPU Cooler \n\t\t Price     7,600 tk\n\t\t ");
        break;

    case 2:
        printf("\n\t\tPrice     3,600 tk\n\t\t      In Stock\n\t\tProduct Code      12541\n\t\t");
        printf("Features\n\t\t      Model:Corsair Hydro Series H115i RGB PLATINUM 280mm Liquid CPU Cooler\n\t\t");
        sum+=3600;
        fprintf(receipt,"Model:Corsair Hydro Series H115i RGB PLATINUM 280mm Liquid CPU Cooler\n\t\t Price     3,600 tk\n\t\t");
        break;

    case 3:
        printf("\n\t\tPrice     2,600 tk\n\t\tRegular Price      5,860 tk\n\t\tStatus      In Stock\n\t\t");
        printf("Features\n\t\t      Model:KWG Crater E1 120 Lite RGB CPU Liquid Cooler\n\t\t");
        sum+=2600;
        fprintf(receipt,"Model:KWG Crater E1 120 Lite RGB CPU Liquid Cooler\n\t\t Price     2,600 tk\n\t\t");
        break;

    case 4:
        printf("\n\t\tPrice     9,600 tk\n\t\tRegular Price      5,860 tk\n\t\tStatus      In Stock\n\t\t");
        printf("Features\n\t\t      Model:Corsair Hydro Series H115i 280 Pro RGB Liquid CPU Cooler n\t\t");
        sum+=9600;
        fprintf(receipt,"Model:Corsair Hydro Series H115i 280 Pro RGB Liquid CPU Cooler n\t\t Price     9,600 tk\n\t\t");
        break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%s",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_motherboard(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose3;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.ASRock A320M-HDV R4.0 AMD Motherboard");
    printf("\n\t\t\t\t2.ASRock A520M-HDV Micro ATX AM4 Motherboard");
    printf("\n\t\t\t\t3.ASUS H81M-CS 4th Gen Intel Motherboard");
    printf("\n\t\t\t\t4.ASUS H81M-CS 4th Gen Intel Motherboard");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose3);

    switch(choose3)
    {
    case 1:
        printf("\n\t\tPrice     8600 tk\n\t\tRegular Price      8000 tk\n\t\tStatus      In Stock\n\t\tProduct Code      980\n\t\tBrand   asus\n\n\t\t");
        printf("Features\n\t\t      Model:ASRock A320M-HDV R4.0 AMD Motherboard \n\t\t      Cheap: B365\n");
        sum+=8600;
        fprintf(receipt,"Model:ASRock A320M-HDV R4.0 AMD Motherboard\nPrice:8600 tk\n\n");
        break;

    case 2:
        printf("\n\t\tPrice     5000 tk\n\t\tRegular Price      4000 tk\n\t\tStatus      In Stock\n\t\tProduct Code      541\n\t\tBrand   asus\n\n\t\t");
        printf("Features\n\t\t      Model:ASRock A520M-HDV Micro ATX AM4 Motherboard \n\t\t      Cheap: B234\n");
        sum+=5000;
        fprintf(receipt,"Model:ASRock A520M-HDV Micro ATX AM4 Motherboard\nPrice:5000 tk\n\n");
        break;

    case 3:
        printf("\n\t\tPrice     10000 tk\n\t\tRegular Price      9000 tk\n\t\tStatus      In Stock\n\t\tProduct Code      125\n\t\tBrand   asus\n\n\t\t");
        printf("Features\n\t\t      Model:ASUS H81M-CS 4th Gen Intel Motherboard\n\t\t      Cheap:B345\n");
        sum+=10000;
        fprintf(receipt,"Model:ASUS H81M-CS 4th Gen Intel Motherboard\nPrice:10000 tk\n\n");
        break;

    case 4:
        printf("\n\t\tPrice     5,600 tk\n\t\tRegular Price      5,860 tk\n\t\tStatus      In Stock\n\t\tProduct Code      12541\n\t\tBrand   INTEL\n\n\t\t");
        printf("Features\n\t\t      Model:ASUS H81M-CS 4th Gen Intel Motherboard\n\t\t      Cheap:Z980\n");
        sum+=5600;
        fprintf(receipt,"Model:ASUS H81M-CS 4th Gen Intel Motherboard\n Price:5,600 tk\n\n");
        break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_Ram(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose4;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.PNY XLR8 8GB DDR4 3200MHz Desktop Gaming RAM");
    printf("\n\t\t\t\t2.Corsair Vengeance LPX 4GB DDR4 DRAM 2400MHz");
    printf("\n\t\t\t\t3.Corsair Vengeance LPX 8GB DDR4 DRAM 2400MHz");
    printf("\n\t\t\t\t4.Thermaltake Toughram Z-ONE RGB 16GB DDR4 3200MHz Desktop RAM");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose4);

    switch(choose4)
    {
    case 1:
        printf("\n\t\tPrice     5000 tk\n\t\tRegular Price      5500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      80\n\t\tBrand   PNY\n\n\t\t");
        printf("Features\n\t\t      Model:PNY XLR8 8GB DDR4 3200MHz Desktop Gaming RAM\n\t\t      size: 8gb\n");
        sum+=5000;
        fprintf(receipt,"Model:PNY XLR8 8GB DDR4 3200MHz Desktop Gaming RAM\n\t\t Price     5000 tk\n\t\t ");
        break;

    case 2:
        printf("\n\t\tPrice     6000 tk\n\t\tRegular Price      6500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      90\n\t\tBrand   crossair\n\n\t\t");
        printf("Features\n\t\t      Model:Corsair Vengeance LPX 4GB DDR4 DRAM 2400MHz\n\t\t      size: 4gb\n");
        sum+=6000;
        break;

    case 3:
        printf("\n\t\tPrice     4000 tk\n\t\tRegular Price      4600 tk\n\t\tStatus      In Stock\n\t\tProduct Code      81\n\t\tBrand   crossair\n\n\t\t");
        printf("Features\n\t\t      Model:Corsair Vengeance LPX 8GB DDR4 DRAM 2400MHz\n\t\t      size: 8gb\n");
        sum+=4000;
        fprintf(receipt,"Model:Corsair Vengeance LPX 8GB DDR4 DRAM 2400MHz\n\t\t Price     4000 tk\n\t\t");
        break;
    case 4:
        printf("\n\t\tPrice     10000 tk\n\t\tRegular Price      8000 tk\n\t\tStatus      In Stock\n\t\tProduct Code      98\n\t\tBrand   thermaltake\n\n\t\t");
        printf("Features\n\t\t      Model:Thermaltake Toughram Z-ONE RGB 16GB DDR4 3200MHz Desktop RAM\n\t\t      size:16gb\n");
        sum+=10000;
        fprintf(receipt,"Model:Thermaltake Toughram Z-ONE RGB 16GB DDR4 3200MHz Desktop RAM\n\t\t Price     10000 tk\n\t\t");
        break;
    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_ssd(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose5;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.TwinMOS TW300 128GB SSD");
    printf("\n\t\t\t\t2.Patriot Burst 120GB 2.5SATA III SSD");
    printf("\n\t\t\t\t3.Western Digital Green 120GB SSD");
    printf("\n\t\t\t\t4.gigabyte Digital Green 120GB SSD");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose5);

    switch(choose5)
    {
    case 1:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      180\n\t\tBrand   twin\n\n\t\t");
        printf("Features\n\t\t      Model:TwinMOS TW300 128GB SSD\n\t\t      size: 128gb\n");
        sum+=3000;
        fprintf(receipt," Model:TwinMOS TW300 128GB SSD\n\t\t Price     3000 tk\n\t\t");
        break;

    case 2:
        printf("\n\t\tPrice     5000 tk\n\t\tRegular Price      4500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      280\n\t\tBrand   patroit\n\n\t\t");
        printf("Features\n\t\t      Model:Patriot Burst 120GB 2.5 SATA III SSD\n\t\t      size: 120gb\n");
        sum+=5000;
        fprintf(receipt,"Model:Patriot Burst 120GB 2.5 SATA III SSD\n\t\t Price     5000 tk\n\t\t ");
        break;

    case 3:
        printf("\n\t\tPrice     6000 tk\n\t\tRegular Price      5500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      380\n\t\tBrand   western\n\n\t\t");
        printf("Features\n\t\t      Model:Western Digital Green 120GB SSD\n\t\t      size: 128gb\n");
        fprintf(receipt,"Model:Western Digital Green 120GB SSD\n\t\t Price     6000 tk\n\t\t");
        break;
    case 4:
        printf("\n\t\tPrice     8000 tk\n\t\tRegular Price      5500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      880\n\t\tBrand   gigabyte\n\n\t\t");
        printf("Features\n\t\t      Model:gigabyte Digital Green 120GB SSD\n\t\t      size: 120gb\n");
        sum+=8000;
        fprintf(receipt,"Model:gigabyte Digital Green 120GB SSD\n\t\t Price     8000 tk\n\t\t");
        break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_hdd(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose6;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.Toshiba 1TB Sata Desktop Hard Disk");
    printf("\n\t\t\t\t2.Western Digital 1TB Blue Desktop HDD");
    printf("\n\t\t\t\t3.Western Digital 2TB Blue Desktop HDD");
    printf("\n\t\t\t\t4.Seagate Barracuda 2TB 7200RPM SATA 3.5-inch HDD");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose6);

    switch(choose6)
    {
    case 1:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   toshiba\n\n\t\t");
        printf("Features\n\t\t      Model:Toshiba 1TB Sata Desktop Hard Disk\n\t\t      size: 1tb\n");
        sum+=3000;
        fprintf(receipt,"Model:Toshiba 1TB Sata Desktop Hard Disk\n\t\t Price     3000 tk\n\t\t");
        break;
    case 2:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      180\n\t\tBrand   westren\n\n\t\t");
        printf("Features\n\t\t      Model:Western Digital 1TB Blue Desktop HDD\n\t\t      size: 1tb\n");
        sum+=3000;
        fprintf(receipt,"Model:Western Digital 1TB Blue Desktop HDD\n\t\t Price     3000 tk\n\t\t");
        break;
    case 3:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      150\n\t\tBrand   westren\n\n\t\t");
        printf("Features\n\t\t      Model:Western Digital 2TB Blue Desktop HDD\n\t\t      size: 2tb\n");
        sum+=3000;
        fprintf(receipt,"Model:Western Digital 2TB Blue Desktop HDD\n\t\t Price     3000 tk\n\t\t");
        break;
    case 4:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      120\n\t\tBrand   seagate\n\n\t\t");
        printf("Features\n\t\t      Model:Seagate Barracuda 2TB 7200RPM SATA 3.5-inch HDD\n\t\t      size: 2tb\n");
        sum+=3000;
        fprintf(receipt,"Model:Seagate Barracuda 2TB 7200RPM SATA 3.5-inch HDD\n\t\t Price     3000 tk\n\t\t ");
        break;
    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_casing(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose7;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.Antec micro ATX casing");
    printf("\n\t\t\t\t2.gigabyte ATX casing");
    printf("\n\t\t\t\t3.asus gaming casing");
    printf("\n\t\t\t\t4.msi al supported casing");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose7);
    switch(choose7)
    {
    case 1:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   antec\n\n\t\t");
        printf("Features\n\t\t      Model:Antec micro ATX casing\n");
        sum+=3000;
        fprintf(receipt,"Model:Antec micro ATX casing\n Price     3000 tk\n\t");
        break;

    case 2:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   antec\n\n\t\t");
        printf("Features\n\t\t      Model:gigabyte ATX casing\n");
        sum+=3000;
        fprintf(receipt,"Model:gigabyte ATX casing Price     3000 tk\n\t\t");
        break;

    case 3:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   asus\n\n\t\t");
        printf("Features\n\t\t      Model:asus gaming casing\n");
        sum+=3000;
        fprintf(receipt,"Model:asus gaming casing\n Price     3000 tk\n\t\t");
        break;

    case 4:
        printf("\n\t\tPrice     3000 tk\n\t\tRegular Price      2500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   msi\n\n\t\t");
        printf("Features\n\t\t      Model:msi al supported casing\n\t\t      size: 1tb\n");
        sum+=3000;
        fprintf(receipt," Model:msi al supported casing\n\t\t Price     3000 tk\n\t\t");
        break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_monitor(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose8;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.Acer Aopen 19CX1Q 18.5-inch LED Monitor");
    printf("\n\t\t\t\t2.Gigabyte Aopen 30.5-inch LED Monitor");
    printf("\n\t\t\t\t3.Asus Aopen 27.5-inch LED Monitor");
    printf("\n\t\t\t\t4.Msi Aopen 35.5-inch LED Monitor");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose8);

    switch(choose8)
    {
    case 1:
        printf("\n\t\tPrice     13000 tk\n\t\tRegular Price      12500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   Acer\n\n\t\t");
        printf("Features\n\t\t      Model:Acer Aopen 19CX1Q 18.5-inch LED Monitor\n\t\t      size: 18.5-inch\n");
        sum+=13000;
        fprintf(receipt,"Model:Acer Aopen 19CX1Q 18.5-inch LED Monitor\n\t\t Price     13000 tk\n\t\t");
        break;

    case 2:
        printf("\n\t\tPrice     23000 tk\n\t\tRegular Price      22500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   gigabyte\n\n\t\t");
        printf("Features\n\t\t      Model:Gigabyte Aopen 30.5-inch LED Monitor\n\t\t      size: 30.5-inch\n");
        sum+=23000;
        fprintf(receipt," Model:Gigabyte Aopen 30.5-inch LED Monitor\n\t\tPrice     23000 tk\n\t\t ");
        break;

    case 3:
        printf("\n\t\tPrice     33000 tk\n\t\tRegular Price      32500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   asus\n\n\t\t");
        printf("Features\n\t\t      Model:Asus Aopen 27.5-inch LED Monitor\n\t\t      size: 27.5-inch\n");
        sum+=33000;
        fprintf(receipt,"Model:Asus Aopen 27.5-inch LED Monitor\n\t\t Price     33000 tk\n\t\t");
        break;

    case 4:
        printf("\n\t\tPrice     43000 tk\n\t\tRegular Price      42500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   msi\n\n\t\t");
        printf("Features\n\t\t      Model:Msi Aopen 27.5-inch LED Monitor\n\t\t      size: 35.5-inch");
        sum+=43000;
        fprintf(receipt,"Model:Msi Aopen 27.5-inch LED Monitor\n\t\t Price     43000 tk\n\t\t ");
        break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_powersupply(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose9;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.Gigabyte P450B 450W 80 Plus Bronze Certified Power Supply");
    printf("\n\t\t\t\t2.Gamdias Helios E1 500W Power Supply");
    printf("\n\t\t\t\t3.Thermaltake Litepower 450W Non-Modular Power Supply");
    printf("\n\t\t\t\t4.Corsair CX600 Power Supply");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose9);

    switch(choose9)
    {
    case 1:
        printf("\n\t\tPrice     4000 tk\n\t\tRegular Price      3500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   Acer\n\n\t\t");
        printf("Features\n\t\t      Model:Gigabyte P450B 450W 80 Plus Bronze Certified Power Supply\n\t\t      power:450w\n");
        sum+=4000;
        fprintf(receipt," Model:Gigabyte P450B 450W 80 Plus Bronze Certified Power Supply\n\t\t Price     4000 tk\n\t\t");
        break;

    case 2:
        printf("\n\t\tPrice     8300 tk\n\t\tRegular Price      8200 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   Acer\n\n\t\t");
        printf("Features\n\t\t      Model:Gamdias Helios E1 500W Power Supply\n\t\t      power:500w\n");
        sum+=8300;
        fprintf(receipt,"Model:Gamdias Helios E1 500W Power Supply\n\t\t Price     8300 tk\n\t\t");
        break;

    case 3:
        printf("\n\t\tPrice     10000 tk\n\t\tRegular Price      8500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   Acer\n\n\t\t");
        printf("Features\n\t\t      Model:Thermaltake Litepower 450W Non-Modular Power Supply\n\t\t      power:450w\n");
        sum+=10000;
        fprintf(receipt," Model:Thermaltake Litepower 450W Non-Modular Power Supply\n\t\t Price     10000 tk\n\t\t");
        break;

    case 4:
        printf("\n\t\tPrice     13000 tk\n\t\tRegular Price      12500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   Acer\n\n\t\t");
        printf("Features\n\t\t      Model:Corsair CX600 Power Supply\n\t\t      power:600\n");
        sum+=13000;
        fprintf(receipt,"Model:Corsair CX600 Power Supply\n\t\t Price     13000 tk\n\t\t");
        break;

    case 5:
        return 1;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}

int user_choose_waterblock(){

    FILE * receipt;
    receipt = fopen("G:\\receipt.txt", "a");
    system("cls");
    int choose10;
    int option=1;
    while(option)
    {
    printf("\n\t\t\t\t1.Lian Li 011D Distro Plate G1 ARGB Water Cooling Block");
    printf("\n\t\t\t\t2.Lian Li 011l Distro Plate G2 ARGB Water Cooling Block");
    printf("\n\t\t\t\t3.Lian Li 011u Distro Plate G3 ARGB Water Cooling Block");
    printf("\n\t\t\t\t4.Lian Li 011t Distro Plate G4 ARGB Water Cooling Block");
    printf("\n\t\t\t\t5.go to the main menu");
    printf("\n\t\t\t  Please enter choose the number:  ");
    scanf("%d",&choose10);

    switch(choose10)
    {
    case 1:
        printf("\n\t\tPrice     14000 tk\n\t\tRegular Price      13500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   linan\n\n\t\t");
        printf("Features\n\t\t      Model:Lian Li 011D Distro Plate G1 ARGB Water Cooling Block\n\t\t      Flow: 500L/H\n");
        sum+=14000;
        fprintf(receipt,"Model:Lian Li 011D Distro Plate G1 ARGB Water Cooling Block\n\t\t Price     14000 tk\n\t\t");
        break;

    case 2:
        printf("\n\t\tPrice     15000 tk\n\t\tRegular Price      14500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   linan\n\n\t\t");
        printf("Features\n\t\t      Model:Lian Li 011l Distro Plate G1 ARGB Water Cooling Block\n\t\t      Flow: 600L/H\n");
        sum+=15000;
        fprintf(receipt,"Model:Lian Li 011l Distro Plate G1 ARGB Water Cooling Block\n\t\t Price     15000 tk\n\t\t");
        break;

    case 3:
        printf("\n\t\tPrice     17000 tk\n\t\tRegular Price      3500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   linn\n\n\t\t");
        printf("Features\n\t\t      Model:Lian Li 011u Distro Plate G1 ARGB Water Cooling Block\n\t\t      Flow: 400L/H\n");
        sum+=17000;
        fprintf(receipt," Model:Lian Li 011u Distro Plate G1 ARGB Water Cooling Block\n\t\t Price     17000 tk\n\t\t ");
        break;

    case 4:
    printf("\n\t\tPrice     47000 tk\n\t\tRegular Price      33500 tk\n\t\tStatus      In Stock\n\t\tProduct Code      110\n\t\tBrand   linan\n\n\t\t");
    printf("Features\n\t\t      Model:Lian Li 011Dt Distro Plate G1 ARGB Water Cooling Block\n\t\t     Flow: 300L/H \n");
    sum+=47000;
    fprintf(receipt,"Model:Lian Li 011Dt Distro Plate G1 ARGB Water Cooling Block\n\t\t Price     47000 tk\n\t");
    break;

    case 5:
        return 0;
    }

    printf("\n\t\t\t\t     please enter pres '1' continue:  ");
    scanf("%d",&option);
    system("cls");
    printf("%d",sum);
    fclose(receipt);
    }
}



