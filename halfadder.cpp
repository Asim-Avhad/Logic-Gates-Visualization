#include <iostream>
#include<graphics.h>
using namespace std;

int Half_Adder(int A,int B){
    int Sum , Carry;
    Sum = A ^ B;
    Carry = A & B;
    cout<<"Sum = "<< Sum << endl;
    cout<<"Carry = "<<Carry<< endl;
    return Sum;
    return Carry;
}
int main() {
	int A,B;
    int result,Sum,Carry;
    cout<<"Enter First Input:\t";
    cin>>A;
    cout<<"Enter Second Input:\t";
    cin>>B;
    Sum=Half_Adder(A,B);
	int gd = DETECT, gm;
    //initgraph(&gd, &gm, NULL);
    initwindow(800,800);
    delay(2000);
    rectangle(50,100,250,250);
    delay(2000);
    rectangle(350,100,550,250);
    delay(2000);
    circle(78,230,5);
    circle(106,230,5);
    circle(134,230,5);
    circle(162,230,5);
    circle(190,230,5);
    circle(218,230,5);
    circle(246,230,5);
    circle(78,120,5);
    circle(106,120,5);
    circle(134,120,5);
    circle(162,120,5);
    circle(190,120,5);
    circle(218,120,5);
    circle(246,120,5);
    circle(378,230,5);
    circle(406,230,5);
    circle(434,230,5);
    circle(462,230,5);
    circle(490,230,5);
    circle(518,230,5);
    circle(546,230,5);
    circle(378,120,5);
    circle(406,120,5);
    circle(434,120,5);
    circle(462,120,5);
    circle(490,120,5);
    circle(518,120,5);
    circle(546,120,5);
    delay(2000);

    //INPUT A
    setcolor(BLUE);
    delay(1000);
    line(78,230,78,300);
    delay(1000);
    line(78,300,30,300);
    setcolor(WHITE);
	settextstyle(8,0,3);
	delay(1000);
    outtextxy(30,303,"A"); 
	//Input A continued...
	delay(2000);
	setcolor(BLUE);
    line(378,230,378,300);
    delay(1000);
    line(378,300,78,300); 
	//INPUT B
	delay(2000);
    setcolor(YELLOW);
    line(106,230,106,350);
    delay(1000);
    line(106,350,30,350);
    setcolor(WHITE);
    delay(1000);
    settextstyle(8,0,3);
    outtextxy(30,353,"B");
    //Input B continued...
    setcolor(YELLOW);
    delay(2000);
    line(406,230,406,350);
    delay(1000);
    line(406,350,30,350);  
    //VCC
    delay(2000);
    setcolor(WHITE);
    line(78,120,78,30);
    delay(1000);
    line(78,30,30,30);
    delay(1000);
    line(378,120,378,30);
    delay(1000);
    line(378,30,78,30);
	settextstyle(8,0,3);
	delay(1000);
    outtextxy(32,32,"VCC");    
    //Ground
    delay(2000);
    setcolor(WHITE);
    delay(1000);
    line(546,230,546,400);
    delay(1000);
    line(246,230,246,370);
    delay(1000);
    line(246,370,546,370);
    delay(1000);
    settextstyle(8,0,3);
    outtextxy(548,402,"GND");
    //Outputs
    delay(2000);
    setcolor(GREEN);
    delay(1000);
    line(134,230,134,500);
    delay(1000);
    line(134,500,250,500);
    delay(1000);
    line(250,500,250,550);
    setcolor(WHITE);
    //LED 1(SUM)
    delay(2000);
    circle(250,580,30);
    settextstyle(8,0,3);
    outtextxy(250,620,"SUM");
    //Output continued...
    delay(2000);
    setcolor(GREEN);
    delay(1000);
    line(434,230,434,500);
    delay(1000);
    line(434,500,350,500);
    delay(1000);
    line(350,500,350,550);
    setcolor(WHITE);
    //LED 2(CARRY)
    delay(2000);
    circle(350,580,30);
    settextstyle(8,0,3);
    outtextxy(350,620,"CARRY");
    if(Sum==1){
    	for(int i=0;i<11;i++){
    	delay(1000);
    	setfillstyle(SOLID_FILL,RED);
    	circle(250,580,30);
    	floodfill(250,580,WHITE);
    	delay(1000);
    	setfillstyle(SOLID_FILL,BLACK);
    	circle(250,580,30);
    	floodfill(250,580,WHITE);
		}
	}
	if(Sum==0){
		for(int i=0;i<11;i++){
		delay(1000);
		setfillstyle(SOLID_FILL,RED);
    	circle(350,580,30);
    	floodfill(350,580,WHITE);
    	delay(1000);
    	setfillstyle(SOLID_FILL,BLACK);
    	circle(350,580,30);
    	floodfill(350,580,WHITE);
		}
	}
	delay(50000);
    return 0;
}
