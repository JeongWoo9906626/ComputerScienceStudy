#include <iostream>
#include <vector>
#include "Proxy.h"

int main() {
    std::unique_ptr<Subject> proxy = std::make_unique<Proxy>();
    proxy->Request();
    return 0;
}
