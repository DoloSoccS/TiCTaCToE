#include <iostream>
#include <istream>
#include <array>
#include <string>
#include <stdlib.h>
using namespace std;
class Buttons{
  private:
  public:
  string whatevervector[9] = {"1", "2", "3", "4", "5", "6", "7", "8","9"};
  Buttons();
  ~Buttons();
  void newTurnX();
  void newTurnO();
  string topleft(string xo);
  string topcenter(string xo);
  string topright(string xo);
  string centerleft(string xo);
  string centercenter(string xo);
  string centerright(string xo);
  string bottomleft(string xo);
  string bottomcenter(string xo);
  string bottomright(string xo);
  void drawboard();
  void checkboard();
  int variable;
  
  };


int main(){

Buttons *newGame = new Buttons;
newGame->drawboard();

for(int i = 0; i < 9; i++){
newGame->newTurnX();
  if(newGame->variable > 8){
    break;
  }
newGame->newTurnO();
  if(newGame->variable > 8){
    break;
  }
};


cout << endl << "Game is Over!" << endl;








}

Buttons::Buttons(){}
Buttons::~Buttons(){}
int variable = -1;

void Buttons::newTurnX(){
  variable++;
  int spot;
  cout << "Place X on board..." << endl;
  cin >> spot;
  system("clear");

  switch (spot){
    case 1:
    topleft("X");
    break;

    case 2:
    topcenter("X");
    break;

    case 3:
    topright("X");
    break;

    case 4:
    centerleft("X");
    break;

    case 5:
    centercenter("X");
    break;

    case 6:
    centerright("X");
    break;

    case 7:
    bottomleft("X");
    break;

    case 8:
    bottomcenter("X");
    break;

    case 9:
    bottomright("X");
    break;
  } 
  checkboard();
  drawboard();
}

void Buttons::newTurnO(){
  variable++;
  int spot;
  cout << "Place O on board..." << endl;
  cin >> spot;
  system("clear");

  switch (spot){
    case 0:
    cout << endl;
    break;

    case 1:
    topleft("O");
    break;

    case 2:
    topcenter("O");
    break;

    case 3:
    topright("O");
    break;

    case 4:
    centerleft("O");
    break;

    case 5:
    centercenter("O");
    break;

    case 6:
    centerright("O");
    break;

    case 7:
    bottomleft("O");
    break;

    case 8:
    bottomcenter("O");
    break;

    case 9:
    bottomright("O");
    break;
  } 
  checkboard();
  drawboard();
  
  
}

void Buttons::drawboard(){  
    cout << "If no more spots are available, press '0'." << endl << endl << whatevervector[0] << "  |" << whatevervector[1] << "  |" << whatevervector[2] << endl << "---" << " " << "---" << " " << "---" << endl << whatevervector[3] << "  |" << whatevervector[4] << "  |" << whatevervector[5] << endl << "---"<< " " << "---" << " " << "---" << endl << whatevervector[6] << "  |" << whatevervector[7] << "  |" << whatevervector[8] << endl;
}

string Buttons::topleft(string xo){
    whatevervector[0] = xo;
    return *whatevervector;
    
}
  string Buttons::topcenter(string xo){
    whatevervector[1] = xo;
    return *whatevervector;
    
  }
  string Buttons::topright(string xo){
    whatevervector[2] = xo;
    return *whatevervector;
    
}
  string Buttons::centerleft(string xo){
    whatevervector[3] = xo;
    return *whatevervector;
    
}
  string Buttons::centercenter(string xo){
    whatevervector[4] = xo;
    return *whatevervector;
    
}
  string Buttons::centerright(string xo){
    whatevervector[5] = xo;
    return *whatevervector;
    
}
  string Buttons::bottomleft(string xo){
    whatevervector[6] = xo;
    return *whatevervector;
    
}
  string Buttons::bottomcenter(string xo){
    whatevervector[7] = xo;
    return *whatevervector;
    
}
  string Buttons::bottomright(string xo){
    whatevervector[8] = xo;
    return *whatevervector;
    
}


void Buttons::checkboard(){
 
  
  //TopCross
 if (whatevervector[0] == whatevervector[1] && whatevervector[0] == whatevervector[2]){
   if (whatevervector[0] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
   
 }
 //MiddleCross
 if (whatevervector[3] == whatevervector[4] && whatevervector[3] == whatevervector[5]){
   if (whatevervector[3] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }
 //BottomCross
 if (whatevervector[6] == whatevervector[7] && whatevervector[6] == whatevervector[8]){
  if (whatevervector[6] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }

 //LeftVertical
 if (whatevervector[0] == whatevervector[3] && whatevervector[0] == whatevervector[6]){
  if (whatevervector[0] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }
 
 //MiddleVertical
 if (whatevervector[1] == whatevervector[4] && whatevervector[1] == whatevervector[7]){
  if (whatevervector[1] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }

 //RightVertical
 if (whatevervector[2] == whatevervector[5] && whatevervector[2] == whatevervector[8]){
  if (whatevervector[2] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }
  //LeftToRightDiagonal
  if (whatevervector[0] == whatevervector[4] && whatevervector[0] == whatevervector[8]){
  if (whatevervector[0] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }
  
  //RightToLeftDiagonal
  if (whatevervector[2] == whatevervector[4] && whatevervector[2] == whatevervector[6]){
   if (whatevervector[2] == "X"){
     cout << "X Wins !! " << endl;
   }
   else {
     cout << "O Wins !!" << endl;
   }
   variable = 9;
 }
}
