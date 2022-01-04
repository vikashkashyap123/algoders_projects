//random selection game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     /* cow milk=40
        nya kapra=30
        snake bite=20
        acche dost=10
        bahat thand hai=0 
        */
        
     srand(time(0));

      int a,b,c,d,e; 
      a =rand()%40+1;
      b =rand()%30+1;
      c =rand()%20+1;
      d =rand()%10+1;
      e =rand()%1;
      
       printf("a=%d\n",a);
       printf("b=%d\n",b);
       printf("c=%d\n",c);
       printf("d=%d\n",d);
       printf("e=%d\n",e);
       

       if(a==40)
       printf("drink cow milk every day.\n");
       
       else if (a<40&&b==30)
       printf("tumhe mila ek nya kapra.\n");
           
       else if (b<30&&c==20)
       printf("tumhe laga snake bite ka dunk.\n");
              
       else if (c<20&&d==10)
       printf("acche dost banane se life ka mja or badh jata h.\n");
                    
       else if (d<10&&e==0)
       printf("bahat thand hai, ajj se nahana band.\n");
       
       else 
       printf("tere bas ki baat nhi.\n");
       
       return 0;
       
}