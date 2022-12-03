
#include <iostream>
#include <math.h>
using namespace std;


typedef struct {
    int heur;
    int min;
}Heures;
Heures inti(int h,int m){
    Heures H;
    while (m>=60){
        m=m-60;
        h=h+1;
    }
    while (h>=24){
       h=h-24;
    }

    H.heur=h;
    H.min=m;
    return H;
}
Heures inti(int m){
    Heures HH;
    int h=0;
    while (m>=60){
        m=m-60;
        h=h+1;
    }
    while (h>=24){
        h=h-24;
    }

    HH.heur=h;
    HH.min=m;
    return HH;
}
int GetMin(Heures H){
    int m=H.min+H.heur*60;
    return m;
}
Heures AddHeur(Heures H,int h){
   H.heur= H.heur+h;
    while (H.heur>=24){
        H.heur=H.heur-24;
    }
    return H;

}
Heures AddMin(Heures H,int m){
    H.min= H.min+m;
    while (H.min>=60){
        H.min=H.min-60;
        H.heur++;
    }
    while (H.heur>=24){
        H.heur=H.heur-24;
    }
    return H;

}
int duree (Heures H1,Heures H2)
{
   int mt=GetMin(H1)-GetMin(H2);
    return abs(mt);
}
bool precede(Heures H1,Heures H2){
    int mt=GetMin(H1)-GetMin(H2);
    if(mt<0)
        return true;
}
void affiche(Heures H){
    cout<<H.heur<<" H : "<<H.min<<" M"<<endl;
}


int main() {
Heures b= inti(35,90);
Heures c= inti(200);
int d =GetMin(c);
int dr=duree(c,b);
    affiche(c);
    cout<<d<<endl<<dr<<endl;
}

