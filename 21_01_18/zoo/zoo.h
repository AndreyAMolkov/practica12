
struct Animal
{
	char type[64]; // ÷òî çà æèâîòíîå
	char name[64]; // êëè÷êà
	int age;   // âîçðàñò
	int danger;  // îïàñíî ëè?
	struct Animal *next; // ñëåä. ýëåìåíò ñïèñêà
};

typedef struct Animal TAnimal;

// ñîçäàíèå ñïèñêà
TAnimal* create();
void     addTail(TAnimal *head);
void     printList(TAnimal *head);
int      searchAnimal(TAnimal *head, char* type);