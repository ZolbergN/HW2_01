#include <experimental/filesystem>
#include <iostream>
#include <cstring>

using namespace std;
namespace fs = experimental::filesystem;

int main() {
   setlocale(LC_ALL, "rus");

   try {
	string address;
	cout << endl;
	cout << "Укажите путь к файлу:" << endl;
	cout << "Пример: 'explorer/file.dat' " << endl << endl;
	cout << "Ввод:\t";
	cin >> address;

	if (!fs::exists(address))
		throw runtime_error("Ошибка: Такого адреса не существует!");

	const fs::path filePath = address;

	const fs::path textFilename = filePath.filename();

	auto ftime = fs::last_write_time(filePath);

	time_t cftime = decltype(ftime)::clock::to_time_t(ftime);

	cout << endl;
	cout << "name:\t\t" << textFilename << endl;
	cout << "size:\t\t" << (double(fs::file_size(filePath)) / 1000) << " Kb" << endl;
	cout << "date_mod:\t" << std::asctime(std::localtime(&cftime)) << endl;

}
catch (const std::exception& e) {
	cout << e.what() << endl;
}

return 0;
}
