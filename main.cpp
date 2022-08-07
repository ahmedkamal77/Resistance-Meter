#include <iostream>
#include <string>
using namespace std;
void carbonic ();
void surface () ;
void E_series () ;
int main()
{
    cout <<"\t\t\t \" -this program calculate the value of resistance... \""<<endl;
    cout <<"\t\t\t ------------------------------------------------------"<<endl<<endl;

    int n;
    char a;
    do
    {
        cout<<" 1-\"carbonic.\" \n 2-\"surface.\" \n 3-\"E-series.\""<<endl;
        cin >>n;
        switch(n)
        {
        case 1:
            carbonic();
            break;
        case 2:
            surface() ;
            break;
        case 3:
            E_series () ;
            break;
        default:
            cout << " you enter wrong choice "<<endl;
        }
        cout <<"Do you need to select option again? (Yes _ No)"<<endl;
        cin >>a;
    }while(a=='Y'||a=='y');
    return 0;
}

//carbonic...

void carbonic ()
{
    int b,R=1,T,R1,R2,TCR;
    //BANDS
    int x,y,z,c,o,p;
    cout<<" 1-\"4-BAND RESISTORS.\" \n 2-\"5-BAND RESISTORS.\" \n 3-\"6-BAND RESISTORS.\""<<endl;
    cin >>b;
    cout << "\t\t\t\t  |------------|-----------|-----------|"<<endl;
    cout << "\t\t\t\t  | 1-BLACK.   | 2-BROWN.  | 3-RED.    |"<<endl;
    cout << "\t\t\t\t  |------------|-----------|-----------|"<<endl;
    cout << "\t\t\t\t  | 4-ORANGE.  | 5-YELLOW. | 6-GREEN.  |"<<endl;
    cout << "\t\t\t\t  |------------|-----------|-----------|"<<endl;
    cout << "\t\t\t\t  | 7-BLUE.    | 8-VIOLET. | 9-GREY.   |"<<endl;
    cout << "\t\t\t\t  |------------|-----------|-----------|"<<endl;
    cout << "\t\t\t\t  | 10-WHITE.  | 11-GOLD.  | 12-SILVER.| "<<endl;
    cout << "\t\t\t\t  |------------|-----------|-----------|"<<endl<<endl;

    // 4-BAND RESISTORS.

    if (b==1)
    {
        cout <<" please enter the number of the first color according to the previous table "<<endl;
        do
        {
            cin >> x ;
        }
        while(x<1||x>10);
        switch(x)
        {
        case 1:
            R*=0;
            break;
        case 2:
            R*=10;
            break;
        case 3:
            R*=20;
            break;
        case 4:
            R*=30;
            break;
        case 5:
            R*=40;
            break;
        case 6:
            R*=50;
            break;
        case 7:
            R*=60;
            break;
        case 8:
            R*=70;
            break;
        case 9:
            R*=80;
            break;
        case 10:
            R*=90;
            break;
        default:
            cout <<" the first color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the second color according to the previous table "<<endl;
        do
        {
            cin >> y ;
        }
        while(y<1||y>10);
        switch(y)
        {
        case 1:
            R+=0;
            break;
        case 2:
            R+=1;
            break;
        case 3:
            R+=2;
            break;
        case 4:
            R+=3;
            break;
        case 5:
            R+=4;
            break;
        case 6:
            R+=5;
            break;
        case 7:
            R+=6;
            break;
        case 8:
            R+=7;
            break;
        case 9:
            R+=8;
            break;
        case 10:
            R+=9;
            break;
        default:
            cout <<" the second color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the third color according to the previous table "<<endl;
        do
        {
            cin  >> z ;
        }
        while(z<1||11>z>7||z>12);
        switch(z)
        {
        case 1:
            R*=1;
            break;
        case 2:
            R*=10;
            break;
        case 3:
            R*=100;
            break;
        case 4:
            R*=1000;
            break;
        case 5:
            R*=10000;
            break;
        case 6:
            R*=100000;
            break;
        case 7:
            R*=1000000;
            break;
        case 11:
            R*=0.1;
            break;
        case 12:
            R*=0.01;
            break;
        default:
            cout <<" the third color can't be VIOLET or GREY or WHITE "<<endl;
        }

        cout <<" please enter the number of the forth color according to the previous table "<<endl;
        cin >> c ;
        switch (c)
        {
        case 2:
            T=1;
            break;
        case 3:
            T=2;
            break;
        case 6:
            T=0.5;
            break;
        case 7:
            T=0.25;
            break;
        case 8:
            T=0.1;
            break;
        case 11:
            T=5;
            break;
        case 12:
            T=10;
            break;
        default:
            cout << " the fourth number can't be BLACK or ORANGE or YELLOW or GREY or WHITE "<<endl;
        }
        cout << " the exact resistance = "<< R << " ohm " <<endl<<endl;
        cout << " the tolerance = "<< T << "%" <<endl<<endl;
        cout << " the resistance = " << R+R*T/100 << " ohm " << " or " << R-R*T/100 << " ohm " <<endl<<endl;
    }

// 5-BAND RESISTORS

    if (b==2)
    {
        cout <<" please enter the number of the first color according to the previous table "<<endl;
        do
        {
            cin >> x ;
        }
        while(x<1||x>10);
        switch(x)
        {
        case 1:
            R*=0;
            break;
        case 2:
            R*=100;
            break;
        case 3:
            R*=200;
            break;
        case 4:
            R*=300;
            break;
        case 5:
            R*=400;
            break;
        case 6:
            R*=500;
            break;
        case 7:
            R*=600;
            break;
        case 8:
            R*=700;
            break;
        case 9:
            R*=800;
            break;
        case 10:
            R*=900;
            break;
        default:
            cout <<" the first color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the second color according to the previous table "<<endl;
        do
        {
            cin >> y ;
        }
        while(y<1||y>10);
        switch(y)
        {
        case 1:
            R+=0;
            break;
        case 2:
            R+=10;
            break;
        case 3:
            R+=20;
            break;
        case 4:
            R+=30;
            break;
        case 5:
            R+=40;
            break;
        case 6:
            R+=50;
            break;
        case 7:
            R+=60;
            break;
        case 8:
            R+=70;
            break;
        case 9:
            R+=80;
            break;
        case 10:
            R+=90;
            break;
        default:
            cout <<" the second color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the third color according to the previous table "<<endl;
        do
        {
            cin >> z ;
        }
        while(z<1||z>10);
        switch(z)
        {
        case 1:
            R+=0;
            break;
        case 2:
            R+=1;
            break;
        case 3:
            R+=2;
            break;
        case 4:
            R+=3;
            break;
        case 5:
            R+=4;
            break;
        case 6:
            R+=5;
            break;
        case 7:
            R+=6;
            break;
        case 8:
            R+=7;
            break;
        case 9:
            R+=8;
            break;
        case 10:
            R+=9;
            break;
        default:
            cout <<" the third color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the forth color according to the previous table "<<endl;
        do
        {
            cin  >> c ;
        }
        while(c<1||11>c>7||c>12);
        switch(c)
        {
        case 1:
            R*=1;
            break;
        case 2:
            R*=10;
            break;
        case 3:
            R*=100;
            break;
        case 4:
            R*=1000;
            break;
        case 5:
            R*=10000;
            break;
        case 6:
            R*=100000;
            break;
        case 7:
            R*=1000000;
            break;
        case 11:
            R*=0.1;
            break;
        case 12:
            R*=0.01;
            break;
        }
        cout <<" please enter the number of the fifth color according to the previous table "<<endl;
        /* do
         {
             cin  >> o ;
         }while(o<2||3<o<6||8<o<11||o>12);*/
        cin >> o ;
        switch (o)
        {
        case 2:
            T=1;
            break;
        case 3:
            T=2;
            break;
        case 6:
            T=0.5;
            break;
        case 7:
            T=0.25;
            break;
        case 8:
            T=0.1;
            break;
        case 11:
            T=5;
            break;
        case 12:
            T=10;
            break;
        default:
            cout << " the fifth number can't be BLACK or ORANGE or YELLOW or GREY or WHITE "<<endl;
        }
        cout << " the exact resistance = "<< R << " ohm " <<endl<<endl;
        cout << " the tolerance = "<< T << "%" <<endl<<endl;
        cout << " the resistance = " << R+R*T/100 << " ohm " << " or " << R-R*T/100 << " ohm " <<endl<<endl;
    }

    //6-BAND RESISTORS.

    if (b==3)
    {
        cout <<" please enter the number of the first color according to the previous table "<<endl;
        do
        {
            cin >> x ;
        }
        while(x<1||x>10);
        switch(x)
        {
        case 1:
            R*=0;
            break;
        case 2:
            R*=100;
            break;
        case 3:
            R*=200;
            break;
        case 4:
            R*=300;
            break;
        case 5:
            R*=400;
            break;
        case 6:
            R*=500;
            break;
        case 7:
            R*=600;
            break;
        case 8:
            R*=700;
            break;
        case 9:
            R*=800;
            break;
        case 10:
            R*=900;
            break;
        default:
            cout <<" the first color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the second color according to the previous table "<<endl;
        do
        {
            cin >> y ;
        }
        while(y<1||y>10);
        switch(y)
        {
        case 1:
            R+=0;
            break;
        case 2:
            R+=10;
            break;
        case 3:
            R+=20;
            break;
        case 4:
            R+=30;
            break;
        case 5:
            R+=40;
            break;
        case 6:
            R+=50;
            break;
        case 7:
            R+=60;
            break;
        case 8:
            R+=70;
            break;
        case 9:
            R+=80;
            break;
        case 10:
            R+=90;
            break;
        default:
            cout <<" the second color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the third color according to the previous table "<<endl;
        do
        {
            cin >> z ;
        }
        while(z<1||z>10);
        switch(z)
        {
        case 1:
            R+=0;
            break;
        case 2:
            R+=1;
            break;
        case 3:
            R+=2;
            break;
        case 4:
            R+=3;
            break;
        case 5:
            R+=4;
            break;
        case 6:
            R+=5;
            break;
        case 7:
            R+=6;
            break;
        case 8:
            R+=7;
            break;
        case 9:
            R+=8;
            break;
        case 10:
            R+=9;
            break;
        default:
            cout <<" the third color can't be GOLD or SILVER "<<endl;
        }
        cout <<" please enter the number of the forth color according to the previous table "<<endl;
        do
        {
            cin  >> c ;
        }
        while(c<1||11>c>7||c>12);
        switch(c)
        {
        case 1:
            R*=1;
            break;
        case 2:
            R*=10;
            break;
        case 3:
            R*=100;
            break;
        case 4:
            R*=1000;
            break;
        case 5:
            R*=10000;
            break;
        case 6:
            R*=100000;
            break;
        case 7:
            R*=1000000;
            break;
        case 11:
            R*=0.1;
            break;
        case 12:
            R*=0.01;
            break;
        }
        cout <<" please enter the number of the fifth color according to the previous table "<<endl;
        cin >> o ;
        switch (o)
        {
        case 2:
            T=1;
            break;
        case 3:
            T=2;
            break;
        case 6:
            T=0.5;
            break;
        case 7:
            T=0.25;
            break;
        case 8:
            T=0.1;
            break;
        case 11:
            T=5;
            break;
        case 12:
            T=10;
            break;
        default:
            cout << " the fifth number can't be BLACK or ORANGE or YELLOW or GREY or WHITE "<<endl;
        }
        cout << " please enter the number of sixth color according to the previous table " << endl ;
        cin >> p ;
        switch(p)
        {
        case 2:
            TCR=100;
            break;
        case 3:
            TCR=50;
            break;
        case 4:
            TCR=15;
            break;
        case 7:
            TCR=10;
            break;
        case 8:
            TCR=5;
            break;
        case 10:
            TCR=1;
            break;
        default:
            cout << " the sixth color can't be BLACK or YELLOW or GREEN or GREY or GOLD or SILVER " <<endl;
        }

        cout << " the exact resistance = "<< R << " ohm " <<endl<<endl;
        cout << " the tolerance = "<< T << "%" <<endl<<endl;
        cout << " the resistance = " << R+R*T/100 << " ohm " << " or " << R-R*T/100 << " ohm " <<endl<<endl;
        cout << " the temperature coefficient of resistance = " << TCR << " ppm/úc " << " \"ppm = parts per million per degrees Celsius \" "<<endl<<endl;
    }
}

//surface....

void surface ()
{
  int b,T;
  string R;
  //BANDS..
  char x,y,z,c,o;
  cout<<" 1-\"3-BAND RESISTORS.\" \n 2-\"4-BAND RESISTORS.\" \n "<<endl;
  cin >> b ;

  //3-BAND....

  if (b==1)
  {
    cout << " please enter the first symbol. "<<endl;
    cin >> x ;
    if (x=='M'||x=='m'||x=='K'||x=='k'||x=='R'||x=='r'||x=='L'||x=='l')
    {
      R='.';
    }
    else if(x==':')
    {
        R='8';
    }
    else
    {
      R=x;
    }
  cout << " please enter the second symbol. " <<endl;
  cin >> y ;
  if (y=='M'||y=='m'||y=='K'||y=='k'||y=='R'||y=='r'||y=='L'||y=='l')
    {
       R+='.';
    }
    else if(y==':')
    {
        R+='8';
    }
    else
    {
      R+=y;
    }
    cout << " please enter the third symbol. " <<endl;
    cin >> z ;
   if (x=='M'||x=='m'||x=='K'||x=='k'||x=='R'||x=='r'||x=='L'||x=='l'||y=='M'||y=='m'||y=='K'||y=='k'||y=='R'||y=='r'||y=='L'||y=='l')
    {
        R+=z;
    }

    else if (z=='1')
        R+='0';
    else if (z=='2')
        for (int i=1;i<=2;i++)
        R+='0';
    else if (z=='3')
        for (int i=1;i<=3;i++)
        R+='0';
    else if (z=='4')
    for (int i=1;i<=4;i++)
        R+='0';
    else if (z=='5')
    for (int i=1;i<=5;i++)
        R+='0';
    else if (z=='6')
    for (int i=1;i<=6;i++)
        R+='0';
    else if (z=='7')
    for (int i=1;i<=7;i++)
        R+='0';
    else if (z=='8'||z==':')
    for (int i=1;i<=8;i++)
        R+='0';
    else if (z=='9')
    for (int i=1;i<=9;i++)
        R+='0';

    cout << " please enter the letter code or press NO if there isn't letter code " <<endl;
    cin >> c ;
    if (c=='A'||c=='a')
        T=0.05;
    else if (c=='B'||c=='b')
        T=0.1;
    else if (c=='C'||c=='c')
        T=0.25;
    else if (c=='D'||c=='d')
        T=0.5;
    else if (c=='F'||c=='f')
        T=1;
    else if (c=='G'||c=='g')
        T=2;
    else if (c=='H'||c=='h')
        T=3;
    else if (c=='J'||c=='j')
        T=5;
    else if (c=='K'||c=='k')
        T=10;
    else if (c=='L'||c=='l')
        T=15;
    else if (c=='M'||c=='m')
        T=20;
    else
        T=5;
    if (x=='M'||x=='m'||y=='M'||y=='m')
        cout << " the exact value of the resistance = " <<R<<" MEGA.Ohm "<<endl<<endl;
    else  if (x=='K'||x=='k'||y=='K'||y=='k')
        cout << " the exact value of the resistance = " <<R<<" KELO.Ohm "<<endl<<endl;
    else  if (x=='R'||x=='r'||y=='R'||y=='r')
        cout << " the exact value of the resistance = " <<R<<" Ohm "<<endl<<endl;
    else  if (x=='L'||x=='l'||y=='L'||y=='l')
        cout << " the exact value of the resistance = " <<R<<" mille.Ohm "<<endl<<endl;
     else
        cout << " the exact value of the resistance = " <<R<<" Ohm "<<endl<<endl;
     cout << " the tolerance = "<<T<<"%"<<endl<<endl;


  }//3-BAND..


//4-BAND...

  if (b==2)
  {

     cout << " please enter the first symbol. "<<endl;
    cin >> x ;
    if (x=='M'||x=='m'||x=='K'||x=='k'||x=='R'||x=='r'||x=='L'||x=='l')
    {
      R='.';
    }
    else if(x==':')
    {
        R='8';
    }
    else
    {
      R=x;
    }
  cout << " please enter the second symbol. " <<endl;
  cin >> y ;
  if (y=='M'||y=='m'||y=='K'||y=='k'||y=='R'||y=='r'||y=='L'||y=='l')
    {
       R+='.';
    }
    else if(y==':')
    {
        R+='8';
    }
    else
    {
      R+=y;
    }
      cout << " please enter the third symbol. " <<endl;
  cin >> z ;
  if (z=='M'||z=='m'||z=='K'||z=='k'||z=='R'||z=='r'||z=='L'||z=='l')
    {
       R+='.';
    }
    else if(z==':')
    {
        R+='8';
    }
    else
    {
      R+=z;
    }
    cout << " please enter the forth symbol. " <<endl;
    cin >> c ;
   if (x=='M'||x=='m'||x=='K'||x=='k'||x=='R'||x=='r'||x=='L'||x=='l'||y=='M'||y=='m'||y=='K'||y=='k'||y=='R'||y=='r'||y=='L'||y=='l'||z=='M'||z=='m'||z=='K'||z=='k'||z=='R'||z=='r'||z=='L'||z=='l')
    {
        R+=c;
    }

    else if (c=='1')
        R+='0';
    else if (c=='2')
        for (int i=1;i<=2;i++)
        R+='0';
    else if (c=='3')
        for (int i=1;i<=3;i++)
        R+='0';
    else if (c=='4')
    for (int i=1;i<=4;i++)
        R+='0';
    else if (c=='5')
    for (int i=1;i<=5;i++)
        R+='0';
    else if (c=='6')
    for (int i=1;i<=6;i++)
        R+='0';
    else if (c=='7')
    for (int i=1;i<=7;i++)
        R+='0';
    else if (c=='8'||z==':')
    for (int i=1;i<=8;i++)
        R+='0';
    else if (c=='9')
    for (int i=1;i<=9;i++)
        R+='0';

    cout << " please enter the letter code or press NO if there isn't letter code " <<endl;
    cin >> o ;
    if (o=='A')
        T=0.05;
    else if (o=='B')
        T=0.1;
    else if (o=='C')
        T=0.25;
    else if (o=='D')
        T=0.5;
    else if (o=='F')
        T=1;
    else if (o=='G')
        T=2;
    else if (o=='H')
        T=3;
    else if (o=='J')
        T=5;
    else if (o=='K')
        T=10;
    else if (o=='L')
        T=15;
    else if (o=='M')
        T=20;
    else
        T=1;
    if (x=='M'||x=='m'||y=='M'||y=='m'||z=='M'||z=='m')
        cout << " the exact value of the resistance = " <<R<<" MEGA.Ohm "<<endl<<endl;
    else  if (x=='K'||x=='k'||y=='K'||y=='k'||z=='K'||z=='k')
        cout << " the exact value of the resistance = " <<R<<" KELO.Ohm "<<endl<<endl;
    else  if (x=='R'||x=='r'||y=='R'||y=='r'||z=='R'||z=='r')
        cout << " the exact value of the resistance = " <<R<<" Ohm "<<endl<<endl;
    else  if (x=='L'||x=='l'||y=='L'||y=='l'||z=='L'||z=='l')
        cout << " the exact value of the resistance = " <<R<<" mille.Ohm "<<endl<<endl;
     else
        cout << " the exact value of the resistance = " <<R<<" Ohm "<<endl<<endl;
     cout << " the tolerance = "<<T<<"%"<<endl<<endl;

  }//4-BAND..

}//surface..


// E-series code.....


void E_series ()
{
   int T , b ;
   int x,y,r,R;
   char z;

   cout << " 1-\"E-3\" \n 2-\"E-6\" \n 3-\"E-12\" \n 4-\"E-24\" \n 5-\"E-48\" \n 6-\"E-96\" \n " ;
   cin >>b;
         cout << " please enter the first number " << endl;
      cin >> x ;
      r = x * 10  ;
      cout << " please enter the second number " << endl ;
      cin >> y ;
      r += y ;
 ///////////////
   switch (b)
   {

     //E-3...start.....

     case 1:
     T=20;

   switch (r)
   {
      case  1:
      R= 10;
      break ;
      case 2 :
      R=  22 ;
      break ;
      case  3:
      R= 47;
      break ;
    default:
        cout <<" Out of range... "<<endl;
   }


     break ;


   //E-3....end.....



   //E-6...start.....


     case 2:
     T=10;

       switch (r)
   {
      case  1:
      R= 10;
      break ;
      case 2 :
      R=    15 ;
      break ;
      case  3:
      R= 22;
      break ;
      case  4:
      R= 33;
      break ;
      case  5:
      R= 47;
      break ;
      case 6 :
      R= 68;
      break ;
   }
     break ;


  //E-6...end.....



  //E-12....start....



     case 3:
     T=10;

      switch (r)
   {
      case  1:
      R= 10;
      break ;
      case 2 :
      R=    12;
      break ;
      case  3:
      R= 15;
      break ;
      case  4:
      R= 18;
      break ;
      case  5:
      R= 22;
      break ;
      case 6 :
      R= 27;
      break ;
      case  7:
      R= 33;
      break ;
      case  8:
      R= 39;
      break ;
      case  9:
      R= 47;
      break ;
      case  10:
      R= 56;
      break ;
      case  11:
      R= 68;
      break ;
      case  12:
      R= 82;
      break ;
   }

     break ;


  //E-12....end....



  //E-24....start....



     case 4:
     T=5;

      switch (r)
   {
      case  1:
      R= 10;
      break ;
      case 2 :
      R=  11 ;
      break ;
      case  3:
      R= 12;
      break ;
      case  4:
      R= 13;
      break ;
      case  5:
      R= 15;
      break ;
      case 6 :
      R= 16;
      break ;
      case  7:
      R= 18;
      break ;
      case  8:
      R= 20;
      break ;
      case  9:
      R= 22;
      break ;
      case  10:
      R= 24;
      break ;
      case  11:
      R= 27;
      break ;
      case  12:
      R= 30;
      break ;
      case 13 :
      R= 33;
      break ;
      case  14:
      R= 36;
      break ;
      case  15:
      R= 39;
      break ;
      case 16 :
      R= 43;
      break ;
      case  17:
      R= 47;
      break ;
      case  18:
      R= 51;
      break ;
      case 19 :
      R= 56;
      break ;
      case  20:
      R= 62;
      break ;
      case  21:
      R= 68;
      break ;
      case  22:
      R= 75;
      break ;
      case  23:
      R= 82;
      break ;
      case  24:
      R= 91;
      break ;
   }


     break ;


  //E-24...end...



  //E-48.....start....


     case 5:
     T=2;

      switch (r)
   {
      case  1:
      R= 10;
      break ;
      case 2 :
      R=   10.5 ;
      break ;
      case  3:
      R= 11;
      break ;
      case  4:
      R= 11.5;
      break ;
      case  5:
      R= 12.1;
      break ;
      case 6 :
      R= 12.7;
      break ;
      case  7:
      R= 13.3;
      break ;
      case  8:
      R= 14;
      break ;
      case  9:
      R= 14.7;
      break ;
      case  10:
      R= 15.4;
      break ;
      case  11:
      R= 16.2;
      break ;
      case  12:
      R= 16.9;
      break ;
      case 13 :
      R= 17.8;
      break ;
      case  14:
      R= 18.7;
      break ;
      case  15:
      R= 19.6;
      break ;
      case 16 :
      R= 20.5;
      break ;
      case  17:
      R= 21.5;
      break ;
      case  18:
      R= 22.6;
      break ;
      case 19 :
      R= 23.7;
      break ;
      case  20:
      R= 24.9;
      break ;
      case  21:
      R= 26.1;
      break ;
      case  22:
      R= 27.4;
      break ;
      case  23:
      R= 28.7;
      break ;
      case  24:
      R= 30.1;
      break ;
      case  25:
      R= 31.6;
      break ;
      case  26:
      R= 33.2;
      break ;
      case  27:
      R= 34.8;
      break ;
      case  28:
      R= 36.5;
      break ;
      case  29:
      R= 38.3;
      break ;
      case  30:
      R= 40.2;
      break ;
      case 31 :
      R= 42.2;
      break ;
      case  32:
      R= 44.2;
      break ;
      case 33 :
      R= 46.4;
      break ;
      case  34:
      R= 48.7;
      break ;
      case  35:
      R= 51.1;
      break ;
      case  36:
      R= 53.6;
      break ;
      case  37:
      R= 56.2;
      break ;
      case  38:
      R= 59;
      break ;
      case  39:
      R= 61.9;
      break ;
      case  40:
      R= 64.9;
      break ;
      case  41:
      R= 68.1;
      break ;
      case    42     :
      R=  71.5    ;
      break ;
       case     43    :
      R=   75   ;
      break ;
       case       44  :
      R=     78.7 ;
      break ;
        case        45 :
      R=82.5          ;
      break ;
        case      46   :
      R=    86.6       ;
      break ;
        case       47  :
      R=      90.9     ;
      break ;
        case       48  :
      R=       95.3    ;
      break ;
   }


     break ;


  //E-48....end....



  //E-96...start....
     case 6:
      T=1;
//////////////////////////////////////

   switch (r)
   {
      case  1:
      R= 10;
      break ;
      case 2 :
      R=    10.2 ;
      break ;
      case  3:
      R= 10.5;
      break ;
      case  4:
      R= 10.7;
      break ;
      case  5:
      R= 11;
      break ;
      case 6 :
      R= 11.3;
      break ;
      case  7:
      R= 11.5;
      break ;
      case  8:
      R= 11.8;
      break ;
      case  9:
      R= 12.1;
      break ;
      case  10:
      R= 12.4;
      break ;
      case  11:
      R= 12.7;
      break ;
      case  12:
      R= 13;
      break ;
      case 13 :
      R= 13.3;
      break ;
      case  14:
      R= 13.7;
      break ;
      case  15:
      R= 14;
      break ;
      case 16 :
      R= 14.3;
      break ;
      case  17:
      R= 14.7;
      break ;
      case  18:
      R= 15;
      break ;
      case 19 :
      R= 15.4;
      break ;
      case  20:
      R= 15.8;
      break ;
      case  21:
      R= 16.2;
      break ;
      case  22:
      R= 16.5;
      break ;
      case  23:
      R= 16.9;
      break ;
      case  24:
      R= 17.4;
      break ;
      case  25:
      R= 17.8;
      break ;
      case  26:
      R= 18.2;
      break ;
      case  27:
      R= 18.7;
      break ;
      case  28:
      R= 19.1;
      break ;
      case  29:
      R= 19.6;
      break ;
      case  30:
      R= 20;
      break ;
      case 31 :
      R= 20.5;
      break ;
      case  32:
      R= 21;
      break ;
      case 33 :
      R= 21.5;
      break ;
      case  34:
      R= 22.1;
      break ;
      case  35:
      R= 22.6;
      break ;
      case  36:
      R= 23.2;
      break ;
      case  37:
      R= 23.7;
      break ;
      case  38:
      R= 24.3;
      break ;
      case  39:
      R= 24.9;
      break ;
      case  40:
      R= 25.5;
      break ;
      case  41:
      R= 26.1;
      break ;
      case    42     :
      R=       26.7    ;
      break ;
       case     43    :
      R=        27.4    ;
      break ;
       case       44  :
      R=           28 ;
      break ;
        case        45 :
      R=28.7           ;
      break ;
        case      46   :
      R=    29.4       ;
      break ;
        case       47  :
      R=      30.1     ;
      break ;
        case       48  :
      R=       30.9    ;
      break ;
        case       49  :
      R=         31.6  ;
      break ;
        case       50  :
      R=       32.4    ;
      break ;
        case     51    :
      R=        33.2   ;
      break ;
        case       52  :
      R=         34  ;
      break ;
        case     53    :
      R=          34.8 ;
      break ;
        case      54   :
      R=         35.7  ;
      break ;
        case     55    :
      R=       36.5    ;
      break ;
        case    56     :
      R=       37.4    ;
      break ;
        case     57    :
      R=        38.3   ;
      break ;
        case      58   :
      R=        39.2   ;
      break ;
        case      59   :
      R=          40.2 ;
      break ;
        case       60  :
      R=        41.2   ;
      break ;
        case       61  :
      R=          42.2 ;
      break ;
        case  62       :
      R=        43.2   ;
      break ;
        case  63       :
      R=        44.2   ;
      break ;
        case   64      :
      R=       45.3    ;
      break ;
        case   65      :
      R=     46.4      ;
      break ;
        case  66       :
      R=        47.5   ;
      break ;
        case   67      :
      R=       48.7    ;
      break ;
        case     68    :
      R=         49.9  ;
      break ;
        case      69   :
      R=          51.1 ;
      break ;
        case      70   :
      R=        52.3   ;
      break ;
        case      71   :
      R=          53.6 ;
      break ;
        case 72        :
      R=       54.9    ;
      break ;
        case     73    :
      R=         56.2  ;
      break ;
      case     74     :
      R=        57.6     ;
      break;
       case 75     :
      R=   59          ;
      break;
       case  76        :
      R=       60.4      ;
      break;
       case  77        :
      R=       61.9      ;
      break;
       case   78       :
      R=        63.4     ;
      break;
       case      79    :
      R=   64.9          ;
      break;
       case    80      :
      R=   66.5          ;
      break;
       case    81      :
      R=         68.1    ;
      break;
       case    82  :
      R=     69.8        ;
      break;
       case      83    :
      R=        71.5     ;
      break;
       case     84     :
      R=        73.2     ;
      break;
       case        85  :
      R=          75   ;
      break;
       case      86    :
      R=          76.8   ;
      break;
       case        87  :
      R= 78.7            ;
      break;
       case  88        :
      R=       80.6      ;
      break;
       case  89        :
      R=   82.5          ;
      break;
       case    90      :
      R=   84.5          ;
      break;
       case    91      :
      R=      86.6       ;
      break;
       case       92   :
      R=    88.7         ;
      break;
       case     93     :
      R=  90.9           ;
      break;
       case   94       :
      R=   93.1          ;
      break;
       case    95      :
      R=        95.3     ;
      break;
       case        96  :
      R=          97.6   ;
      break;
       default:
        cout <<" Out of range... "<<endl;

   }

     break ;



    //E-96....end....


   }
      cout << "please enter the letter " << endl ;
   cin >> z ;
   if (z=='y'||z=='Y'||z=='r'||z=='R')
    R*=(10^-1);
   else if (z=='z'||z=='Z')
    R*=(10^-2);
   else if (z=='x'||z=='X'||z=='s'||z=='S')
    R*=1;
   else if (z=='a'||z=='A')
    R*=10;
    else if (z=='b'||z=='B'||z=='h'||z=='H')
    R*=100;
    else if (z=='c'||z=='C')
    R*=1000;
    else if (z=='d'||z=='D')
    R*=10000;
    else if (z=='e'||z=='E')
    R*=100000;
    else if (z=='f'||z=='f')
    R*=1000000;
    else
        cout << " Out of range " <<endl;

        cout << " the exact resistance = "<< R << " ohm " <<endl<<endl;
        cout << " the tolerance = "<< T << "%" <<endl<<endl;
        cout << " the resistance = " << R+R*T/100 << " ohm " << " or " << R-R*T/100 << " ohm " <<endl<<endl;


}
