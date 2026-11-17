#pragma once
#pragma once
#include "Book.h"
#include "IBookRepository.h"
#include "INotificationService.h"
#include <vector>

class Library {
public:
    Library(IBookRepository& repo, INotificationService& notifier)
        : repo_(repo), notifier_(notifier) {
    }

    void addBook(const Book& book) {
        books_.push_back(book);
        repo_.save(book);
        notifier_.notify(book);
    }

    void displayBooks() const {
        for (const auto& book : books_) {
            book.display();
        }
    }

private:
    std::vector<Book> books_;
    IBookRepository& repo_;
    INotificationService& notifier_;
};