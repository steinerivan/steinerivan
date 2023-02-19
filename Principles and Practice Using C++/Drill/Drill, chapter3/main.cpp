//
//  main.cpp
//  Drill, chapter3
//
//  Created by Ivan Voloshyn on 22.01.23.
//

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    
    cout << "Введите имя адресата!\n";
    string first_name;
    cin >> first_name;
    cout << "Дорогой " << first_name << ",";
    cout << "как дела?\n" <<  "У меня все хорошо. Я скучаю по тебе.";
    string friend_name;
    cout << "\nВведите имя приятеля\n";
    cin >> friend_name;
    cout << "\nДавно ли ты встречал " << friend_name << "?";
    char friend_sex = 0;
    cout << "\nВведите значение m, если ваш друг - мужчина, и f - если женщина\n";
    cin >> friend_sex;
    if(friend_sex=='m'){
        cout << "\nЕсли ты увидишь " << friend_name << ", пожалуйста попроси его позвонить мне";
    }
    if(friend_sex=='f'){
        cout << "Если ты увидишь " << friend_name << ", пожалуйста попроси ее позвонить мне\n";
        
    }
    int age;
    cout << "\nВведите возраст адресата: ";
    cin >> age;
    if(age<=0||age>=110){
        throw runtime_error("\nты шутишь!");
    }
    else{
        cout << "\nЯ слышал, ты только что отметил день рождения и тебе исполнилось " << age << " лет.";
    }
    if(age<12){
        cout << "На следующий год тебе исполнится " << ++age << " лет.";
    }
    if(age>70){
        cout << "Я надеюсь, ты не скучаешь на пенсии.";
    }
    cout << "\nИскренне твой\n\n\nIvan\n";
    return 0;
}
