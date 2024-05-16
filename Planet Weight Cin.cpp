#include <iostream>
using namespace std;

int main() {
  double weight;
  int x;

cout<< "How much do you weight?\n";
cin >> weight;
cout << "So you weigh " << weight << " lbs\n";
cout << "Pick which planet you want to fight on:\n";
cout << "1. Mercury 2. Venus  3. Mars\n";
cout << "4. Jupiter 5. Saturn 6. Uranus\n";
cout << "7. Neptune\n";

cin >> x;

if (x == 1){
  weight = weight * 0.38;
}

else if (x == 2){
  weight = weight * 0.91;
}

else if (x == 3){
  weight = weight * 0.38;
}

else if (x == 4){
  weight = weight * 2.34;
}

else if (x == 5){
  weight = weight * 1.06;
}

else if (x == 6){
  weight = weight * 0.92;
}

else if (x == 7){
  weight = weight * 1.19;
}
cout << "Your weight is " << weight << " lbs! \n";

  }
  
  
  
  
  
  
  
  
  
