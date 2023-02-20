#include <iostream> 
#include <fstream>

using namespace std;

int main() {

    int beginWord, endWord = 0;
    char str[256];
    char str2[256];

    char symbol[1];



    int symbolInStr = 0;
    int symbolInStr2 = 0;
    int i = 0;
    cout << str << endl;

const char* FileName = "File.txt";

 ifstream fin(FileName);

  if (!fin) {
    cout << "Файл не открыт!" << endl;
  }

  fin.getline(symbol,1);
  fin.getline(str,256);
  fin.getline(str2,256);

  cout<<symbol;
  cout<<str;
  cout<<str2;




  //проверки
  if ((fin.eof()) && (fin.fail())) { 
    cout << "Файл пуст!" << endl;
    fin.close();
  }

  if (fin.fail()) {
    cout << "Сбой чтения!" << endl;
    cout << "Проверьте корректность данных в файле!" << endl;
  }

    while (str[i] != '\0') {
        while ((str[i] != '\0') && ( str[i] == ' ') )
        {
            i++;
        }
        beginWord = i;
        while (str[i] != '\0' && str[i] != ' ') {
            i++;
        }
        endWord = i;
        for (int j = beginWord; j <= endWord; j++) {
            for(int k = beginWord; k <= endWord; k++){
        
            if (str[j] == symbol[0]){
                    symbolInStr++;
        }  
    }
    }
    }
    
//2
    i = 0;
    cout << str2 << endl;
     while (str2[i] != '\0') {
        while ((str2[i] != '\0') && ( str2[i] == ' ') )
        {
            i++;
        }
        beginWord = i;
        while (str2[i] != '\0' && str2[i] != ' ') {
            i++;
        }
        endWord = i;
        for (int j = beginWord; j <= endWord; j++) {
            if (str2[j] == symbol[0]){
                    symbolInStr2++;
            }
        }  
    
    }
    if (symbolInStr > symbolInStr2){
        cout<<str<<endl;
    }
    else{
        cout<<str2<<endl;

    }

    return 0;
}