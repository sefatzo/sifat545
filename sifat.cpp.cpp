
#include<iostream>
#include<graphics.h>

using namespace std;

void star()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"sifat");

    setcolor(WHITE);
      setcolor(WHITE);
    //s
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);
    //I
    line(64,70,72,70);
    line(68,50,68,70);
    line(64,50,72,50);
    //F
    line(80,50,80,70);
    line(80,50,92,50);
    line(80,60,92,60); //A
    line(96,70,103,50);
    line(103,50,110,70);
    line(100,62,107,62); //T
    line(120,50,120,70);
    line(112,50,128,50);
    //id
    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0

    arc(205,99,270,90,7);
    line(205,104,210,112);//2
    circle(225,97,6);
    circle(225,107,6);
    setfillstyle(1,RED);
    //star
    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1, YELLOW);
    floodfill(520,380,BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);

    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1,YELLOW);
    floodfill(520, 380, BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);

    getch();
    closegraph();


}
void flag()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"sifat");

       setcolor(WHITE);
    //s
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);
    //I
    line(64,70,72,70);
    line(68,50,68,70);
    line(64,50,72,50);
    //F
    line(80,50,80,70);
    line(80,50,92,50);
    line(80,60,92,60); //A
    line(96,70,103,50);
    line(103,50,110,70);
    line(100,62,107,62); //T
    line(120,50,120,70);
    line(112,50,128,50);
    //id
    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0

    arc(205,99,270,90,7);
    line(205,104,210,112);//2
    circle(225,97,6);
    circle(225,107,6);
    //flag
    setcolor(YELLOW);
    rectangle(400,200,410,700);
    rectangle(380,700,430,720);
    rectangle(410,220,710,420);

    setfillstyle(1,WHITE);
    floodfill(402,201,YELLOW);
    floodfill(382,701,YELLOW);
    setcolor(YELLOW);
    rectangle(410,220,710,420);


    setfillstyle(1,GREEN);
    floodfill(412,222,YELLOW);
    setcolor(YELLOW);
    circle(560,320,70);
    setfillstyle(1,RED);
    floodfill(562,322,YELLOW);

    setfillstyle(1,RED);
    getch();
    closegraph();



}
void girl()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"Sifat");

       setcolor(WHITE);
    //s
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);
    //I
    line(64,70,72,70);
    line(68,50,68,70);
    line(64,50,72,50);
    //F
    line(80,50,80,70);
    line(80,50,92,50);
    line(80,60,92,60); //A
    line(96,70,103,50);
    line(103,50,110,70);
    line(100,62,107,62); //T
    line(120,50,120,70);
    line(112,50,128,50);
    //id
    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0

    arc(205,99,270,90,7);
    line(205,104,210,112);//2
    circle(225,97,6);
    circle(225,107,6);
    setfillstyle(1,RED);
    setcolor(CYAN);
    line(0,450,1000,450);
    circle(500,200,50);
    line(500,250,480,350);
    line(500,250,520,350);
    line(480,350,520,350);

    line(500,250,430,340);
    line(500,250,570,340);

    line(500,350,480,450);
    line(500,350,520,450);
    setfillstyle(1,WHITE);
    getch();
    closegraph();
}
void car()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"Sifat");

       setcolor(WHITE);
    //s
    arc(50,57,40,260,7);
    arc(48,68,220,95,6);
    //I
    line(64,70,72,70);
    line(68,50,68,70);
    line(64,50,72,50);
    //F
    line(80,50,80,70);
    line(80,50,92,50);
    line(80,60,92,60); //A
    line(96,70,103,50);
    line(103,50,110,70);
    line(100,62,107,62); //T
    line(120,50,120,70);
    line(112,50,128,50);
    //id
    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,6);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0

    arc(205,99,270,90,7);
    line(205,104,210,112);//2
    circle(225,97,6);
    circle(225,107,6);
    setfillstyle(1,RED);
    setcolor(WHITE);
    line(200,300,200,400);
    line(200,400,250,400);
    line(250,400,260,380);
    line(260,380,340,380);
    line(340,380,350,400);
    line(350,400,450,400);
    line(450,400,460,380);
    line(460,380,540,380);
    line(540,380,550,400);
    line(550,400,650,400);
    line(650,400,630,300);
    line(630,300,570,300);
    line(570,300,540,220);
    line(540,220,260,220);
    line(260,220,220,300);
    line(220,300,200,300);
    setfillstyle(1,YELLOW);
    floodfill(262,304,WHITE);
    setcolor(RED);
    circle(300,420,37);
    circle(500,420,37);
    setfillstyle(1,WHITE);
    floodfill(304,422,RED);
    floodfill(504,422,RED);
    setcolor(WHITE);
    line(400,220,400,300);
    setfillstyle(1,WHITE);
    setcolor(RED);
    rectangle(270,230,370,295);
    rectangle(430,230,530,295);
    setfillstyle(1,BLUE);
    floodfill(272,234,RED);
    floodfill(432,234,RED);
    getch();
    closegraph();


}


int main()

{
    cout << "==============" <<endl;
    cout << "==============" <<endl;
    cout << "1.STAR"<<endl;
    cout << "2.FLAG"<<endl;
    cout << "3.GIRL"<<endl;
    cout << "4.CAR"<<endl;
    cout << "==============" <<endl;

    int select;

    cout << "Enter choice number:";
    cin>>select;

    switch(select)

    {

    case 1:
        star();
        break;
    case 2:
       flag();
        break;
    case 3:
        girl();
        break;
    case 4:
        car();
        break;
    default:
        cout << "...................." <<endl;
        cout << "Invalid" <<endl;
        cout << "please try again" <<endl;
        cout << "...................." <<endl;
        return 0;



    }


}


