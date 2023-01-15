/*
Create a linked list of four nodes.
After the list is full, new items are added to the left (tail),
all nodes are moved to the right and the head node is dropped.
Each node should contain an integer as value and a pointer that always points to the node on the right.
Your list should accommodate 4 nodes, and any new node should push out the oldest one.
Write a function named addLink() to add to the list, and in main() write the correct calls to test your code.
*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int value;
	struct student *next;
};

void addLink(int id);
void display(void);

int links = 0;
struct student * link;
struct student * current;

void addLink(int id)
{
	 if (links < 4)
    {
		//add in the new student and just shift the other nodes down
        struct student * newLink = (struct student *) malloc(sizeof(struct student)); //memory size for the new student link
        newLink->value = id;
        newLink->next = link;
        link = newLink;
        links++;
    }
    else
    {
		//memory and new student instantiation
        struct student * newLink = (struct student *) malloc(sizeof(struct student));
        newLink->value = id;
        newLink->next = link;
        link = newLink;

        current = link;
		//check if the next next is null to see where the linked list ends
        while (current->next->next != NULL)
        {
            current = current->next;
        }
		//freeing the next link
        free(current->next);
		//setting last items next to null to make sure list is only of length 4 (anything after 4 = NULL)
        current->next = NULL;
    }
}
void display(void)
{
    current = link;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
}


int main(void)
{

	
   addLink(11);
   addLink(22);
   display(); 
   printf("\n");
	
   addLink(33);
   addLink(44);
   display(); 
   printf("\n");
   
   
   addLink(55);
   display();
   printf("\n");
   
   addLink(66);
   display();
   printf("\n");
   addLink(77);
   display(); 
 
    return 0;
}

