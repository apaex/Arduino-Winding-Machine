# Arduino Winding Machine

Это продолжение развития прошивки намоточного станка, созданного [Дмитрием Торцевым](https://vk.com/club192215032). Форк основан на версии прошивки [2.1b](https://github.com/apaex/ArduinoWindingMachine/tree/2.1b), ничего более нового я не нашел. Ссылки на статьи и оригинальные версии прошивок:

* [Намоточный станок на Arduino версия 2.0](https://cxem.net/arduino/arduino245.php)
* [Намоточный станок на Arduino](https://cxem.net/arduino/arduino235.php)

### Список изменений

* Поддержка многострочных дисплеев. 20х4, 16х2 и т.п.
* Русский язык интерфейса. Прикиньте)
* Сохранение всех настроек в энергонезависимой памяти
* Три независимых блока настроек, в каждом по 3 обмотки. Итого 9 групп параметров
* Новый модуль управления позициями двигателей. Плавный разгон и торможение, настройка шага

#### Eщё по мелочи:
* Качественный энкодер с программным подавлением дребезга
* Блок глобальных настроек. Сейчас можно отключить паузу между слоями.

### Ограничения

* Пока нет поддержки I2C подключения дисплея

## Установка
### Необходимые библиотеки

* LiquidCrystal 1.0.7 или новее
* GyverStepper 2.6.2 или новее
* EnсButton 1.23.0 или новее

### Настройки в коде
В файле Arduino_winding_machine.ino нужно проверить следующие настройки:

```cpp
#define THREAD_PITCH        50           // Шаг резьбы вала каретки, умноженный на 50

#define DISPLAY_NCOL        20           // размер дисплея: ширина
#define DISPLAY_NROW        4            // размер дисплея: высота

#define STEPPERS_STEPS      200          // число шагов двигателя на 1 оборот
#define STEPPERS_MICROSTEPS 16           // делитель на плате драйвера двигателя

#define ENCODER_TYPE        EB_HALFSTEP  // тип энкодера: EB_FULLSTEP или EB_HALFSTEP. если энкодер делает один поворот за два щелчка, нужно изменить настройку
#define ENCODER_INPUT       INPUT        // если есть подтягивающие резисторы - ставь INPUT, если нет - INPUT_PULLUP
```
