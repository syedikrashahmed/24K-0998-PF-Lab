/*4. Define a Book structure with fields like title, author, publication_year, and price. Createan array of books and write functions to:
1. Display all books in the library
2. Search for a book by title
3. List book by a specific author*/

#include <stdio.h>
#include <string.h>
struct Book
{
    char title[20];
    char author[20];
    int publication_year;
    float price;
};

void displayBooks(Book arr[], int n);
void searchBook(Book arr[], int n, char toFind[]);
void searchAuthor(Book arr[], int n, char toFind[]);


int main()
{
	int n;
	printf("enter number of books: ");
	scanf("%d", &n);
	Book books[n];
	for (int i = 0; i < n; i++)
	{
	    printf("Enter title of book %d: ", i + 1);
	    scanf("%s", books[i].title);
	    printf("Enter author of book %d: ", i + 1);
	    scanf("%s", books[i].author);
	    printf("Enter publication year of book %d: ", i + 1);
	    scanf("%d", &books[i].publication_year);
	    printf("Enter price of book %d: ", i + 1);
	    scanf("%f", &books[i].price);
	}
	displayBooks(books, n);
	char bsearch[20];
	printf("Enter book to search: ");
	scanf("%s", bsearch);
	searchBook(books, n, bsearch);
	char asearch[20];
	printf("Enter author to search: ");
	scanf("%s", asearch);
	searchAuthor(books, n, asearch);
}

void displayBooks(Book books[], int n)
{
    for (int i = 0; i < n; i++)
    {
            printf("Title: %s\nAuthor: %s\nPublication Year: %d\nPrice: %.2f\n", books[i].title, books[i].author, books[i].publication_year, books[i].price);
    }
}

void searchBook(Book arr[], int n, char toFind[])
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].title, toFind) == 0)    
        {
            flag = 1;
            break;
        }
    }     
    
    if (flag == 1)
    {
        printf("Book Found\n");    
    }
    else if (flag == 0)
    {
        printf("Book Not Found\n");    
    }
}

void searchAuthor(Book arr[], int n, char toFind[])
{
     int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].author, toFind) == 0)    
        {
            flag = 1;
            printf("Book by %s is %s\n", toFind, arr[i].title);
        }
    }     
    
    if (flag == 0)
    {
        printf("Author Not Found\n");    
    }
}