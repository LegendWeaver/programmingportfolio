#include <iostream>
#include <random>
#include <string>
using namespace std;

int main(){
  srand(rand() ^ time(0));
  int ranPrefix = rand() % 21;
  int ranSuffix = rand() % 21;
  int ranRoot = rand() % 21;
  int ranPreDef = rand() % 3;
  int ranDef = rand() % 3;
  int ranPostDef = rand() % 5;
  

  //create a list of 20 prefixes

  string prefixes[20] = {"un","con","de","ultra","pre","post","anti","semi","psuedo","re","micro","macro","non","dis","sub","trans","over","under","mid","mis"};

  //create a list of 20 suffixes
  string suffixes[20] = {"ology","mancy","ment","able","y","s","ness","ful","ly","less","ed","or","ing","er","est","tion","ty","ous","ial","ic"};

  
  //create a list of 20 roots
  string roots[20] = {"circum","audi","fort","ject","mort","rupt","script","spect","sent","part","port","formi","mal","mit","duct","graph","nym","phon","tech","therm"};

  //assemble the word

  string word = prefixes[ranPrefix] + roots[ranRoot] + suffixes[ranSuffix];

  //create a list of predefinitions
  string preDef[3] = {"Originating from old English, this word means", "This word means", "Used by only the most intelligent scholars, this word dennotes"};

  //create a list of definitions
  string def[3] = {"the act of existing,", "uh...something,", "a person who is not intelligent enough to understand the world,"};

  //create a list of postdefinitions
  string postDef[5] = {"but this word has fallen out of favor in recent years.", "and is most commonly used by trendy high school students.","but it takes a high level of intelligence to truly understand this word", "but is not used often, because I just made it up.", "but you will be laughed at if you use this word."};

  //generate defintion
  string definition = preDef[ranPreDef] + " " + def[ranDef] + " " + postDef[ranPostDef];
  
  cout << "Your new random word is " << word << "\n\n" << definition << endl;
}