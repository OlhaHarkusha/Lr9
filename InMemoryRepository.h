#pragma once
#pragma once
#include "IBookRepository.h"
#include <vector>

class InMemoryRepository : public IBookRepository {
public:
    void save(const Book& book) override {
        std::cout << "Saving book to database..." << std::endl;
        storage_.push_back(book);
    }
private:
    std::vector<Book> storage_;
};