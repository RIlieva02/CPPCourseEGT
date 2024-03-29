//
//  Condition.h
//  Task02
//
//  Created by Ralitsa Toneva on 15.02.24.
//

//Hotel Management System

//a) Room
//Реализирайте клас Room, който представлява стая в хотел. Всяка стая трябва да
//има номер, вид -  Single, Double, Suite, и описание. В зависимост от вида се
//определя цената за една нощувка - за Single e 40 лева, за  Double е 65, а за
//Suite - 90. Да се реализира член-функция, която връща цената за нощувка спрямо
//вида на стаята. Да се предефинират следните оператори:
//operator == - по подаден номер или стая, проверява дали съответно стаята има
//същия номер или двете стаи съвпадат.
//operator<< - извежда подробна информация за стаята.

//б) Customer
//Реализирайте клас Customer, който представлява клиент на хотел. Всеки клиент
//трябва да има име, телефонен номер (10 цифри, първите 2 от които са винаги 08) и
//адрес. Да се предефинират следните оператори:
//operator == - по подадено име проверява дали клиентът има същото име.
//operator<< - извежда подробна информация за клиента

//в) Reservation
//Реализирайте клас Reservation, който представлява резервация в хотел.
//Резервацията съдържа уникален номер, който се определя от реда на създаване,
//клиент, който я е направил, стаята, която се резервира и период на резервация,
//който се описва с начална и крайна дата.

//* Реализирайте клас Time, който има член данни, year, month, day, hour, minute,
//second, каквото е необходимо от голямата четворка, operator<<, operator<,
//operator==, operator- и да може да приема текущо време като работи с time_t time.

//Да се реализират следните член-функции за Reservation:
//намиране на общата цена на резервацията за дадения период;
//по дадени начална и крайна дата проверява дали стаята е свободна в периода,
//определен от двете дати.
//Да се реализират още селектори за стаята и клиента. Да се предефинират следните
//оператори:
//operator == - по подаден номер или резервация, проверява дали съответно
//резервацията има същия номер или двете резервации съвпадат;
//operator<< - извежда подробна информация за резервацията.

//г) Hotel
//Реализирайте клас Hotel, който представлява хотел, съдържащ списък от стаи и
//резервации. Всяка стая трябва да има уникален номер. Да се реализират следните
//член-функции:
//добавяне на стая в хотела;
//добавяне на резервация;
//по даден номер на резервация премахва резервацията с този номер;
//по дадени начална и крайна дата и номер на стая проверява дали стаята е свободна
//в периода, определен от двете дати;
//по дадени начална и крайна дата извежда списък от свободни стаи в периода,
//определен от двете дати;
//по дадена дата намира общите приходи от резервации, които са свършили преди тази
//дата;
//по дадено име на клиент връща списък от резервации, направени от този клиент.
//Да се предефинира операторът за изход, който да извежда подробна информация за
//хотела.


