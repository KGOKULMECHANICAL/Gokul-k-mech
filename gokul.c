#include <stdio.h>

int a[10];

int b[10];

void merging(int LOW, int MID, int HIGH) {

   int l1, l2, i;



   for(l1 = LOW, l2 = MID + 1, i = LOW; l1 <= MID && l2 <= HIGH; i++) {

      if(a[l1] <= a[l2])

         b[i] = a[l1++];

      else

         b[i] = a[l2++];

   }

   

   while(l1 <= MID)    

      b[i++] = a[l1++];



   while(l2 <= HIGH)   

      b[i++] = a[l2++];



   for(i = LOW; i <= HIGH; i++)

      a[i] = b[i];

}



void sort(int LOW, int HIGH) {

   int MID;

   

   if(LOW < HIGH) {

      MID = (LOW + HIGH) / 2;

      sort(LOW, MID);

      sort(MID+1, HIGH);

      merging(LOW, MID, HIGH);

   } else { 

      return;

   }   

}



int main(void) { 

   int i,n;

scanf("%d\n",&n);

for(i = 0; i <n; i++)

{

      scanf("%d\n",&a[i]);

}

sort(0, n);

for(i = 0; i <n; i++)

   {

      printf("%d\n",a[i]);

   }

return 0;

	

}
