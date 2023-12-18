#include <stdio.h>

void main() {
    int a;
    int ch;
    printf("\n\n^^^^^^^^^^^^^^^MUSIC GENRE SELECTION PROGRAM^^^^^^^^^^^^^^^ \n\n");
    do {
        printf("\nWHAT WOULD YOU PREFER? ^_^ \n\n");
        printf("\n1. CHILL\n2. HIP-HOP\n3. ROCK\n4. INDIAN CLASSICAL\n5. JAZZ\n6. AFRO\n7. BLUES\n8. K-POP\n");
        printf("\nEnter your choice: ");
        scanf("%d", &a);
        if(a==1)
        printf("\n1. Apna Bana Le ~ Arijit Singh \n2. Kesariya ~ Pritam & Arijit Singh\n3.Tum Kya Mile ~ Pritam & Arijit Singh\n4. Raabta ~ Pritam & Arijit Singh\n5. Saibo ~ Sachin-Jigar\n");
        else if(a==2)
        printf("\n1. Watch Out ~ Sidhu Moose Wala\n2. Still Rollin ~ Shubh\n3. Next Move ~ Simiran Kaur Dhadli\n4. Rubicon Drill ~ Prmish Verma\n5. Lalkara ~ Diljit Dosanjh\n");
        else if(a==3)
        printf("\n1. Your Side Of Town ~ The Killers\n2. Under You ~ Foo Fighters\n3. The Matrix ~ Mother Mother\n4. Modern Girl ~ Bleachers\n5. Overcome ~ Nothing But Thieves\n");
        else if(a==4)
        printf("\n1. Raag Bhairavi ~ Shubha Joshi\n2. Tarana Yaman ~ Ronkini Gupta\n3. Raga Khafi ~ Lakshmi Shankar\n4. Dhun Pahari ~ Shivkumar Sharma\n5. Ab Mori Baat ~ The Anirudh Varma\n");
        else if(a==5)
        printf("\n1. Eat More Fruits ~ Sweet Spot Lab\n2. Soul Mates ~ Smoke Room\n3. Delta ~ Stan Forebee \n4. Newport ~ Larry Dee\n5. Battery ~ Mbrs Gear\n");
        else if(a==6)
        printf("\n1. Ngozi ~ Crayon\n2. DND ~ Rema\n3. Holy Ghost ~ Omah Lay\n4. Daile ~ Joshua Baraka\n5. City Boys ~ Burna Boy\n");
        else if(a==7)
        printf("\n1. All Your Love ~ Sam Maghett\n2. My Babe ~ Little Walter\n3. Going Down ~ Freddie King\n4. Boom Boom ~ John Lee Hooker\n5. Help Me ~ Sonny Boy Williamson II\n");
        else if (a==8)
        printf("\n1. Bite Me ~ Enhypen\n2. Super ~ Seventeen\n3. Watch It ~ The Boyz\n4. Queencard ~ (G)I-Dle\n5. I Love My Body ~ Hwasa\n");   
        else {
            printf("Invalid choice\n");
        }

        printf("\n Enter 0 (NO) or 1 (YES): \n");
        scanf("%d\n\n", &ch);
    } while (ch == 1);

    printf("Exiting\n\n");
}

