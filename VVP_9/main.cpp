//
//  main.cpp
//  VVP_9
//
//  Created by Роберт Скиталинский on 16.12.2021.
//

#include <iostream>
#include <math.h>
using namespace std;
/*int main(){
    int n,m;
    cout << "Введите кол-во секунд: ";
    cin >> n;
    m = n % 60;
    cout << m << "\n";
    return 0;
}

int main(){
    int k,a;
    cout << "Введите число 1 <= k <= 365: ";
    cin >> k;
    a = k % 7;
    cout << a;
}

int main(){
    int k,n,m;
    cout << "Введите число  1 <= k <= 365 ";
    cin >> k;
    cout << "Введите число 1 <= n <= 7 ";
    cin >> n;
    m = (k + n) % 7;
    cout << m - 1;
    return 0;
}

int main(){
    int a,b,c,S,e,f,g,h,m;
    cout << " Введите А: ";
    cin >> a;
    cout << " Введите В: ";
    cin >> b;
    cout << "Введите С: ";
    cin >> c;
    S = a * b;
    m = pow(c,2);
    e = a / c;
    f = b / c;
    g = e * f;
    h = S - (g * m);
    cout << "Количесво квадратов: " << g << " Незанятая часть прямоугольника" << h;
    return 0;
}
*/
int main(){
    int g,l;
    cout << " Введите год: ";
    cin >> g;
    l = g / 100;
    cout << "Столетие: " << l + 1 << "\n";
    return 0;
}
