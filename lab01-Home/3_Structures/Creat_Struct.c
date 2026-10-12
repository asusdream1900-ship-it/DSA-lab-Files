// 1. Define struct Book { title, author, price } . Read n books and print them as a neat
// list.

// 3. Print the average price of all the books.
// INPUT 2 / C_Programming Ritchie 350 / DSA Karumanchi 500 OUTPUT Costliest:
// DSA (500.0), Average = 425.0

# include<stdio.h>
struct Book {
    char titl[30];
    char author[30];
    int price;
};

int main(){
    int size = 5;
    struct Book books[] = {
        {"The Alchemist", "Paulo Coelho", 299},
        {"Rich Dad Poor Dad", "Robert Kiyosaki", 399},
        {"Atomic Habits", "James Clear", 499},
        {"The Psychology of Money", "Morgan Housel", 350},
        {"Wings of Fire", "A. P. J. Abdul Kalam", 250}
    };

    // 2. Print the details of the most expensive book.
    
    int expensive = books[0].price;
    int average = books[0].price;
    for(int i = 1;i<size;i++){
        average += books[i].price;
        if(expensive<books[i].price) expensive = books[i].price;

    }
    printf("most expensive book is = %d\n",expensive);
    printf("average price of all the books is = %d\n",average/size);
}