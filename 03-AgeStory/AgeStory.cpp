/* 
 * AgeStory.cpp
 * Kain M. Snyder
 * Mon Aug 14 2023 0207 MDT
 * 
 * Tell a story using variables
 */

 #include <iostream>
 using namespace std;

 int main() {

    // Define Variables & Array

    double CharacterAge = 22.52;
    string CharacterName = "Malachi";
    string SideCharacters[2] = {"Jerry", "Brandon"};

    // Tell the story

    cout << "There once was a man named ";
    cout << CharacterName;
    cout << ". \n He was ";
    cout << CharacterAge;
    cout << " years old. \n He was friends with ";
    cout << SideCharacters[0];
    cout << " and ";
    cout << SideCharacters[1];
    cout << ". ";
    cout << SideCharacters[0]; 
    cout << " & ";
    cout << SideCharacters[1]; 
    cout << " encouraged him to get back into programming. ";
    cout << "\n This is his test program he wrote to learn.";

 }