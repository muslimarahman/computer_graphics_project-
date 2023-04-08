
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream>
#include<graphics.h>

using namespace std;
int main()
{
    int gd = DETECT, gm,i;
    cout << "+++++++++++++" <<endl;
    cout << "+++++++++++++" <<endl;
    cout << "1.DORIMON "<<endl;
    cout << "2.DORIMON MOTION"<<endl;
    cout << "3.LAMP"<<endl;
    cout << "4.BOAT"<<endl;
    cout << "5.STAR"<<endl;
    cout << "6.FLAG"<<endl;

    int select;
    while(1)
    {
        cout << "Enter choice number:";
        cin>>select;

        if(select==1)
        {
            //initgraph(&gd, &gm, "");
            initwindow(1000,800,"muslima");

            setcolor(YELLOW);
            //circle();
            line(50,50,50,70);
            line(70,50,70,70);
            line(50,50,60,60);
            line(60,60,70,50);//M
            ellipse(85,50,180,0,7,22);//U
            arc(105,57,40,260,7);
            arc(102,68,220,95,6);//S
            line(115,50,115,70);
            line(115,70,130,70);//L
            line(135,50,145,50);
            line(140,50,140,70);
            line(135,70,145,70);//I
            line(150,50,150,70);
            line(170,50,170,70);
            line(150,50,160,60);
            line(160,60,170,50);//M

            line(176,70,180,50);
            line(180,50,190,70);
            line(178,62,183,62);//A



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

            ellipse(222,102,0,360,7,11);//0
            arc(205,99,270,90,7);
            line(205,104,210,112);

            setfillstyle(1,RED);
            //dorimon

            int i;
            for(i=0; i<50; i++)
            {
                //________LEGS______________//
                setcolor(15);
                ellipse(200,450,150,390,50,16);
                line(157,441,243,441);
                ellipse(252,448,246,389,50,18);
                line(243,441,297,441);
                setcolor(15);  //using i for lighting effect
                ellipse(249,441,90,180,10,15);

                //_______TAIL
                setcolor(15);
                ellipse(155,410,80,280,8,8);

                setcolor(15);  //using i for lighting effect
                line(157,441,157,370);
                line(297,441,297,350);

                //_______left hand
                setcolor(15);
                circle(147,357,16);
                setcolor(15);  //using i for lighting effect
                ellipse(137,342,300,330,58,19);
                ellipse(174,348,110,170,29,49);

                //______right hand
                setcolor(15);
                circle(327,275,16);
                setcolor(15);  //using i for lighting effect
                ellipse(265,260,299,340,74,90);
                ellipse(323,285,110,170,25,19);

                //___NECK
                setcolor(15);
                line(163,302,285,302);
                line(163,298,285,298);
                ellipse(163,301,90,270,3,3);
                ellipse(285,300,280,80,4,3);

                //_____tummy bag
                setcolor(15);
                ellipse(243,334,143,40,56,48);
                ellipse(244,346,163,15,30,24);
                line(214,340,273,340);

                //________bell
                setcolor(15);
                circle(244,310,8);
                line(238,306,251,306);
                line(236,309,251,309);

                //______head
                setcolor(15);   //using i for lighting effect
                ellipse(220,237,0,180,87,60);
                ellipse(180,237,180,250,47,65);
                ellipse(268,237,290,360,40,65);

                //_______face
                setcolor(15);
                ellipse(263,277,15,90,45,60);
                ellipse(245,210,0,360,19,23);
                ellipse(207,210,0,360,19,23);
                ellipse(202,237,190,243,47,69);
                ellipse(187,254,90,170,32,35);
                circle(216,217,5);
                circle(237,218,5);

                //_____nose
                setcolor(15);
                circle(227,236,8);
                ellipse(230,262,180,360,45,30);
                ellipse(232,263,10,190,47,6);

                setcolor(15);
                ellipse(275,253,290,110,10,8);

                line(227,244,227,257);
                line(245,238,269,234);
                line(245,244,269,242);
                line(245,250,269,252);

                line(185,236,210,238);
                line(185,244,210,244);
                line(185,252,210,250);

                //__________text
                settextstyle(3,0,2);
                setcolor(15);  //using i for lighting effect
                outtextxy(190,120,"Doraemon");
                //delay(350);
            }

            getch();
            closegraph();
        }
        else if(select==2)
        {
            //initgraph(&gd,&gm,"c:tcbgi");

            initwindow(1000,800,"muslima");

            setcolor(YELLOW);
            //circle();
            line(50,50,50,70);
            line(70,50,70,70);
            line(50,50,60,60);
            line(60,60,70,50);//M
            ellipse(85,50,180,0,7,22);//U
            arc(105,57,40,260,7);
            arc(102,68,220,95,6);//S
            line(115,50,115,70);
            line(115,70,130,70);//L
            line(135,50,145,50);
            line(140,50,140,70);
            line(135,70,145,70);//I
            line(150,50,150,70);
            line(170,50,170,70);
            line(150,50,160,60);
            line(160,60,170,50);//M

            line(176,70,180,50);
            line(180,50,190,70);
            line(178,62,183,62);//A



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

            ellipse(222,102,0,360,7,11);//0
            arc(205,99,270,90,7);
            line(205,104,210,112);

            setfillstyle(1,RED);



            for(i=0; i<50; i++)
            {
//________LEGS______________//
                setcolor(15);
                ellipse(200,450,150,390,50,16);
                line(157,441,243,441);
                ellipse(252,448,246,389,50,18);
                line(243,441,297,441);
                setcolor(i);  //using i for lighting effect
                ellipse(249,441,90,180,10,15);

//_______TAIL
                setcolor(12);
                ellipse(155,410,80,280,8,8);

                setcolor(i);  //using i for lighting effect
                line(157,441,157,370);
                line(297,441,297,350);

//_______left hand
                setcolor(15);
                circle(147,357,16);
                setcolor(i);  //using i for lighting effect
                ellipse(137,342,300,330,58,19);
                ellipse(174,348,110,170,29,49);

//______right hand
                setcolor(15);
                circle(327,275,16);
                setcolor(i);  //using i for lighting effect
                ellipse(265,260,299,340,74,90);
                ellipse(323,285,110,170,25,19);

//___NECK
                setcolor(12);
                line(163,302,285,302);
                line(163,298,285,298);
                ellipse(163,301,90,270,3,3);
                ellipse(285,300,280,80,4,3);

//_____tummy bag
                setcolor(15);
                ellipse(243,334,143,40,56,48);
                ellipse(244,346,163,15,30,24);
                line(214,340,273,340);

//________bell
                setcolor(14);
                circle(244,310,8);
                line(238,306,251,306);
                line(236,309,251,309);

//______head
                setcolor(i);   //using i for lighting effect
                ellipse(220,237,0,180,87,60);
                ellipse(180,237,180,250,47,65);
                ellipse(268,237,290,360,40,65);

//_______face
                setcolor(15);
                ellipse(263,277,15,90,45,60);
                ellipse(245,210,0,360,19,23);
                ellipse(207,210,0,360,19,23);
                ellipse(202,237,190,243,47,69);
                ellipse(187,254,90,170,32,35);
                circle(216,217,5);
                circle(237,218,5);

//_____nose
                setcolor(12);
                circle(227,236,8);
                ellipse(230,262,180,360,45,30);
                ellipse(232,263,10,190,47,6);

                setcolor(15);
                ellipse(275,253,290,110,10,8);

                line(227,244,227,257);
                line(245,238,269,234);
                line(245,244,269,242);
                line(245,250,269,252);

                line(185,236,210,238);
                line(185,244,210,244);
                line(185,252,210,250);

//__________text
                settextstyle(7,0,5);
                setcolor(i);  //using i for lighting effect
                outtextxy(190,120,"DORAEMON");
                delay(50);
            }

        }
        else if(select==3)
        {
            //initgraph(&gd, &gm, "");
            initwindow(1000,800,"muslima");

            setcolor(YELLOW);
            //circle();
            line(50,50,50,70);
            line(70,50,70,70);
            line(50,50,60,60);
            line(60,60,70,50);//M
            ellipse(85,50,180,0,7,22);//U
            arc(105,57,40,260,7);
            arc(102,68,220,95,6);//S
            line(115,50,115,70);
            line(115,70,130,70);//L
            line(135,50,145,50);
            line(140,50,140,70);
            line(135,70,145,70);//I
            line(150,50,150,70);
            line(170,50,170,70);
            line(150,50,160,60);
            line(160,60,170,50);//M

            line(176,70,180,50);
            line(180,50,190,70);
            line(178,62,183,62);//A



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

            ellipse(222,102,0,360,7,11);//0
            arc(205,99,270,90,7);
            line(205,104,210,112);

            setfillstyle(1,RED);
            //floodfill(,YELLOW);
            //prodip
            setcolor(WHITE);
            line(300,400,600,400);
            line(600,400,550,600);
            line(550,600,350,600);
            line(350,600,300,400);
            //UP
            line(450,290,450,260);
            //LEFT
            line(400,340,370,340);
            //R
            line(500,340,530,340);



            setfillstyle(1,BLUE);
            floodfill(303,405,WHITE);
            setcolor(RED);
            line(450,400,410,340);
            line(410,340,450,300);
            line(450,300,490,340);
            line(490,340,450,400);

            setfillstyle(1,YELLOW);
            floodfill(415,343,RED);

            getch();
            closegraph();

        }
        else if(select==4)
        {
            //initgraph(&gd, &gm, "");
            initwindow(1200,800,"muslima");

            setcolor(YELLOW);
            //circle();
            line(50,50,50,70);
            line(70,50,70,70);
            line(50,50,60,60);
            line(60,60,70,50);//M
            ellipse(85,50,180,0,7,22);//U
            arc(105,57,40,260,7);
            arc(102,68,220,95,6);//S
            line(115,50,115,70);
            line(115,70,130,70);//L
            line(135,50,145,50);
            line(140,50,140,70);
            line(135,70,145,70);//I
            line(150,50,150,70);
            line(170,50,170,70);
            line(150,50,160,60);
            line(160,60,170,50);//M

            line(176,70,180,50);
            line(180,50,190,70);
            line(178,62,183,62);//A



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

            ellipse(222,102,0,360,7,11);//0
            arc(205,99,270,90,7);
            line(205,104,210,112);

            setfillstyle(1,RED);
            //floodfill(,YELLOW);
            setcolor(YELLOW);
            line(250,300,950,300);
            line(250,300,400,510);
            line(400,510,800,510);
            line(800,510,950,300);


            setfillstyle(1,YELLOW);
            floodfill(606,309,YELLOW);
            //wateR
            setcolor(YELLOW);
            rectangle(0,500,1199,999);

            setfillstyle(1,CYAN);
            floodfill(2,509,YELLOW);
            setcolor(YELLOW);
            line(800,200,1000,490);
            line(805,200,1005,490);
            line(1000,490,990,525);
            line(1005,490,1050,500);
            line(990,525,1050,500);
            line(800,200,805,200);


            setfillstyle(1,WHITE);
            floodfill(992,522,YELLOW);
            floodfill(802,201,YELLOW);
            floodfill(1002,491,YELLOW);
            getch();
            closegraph();

        }

        else if(select==5)
        {
            //initgraph(&gd, &gm, "");
            initwindow(1000,800,"muslima");

            setcolor(YELLOW);
            //circle();
            line(50,50,50,70);
            line(70,50,70,70);
            line(50,50,60,60);
            line(60,60,70,50);//M
            ellipse(85,50,180,0,7,22);//U
            arc(105,57,40,260,7);
            arc(102,68,220,95,6);//S
            line(115,50,115,70);
            line(115,70,130,70);//L
            line(135,50,145,50);
            line(140,50,140,70);
            line(135,70,145,70);//I
            line(150,50,150,70);
            line(170,50,170,70);
            line(150,50,160,60);
            line(160,60,170,50);//M

            line(176,70,180,50);
            line(180,50,190,70);
            line(178,62,183,62);//A



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

            ellipse(222,102,0,360,7,11);//0
            arc(205,99,270,90,7);
            line(205,104,210,112);

            setfillstyle(1,RED);
            //star
            setcolor(BLUE);
            line(520,150,380,400);
            line(520,150,660,400);
            line(380,400,660,400);

            setfillstyle(1, WHITE);
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

            setfillstyle(1,WHITE);
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
        else if(select==6)
        {
            //initgraph(&gd, &gm, "");
            initwindow(1000,800,"muslima");

            setcolor(YELLOW);
            //circle();
            line(50,50,50,70);
            line(70,50,70,70);
            line(50,50,60,60);
            line(60,60,70,50);//M
            ellipse(85,50,180,0,7,22);//U
            arc(105,57,40,260,7);
            arc(102,68,220,95,6);//S
            line(115,50,115,70);
            line(115,70,130,70);//L
            line(135,50,145,50);
            line(140,50,140,70);
            line(135,70,145,70);//I
            line(150,50,150,70);
            line(170,50,170,70);
            line(150,50,160,60);
            line(160,60,170,50);//M

            line(176,70,180,50);
            line(180,50,190,70);
            line(178,62,183,62);//A

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

            ellipse(222,102,0,360,7,11);//0
            arc(205,99,270,90,7);
            line(205,104,210,112);

            setfillstyle(1,RED);
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

            getch();
            closegraph();
        }

        else
        {
            cout << "Invalid.please try again" <<endl;
        }
    }
}

