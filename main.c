#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[10];
	double grade;
};

int main(int argc, char *argv[]) {
	struct student s1={ 21, "chaehyun", 4.3};
	printf ("%d,%s,%f\n", s1.ID, s1.name, s1.grade);
	
	s1.grade=4.5;
	s1.name[0]='j';
	s1.ID=22;
	
	printf ("ID: %d\nname: %s\ngrade: %f", s1.ID, s1.name, s1.grade);
	return 0;
}
