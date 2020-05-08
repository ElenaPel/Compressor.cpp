#include <fstream>
int main()
{
    int i=0,c;/*Это переменная, в которую нужно считывать символы*/
    char f[256];
    const char *file="C:\\Users\\User\\Desktop\\Compressor\\1.txt";/*Путь к файлу*/
    std::ifstream in(file);/*Открыли для чтения файл*/
    while((i=in.get()) !=EOF) {
        f[i]=c;
        i++;
    }
    return 0;
}
   
