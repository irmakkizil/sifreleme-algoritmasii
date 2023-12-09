//
//  main.c
//  ODEV D2
//
//  Created by Irmak KIZIL on 5.12.2023.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    
    printf("******SEZAR ALGORIMASINI BASLATINIZ******\n");
    char metin[100],desifre[100];
    int anahtar;

  
    printf("sifrelenmesini istediginiz metni giriniz= \n");
    gets(metin);//CUMLEDE KELIME ARASINDAKI BOSLUKLAR ICIN.

    printf("Anahtari giriniz= ");
    scanf("%d", &anahtar);
  
       
  
    for ( int i = 0; i <strlen(metin); i++) {
            //KUCUK HARFLERI TANIMLAMAK
            if (metin[i] >= 'a' && metin[i] <= 'z') {
               metin[i]= (metin[i] - 'a' + anahtar) % 26 + 'a';//INGILIZCE KLAVYE 26 HARFTIR VE ANAHTAR+METIN 26 YI GECINCE ALFABE BASA DONSUN.
            }
           //BUYUK HARFLERI TANIMLAMAK
            else if (metin[i] >= 'A' && metin[i] <= 'Z') {
                metin[i] = (metin[i] - 'A' + anahtar) % 26 + 'A';
            }
        desifre[i]=metin[i]-anahtar;
    }
   
    printf("olusan sifre= %s\n",metin);
printf("desifre= %s\n",desifre);
   
    return 0;
}


   


