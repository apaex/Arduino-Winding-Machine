# Arduino Winding Machine

Это продолжение развития прошивки намоточного станка, созданного и опубликованного на сайте https://cxem.net/ автором TDA. Форк основан на версии прошивки 2.1b, ничего более нового я не нашел. Ссылки на статьи и оригинальные версии прошивок:

* [Намоточный станок на Arduino версия 2.0](https://cxem.net/arduino/arduino235.php)
* [Намоточный станок на Arduino](https://cxem.net/arduino/arduino245.php)

### Список изменений

* Поддержка многострочных дисплеев. 20х4, 16х2 и т.п.
* Сохранение всех настроек в энергонезависимой памяти
* Три независимых блока настроек, в каждом по 3 обмотки. Итого 9 групп параметров
* Новый модуль управления позициями двигателей. Плавный разгон и торможение, настройка инкремента
* Новый модуль автонамотки. Мы работаем над этим.

***Прошивка сейчас в разработке, немного подождите.***

## Установка
### Необходимые библиотеки

* LiquidCrystal 1.0.7 или новее
* GyverStepper 2.6.2 или новее
