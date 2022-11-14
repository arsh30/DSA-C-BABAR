/*Bitwise Operator :
1) AND -> &
2) OR -> |
3) NOT -> ~
4) XOR -> ^
They all are work on BitLevel

1) AND(&) -> They all are work on Bit level not number level

            earlier we studied '&&' iske agr dono taraf condition true hogi to condition true hog otherwise nahi

       But in this '&' single  work on Bit level
       Eg: a = 2, b = 3

       binary of 2 is 1 0
       binary of 3 is 1 1
       output -> 1 0 ie 2

       TABLE ->
       X   |  Y  | OP
     0     |   0  | 0
     0     |   1  | 0
     1     |   0  | 0
     1     |   1  | 1 dono agr 1 hoga to hi 1 aayega

     Eg: a = 5, b = 7;
binary of 5 is 101;
binary of 5 is 111->((2 ^ 4) + (2 ^ 3) + (2 ^ 2) + (2 ^ 1) + (2 ^ 0));
->FORMULA FOR CONVERTING INTO BINARY;

2) OR OPERATOR (|) -> dono me se koi ik bhi true hoegi to chl jagega: Eg: first wali true hai agr to baki conditions check hi nhi krega
    direct andr ki stat execute hogi, Agr 1st condition false hai to hi next condtion check krega


       TABLE ->
       X   |  Y  | OP
     0     |   0  | 0
     0     |   1  | 1
     1     |   0  | 1
     1     |   1  | 1  agr  koi bhi 1 hogi to chl jaega

     eg: a= 3, b= 6;
first it will convert into binary->a = 11 b = 100;
then it will add 11 + 100 =>  output 7


3) NOT (~) => ye 0 ko 1 me convert krdega and 1 ko 0 me
NOTE -> Negative number ko print krwane ke liye hmesha 2s complement nikalte hai
1s compl -> are 0 ko 1 krdo and 1 ko 0 krdo
2s compl ->last me 1 bit add krdo

   TABLE ->
         X  | OP
         1  | 0
         0  | 1  [CONVERT KRDIYA 1 KO 0 ME AND 0 KO 1 ME ]


4) XOR OPERATOR =>Jo dono same bit hongi to output 0 aayega
    TABLE ->
       X   |  Y  | OP
     0     |   0  | 0
     0     |   1  | 1
     1     |   0  | 1
     1     |   1  | 0  [dono same nhi hone haiye and agr hue to output is 0 ]


LEFT SHIFT OPERATOR ---------------------->

Left shift -> jiski trf arrow hoga, eg: 5 >> 3 means right side hai arrow to 5 ko right shift krdo
means Jitni baar left shift krna hai utni baar [ multiply by 2 ] krdo

Eg: 3 << 2
binary of 3 is 00000.....011 and sari bits ko left side me do do shift krdo
00000......1100


Right Shift Operator -> right side point krega arrow, Means jitni baar shift krna hai number ko
[ utni baar divide by 2 krdo ]

Eg: 5 >> 2 [means right shift krdo digits ko 2 2 ]
00000..... 101
op ->  000000......01


NOTE -> 1)  <<,>> It is for +ve Numbers padding jo hai vo 0 se hogi
Means jab aage shift krege bits ko to jo new bit aayege vo 0 hongi

2) And agr bde number me left shift krdo to vo "NEGATIVE NUMBER CREATE KRDEGA "

-------------------------------

INCREMENT OPERATOR ->

1) i++ -> post increment [means jab pura expression evalute hojega tab value increment hogi]
2) ++i -> pre increment [means expression evalute hone se pehle hi value update hojgi ]

Eg: int i = 4;
int a = i++;
value of a? => 4 because pehle pura expression evaluate hua Mean assign hogyi a me value then update hui a ki value

int i = 3;
int a = ++i;
a? => output -> 4 pehle value increment hojegi then expression evaluate  hoga

DECREMENT OPERATOR ->

1) i-- -> Post decrement -> [means jab pura expression evalute hojega tab value decrement hogi]
2) --i -> Pre decrement ->  pre increment [means expression evalute hone se pehle hi value update hojgi ]


NOTE-> i += 1 or i = i + 1;
        i -= 1 or i= i - 1; //Both are same


  ---------------------------------------------------------------------------
  FOR LOOP ->

  Break -> Ye immediatelly loop se terminate krdega
  Conitunue -> ye loop ki 1 iteration skip krdega

  syntax -> for(initialise,condition,increment/decrement){ }

  we can do

*/
