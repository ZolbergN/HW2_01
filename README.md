## Laboratory work V

[![Build Status](https://travis-ci.org/ZolbergN/lab5.svg?branch=master)](https://travis-ci.org/ZolbergN/lab5)
Данная лабораторная работа посвещена изучению систем непрерывной интеграции на примере сервиса **Travis CI**

## Проект Explorer (I этап)

### Соответствие порядкового номера и комбинации:
- Порядковый номер: **12**
- Двоичное представление: **1 1 0 0**
- Комбинация: **0, 0, 1, 1**


## Задание
Написать программу принимающую в качестве входного параметра {
- [X] **A[0] == 0: через стандартный поток ввода**
- [ ] A[0] == 1: через параметры командной строки

} путь к ресурсу файловой системы { 
- [X] **A[1] == 0: файл**
- [ ] A[1] == 1: директория

} и выводящую в { 
- [ ] A[2] == 0: файл
- [X] **A[2] == 1: стандартный поток вывода**

} информацию следующего вида { 
- [ ] A[3..4] == 0: полный путь, размер, дата создания
- [X] **A[3..4] == 1: имя, размер, дата модификации**
- [ ] A[3..4] == 2: имя, место расположения, тип
- [ ] A[3..4] == 3: имя, дата создания, дата изменения

} c использованием ***std::filesystem***.


## Пример
Для комбинации **1, 0, 1, 0**
```
$ ./explorer file.dat
path:	 /home/user/file.dat
size:	 2258 Kb
date:	 10/17/2017 8:43
```
