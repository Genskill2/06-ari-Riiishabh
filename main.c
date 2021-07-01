#include<string.h>
#include<math.h>
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
string ari(string a)
{
float score;
int c=0,w=0,s=0;
for(int i=0;a[i]!='\0';++i)
{
if(isalnum(a[i]))
c++;
if(a[i]==' ')
w++;
if((a[i]=='.')||(a[i]=='!')||(a[i]=='?'))
s++;
}
score=(4.71*(float)c/(float)w)+(0.5*(float)w/(float)s)-21.43;
score=(int) ceil(score);
if(score==1)
return "Kindergarten";
 else if(score==2) 
return "First/Second Grade";
else if(score==3)
return "Third Grade";
 else if(score==4)
return "Fourth Grade";
else if(score==5)
return "Fifth Grade";
  else if(score==6)
return "Sixth Grade";
      else if(score==7)
return "Seventh Grade";
       else if(score==8)
return "Eighth Grade";
     else if(score==9)
return "Ninth Grade";
     else if(score==10)
return "Tenth Grade";
      else if(score==11)
return "Eleventh Grade";
       else if(score==12)
return "Twelfth grade";
else if(score==13)
return "College student";
     else
return "Professor";
       
 }


void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
}


