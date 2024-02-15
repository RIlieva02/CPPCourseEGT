//
//  Test.h
//  Test
//
//  Created by Ralitsa Toneva on 31.01.24.
//

//1. Syntax Explanation:
//Describe what the following line of C++ code does: int* ptr = &var:.

// ptr присвоява адреса на променливата var.

// ptr assigns the address of the variable var.

//2. Concept Clarification:
//Explain the difference between a while loop and a do-while loop in C++.

// Разликата между while и do-while циклите е, че в do-while цикалът, винаги ще влезем
// поне един път в него и ще изпълним дадените операции, независимо какво е условието,
// защото условието се проверява всеки път в края на тялото на самия цикъл.
// Докато в while цикала условието винаги се проверява в началото и ако то не е изпълнено
// няма да влезем в него.

// The difference between the while and do-while loops is that in a do-while loop, we will
// always enter it at least once and execute the specified operations, regardless of the
// condition, because the condition is checked at the end of the loop body.
// In contrast, in a while loop, the condition is always checked at the beginning, and if it
// is not satisfied, we won't enter the loop.

//3. Code Analysis:
//Given a snippet of C++ code containing a for loop, explain what the loop does, including
//how many times it iterates and why.

int number = 10;

for (int i = 1; i <= number; i++){
    std::cout << i << ' ';
}

// For цикалът, както и другите цикни ни помагат да извършим една и съща операция няколко
// пъти. В примерът, който ви предоставям искаме да изпринтим числата от 1-10. За целта
// използваме for цикъл.
// Започваме като инициализираме от къде ще започне да се върти нашия цикъл (int i = 1),
// след което си задаваме условие (i <= 10), докато това условие е вярно цикалът ни ще
// продължава да се изпълнява. Под изпълнение имам предвит, че ще влезе в тялото на цикъла и
// ще изпълни (std::cout << i << ' ';), което ще ни изпринти даденото число i, след
// изпълняването на тялото на цикъла идва последната част да итерираме i с една единица
// (i++).

// The for loop, like other loops, helps us perform the same operation multiple times. In
// the example I am providing, we want to print the numbers from 1 to 10. To achieve this, we
// use a for loop.
// We start by initializing where our loop will begin (int i = 1), then set a condition
// (i <= 10). As long as this condition is true, the loop will continue to execute. By
// execution, I mean it will enter the body of the loop and execute (std::cout << i << ' ';),
// which will print the current value of i. After executing the body of the loop, the last
// part is to increment i by one unit (i++).

// 4.  Function Usage:
//Write about how functions prevent code duplication and give an example of a simple C++
//function that calculates the square of a number.

int square(int number){
    return nember * number;
   // return pow(number, 2);
}

int main (){
    
    int number = 3;
    std::cout << square(number) << std::endl;
    
    int secondNum = 10;
    std::cout << square(number) << std::endl;
    
    return 0;
}

// Използваме функции в c++, за да избегнем дублирането на код, когато ни се налага да
// използваме един и същ набор от код няколко пъти.
// В примера който съм дала използваме функцията square два пъти за две различни променливи,
// вместо всеки път да изписваме формулата за намиране на квадрат на число.

// In C++, we use functions to avoid code duplication when we need to use the same set of
// operations multiple times.
// In the provided example, we use the function square twice for two different variables,
// instead of repeating the formula for finding the square of a number each time.

//5. Memory Management:
// Discuss the importance of memory management in C++ and explain the difference between
// stack and heap memory allocation.

// Разликата между stack и heap memory, e че в stack паметта се заделя статично, т.е
// в стека се съхраняват локални променливи или функции, които определят размера на паметта,
// която се заделя при компилирането на кода, докато в heap заделянето на памет става
// динамично (new, delete), т.е размера на динамично заделената памет не е фиксиран -
// използваме толкова, колкото ни трябва и ние се грижим за нейното изтриване.

// The difference between stack and heap memory lies in how memory is allocated. In stack
// memory, allocation is static, meaning it is used to store local variables or functions
// whose memory size is determined during code compilation. On the other hand, heap memory
// allocation is dynamic, utilizing operations like new and delete. The size of dynamically
// allocated memory in the heap is not fixed - we allocate as much as needed and are
// responsible for its deletion.

//6. Object-Oriented Programming:
//Explain the concept of encapsulation in C++ and how it is achieved using classes

// Концепцията на енкапсулацията е да ограничи или даде достъп до отделните компоненти на
// даден обект. В класовете в c++ се използват (private, public, protected), чрез тях ние
// определяме, кои компоненти на създадения от нас обект ще могат да бъдат достъпвани и кои
// не.

// The concept of encapsulation is to restrict or provide access to individual components of
// an object. In C++ classes, (private, public, protected) are used to determine which
// components of the object we create can be accessed and which ones cannot.

//7. Error Handling:
//Describe how exceptions are used in C++ for error handling, with an example of a
//try-catch block.

try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}

// Примерът е взет от тук:
//https://www.w3schools.com/cpp/cpp_exceptions.asp

// Exceptions използваме, за да намираме грешки в програматаи да ги отстраняваме.

// We use Exceptions to detect errors in the program and address them.

//8. STL Containers:
//Write about the purpose and use of the std:: vector container in C++.

// std::vector е динамичен масив, в който можем да съхраняваме еднотипни данни. С него
// ние можем да достъпваме, премахваме или добавяме такива елементи. Полезното при
// използването на std::vector, е че той сам освобойдава паметта си.

// std::vector is a dynamic array where we can store homogeneous data. It allows us to
// access, remove, or add such elements. The convenience of using std::vector is that it
// automatically manages its memory, freeing it when needed.

// 9. Pointers and References:
//Discuss the difterence between pointers and references in C++ and
//provide scenarios where one might be preferred over the other.

// Пойнтърите присвояват адреса на дадена променлива, а референцията взима стойността от нея.
// Ако имаме функция, за която искаме да промени стойността на променлива използваме
//указатели, докато референцията я използваме за да достъпим вече съществуваща променлива и
// да работим директно с нея, а не с нейно копие.

// Pointers assign the address of a given variable, while a reference takes its value. If we
// have a function that needs to change the value of a variable, we use pointers, where as we
// use a reference to access an existing variable and work directly with it, not with a copy.

//10. Advanced Features:
//Explain the concept of templates in C++ and how they support generic programming. Include
//a simple example of a template function.

// Шаблоните в c++ използваме, когато за дадена програма не знаем какъв ще бъде типа данни и
// искаме да работи за различни такива.

// Templates in C++ are used when, for a given program, we don't know what the data type
// will be, and we want it to work with different types.

template <typename T>
T perimether(T a, T b) {
    return a + b;
}
