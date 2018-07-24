#include "String.h"

/** Crea un string vacío  */
void strCrear (String &s)
{
    s = new char[1];
    s[0] = '\0';
}

/** Libera la memoria usada por el string */
 void strDestruir (String &s)
 {
    delete [] s;
    s = NULL;
}


/** Devuelve el largo del String s */
int strLar (String s)
{
    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}

/** Copia el contenido del string s2 en s1 */
void strCop (String &s1, String s2)
{
    int i = 0;
    int largo = strLar(s2)+1;
    delete [] s1;
    s1 = new char[largo];
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

/** Lee el string s desde teclado */
void strScan (String &s)
{
    String aux = new char[MAX];
    int i=0;
    char c;
    scanf(" %c",&c);
    while (c != '\n' && i < MAX)
    {
        aux[i]=c;
        i++;
        scanf("%c",&c);
    }
    aux[i] = '\0';
    strCop(s,aux);
    strDestruir(aux);
}

/** Imprime el string s por pantalla */
void strPrint (String s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
}
