#include <experimental/filesystem>
#include <iostream>
#include <cstring>

namespace fs = experimental::filesystem;

int main() {
    setlocale(LC_ALL, "rus");

    try {
        string address;
        std::cout << std::endl;
        std::cout << "Укажите путь к файлу:" << std::endl;
        std::cout << "Пример: 'explorer/file.dat' " << std::endl << std::endl;
        std::cout << "Ввод:\t";
        std::cin >> address;

        if (!fs::exists(address))
            throw runtime_error("Ошибка: Такого адреса не существует!");

        const fs::path filePath = address;

        const fs::path textFilename = filePath.filename();

        auto ftime = fs::last_write_time(filePath);

        time_t cftime = decltype(ftime)::clock::to_time_t(ftime);

        std::cout << std::endl;
        std::cout << textFilename << std::endl;
        std::cout << (double(fs::file_size(filePath)) / 1000) << " Kb";
        std::cout << std::asctime(std::localtime(&cftime));
}
catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
}

return 0;
}
