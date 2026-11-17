#pragma once
#pragma once
#include "INotificationService.h"

class EmailNotificationService : public INotificationService {
public:
    void notify(const Book& /*book*/) override {
        std::cout << "Sending email notification about the new book..."
            << std::endl;
    }
};