#include<graphics.h>

int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);  // Set the background color to white
    cleardevice();      // Apply the background color change
    setcolor(BLACK);
    rectangle(130,84,570,93);
    rectangle(210,93,570,218);
    rectangle(297,93,302,218);

    rectangle(385,93,390,218);

    rectangle(473,93,478,218);

    line(565,93,565,218);



    //wind-glass
    line(130,93,36,251);
    line(36,251,73,354);


    //door
    line(110,153,192,153);
    line(192,153,192,295); //right line
    line(110,153,68,232);
    line(68,232,82,337); //ekhan theke arc hobe Tonmoy
    line(82,337,153,337); //ekhan theke arc hobe tonmoy

    //door handle
    line(71,226,85,239);
    line(85,239,192,218);


    //door wheel arc
    arc(214,354,111,165,62);



    //stripe
    rectangle(192,240,570,248);



    line(570,218,570,354);



    //nicher wheel er upor line
    line(73,354,164,354);
    line(264,354,432,354);
    line(532,354,570,354);


    //wheels
    circle(214,354,50);
    circle(214,354,40);


    circle(482,354,50);
    circle(482,354,40);











    getch();
    closegraph();
}
