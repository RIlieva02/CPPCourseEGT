//
//  Condition.h
//  Condition
//
//  Created by Ralitsa Toneva on 15.02.24.
//

// Всеки клас трябва да е собственик на паметта, с която оперира, и да се грижи
//правилно за нейното заделяне и освобождаване. Класовете могат да съдържат повече
//методи от описаните в условието, ако прецените. Ако не е казано изрично друго, под
//число се разбира число с плаваща запетая.

//Да се реализира интерфейс MathExpression, който описва математически израз,
//съдържащ следните методи:
//evaluate - оценява математическия израз;
//print - принтира математическия израз на стандартния изход.
//Да се реализират следните класове, които имплементират горния интерфейс:
//Constant - представлява константа, чиято стойност се задава в конструктора на
//класа. Оценката на константа е нейната стойност. При принтиране да се изведе само
//стойността на константата;
//Sum - представлява сума на произволен брой математически изрази. Оценката е сума от
//стойностите на всички изрази в сумата. Принтирането да е в следния формат: “(a1 +
//а2 + … + a3)”, където ai са изразите в сумата. Ако някое ai е отрицателно да се
//замени + с -. Пример: “(5 + 4 - 7)”. Да се реализира метод за добавяне на изрази в
//сумата;
//Product - представлява произведение на произволен брой математически изрази.
//Оценката е произведение от стойностите на всички изрази в сумата. Принтирането да е
//в следния формат: “(a1 * а2 * … * a3)”, където ai са изразите в произведението. Ако
//някое ai е отрицателно да се огради в скоби.  Да се реализира метод за добавяне на
//изрази в произведението;
//Power - представлява повдигане на степен. Конструкторът на класа да приема израз и
//степен (цяло число). Оценката е стойността на израза, повдигната на подадената
//степен. Принтирането да е в следния формат: “x^n”, където x е израза, а n -
//степента. Да се използва алгоритъмът за бързо степенуване;
//Sine - представлява синус. Конструкторът на класа да приема израз и цяло число,
//представляващо приближение. Оценката е синус от стойността на израза. Принтирането
//да е в следния формат: “sin(x)”, където x е израза. За намиране на оценката да се
//пресметне разлагането на синус в ред на Маклорен:
//(Сумата в горния израз да е до приближението, което е подадено в конструктора)

