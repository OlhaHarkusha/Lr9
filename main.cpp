#include "Library.h"
#include "InMemoryRepository.h"
#include "EmailNotificationService.h"

int main() {
    InMemoryRepository repo;
    EmailNotificationService notifier;
    Library library(repo, notifier);

    library.addBook(Book("The Catcher in the Rye", "J.D. Salinger"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));
    library.displayBooks();

    return 0;
}