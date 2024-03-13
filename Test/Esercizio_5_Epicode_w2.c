#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main()

{
	char scelta = '\0';
	menu();
	scanf("%c", &scelta);

	switch (scelta)
	{
	case 'A':
	case 'a':
		moltiplica();
		break;
	case 'B':
	case 'b':
		dividi();
		break;
	case 'C':
	case 'c':
		ins_string();
		break;
	
	}

	return 0;
}

void menu()
{
	printf("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf("Come posso aiutarti?\n");
	printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica()
{
	short int a, b;
	printf("Inserisci i due numeri da moltiplicare:");
	scanf("%hd", &a);
	scanf("%hd", &b);

	int prodotto = a * b;

	printf("Il prodotto tra %d e %d e': %d", a, b, prodotto);
}

void dividi()
{
	int a, b = 0;
	printf("Inserisci il numeratore:");
	scanf("%d", &a);
	printf("Inserisci il denumeratore:");
	scanf("%d", &b);
    
	int divisione = a / b;

	printf("La divisione tra %d e %d e': %d", a, b, divisione);
}

void ins_string()
{
	char stringa[10];
	printf("Inserisci la stringa:");
	scanf("%9s[^\n]", stringa);
	printf("\n%s\n", stringa);
}
