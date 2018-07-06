/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
//char a[100];
//char b[100];
int cx=250, cy=200;
int key=0;
int kex=0;
bool move=false;
/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	
	iClear();
	iText(cx,cy,"Sajid Mahboob");
}
void TextMove(void){
	
	if(cx<400 && move==false){
		cx+=10;
	}
	if(cx>250 && move==true){
		cx-=10;
	}
	if(cx>=400){
		move=true;
	}
	if(cx<=250){
		move=false;
	}

	/*
	if(cx>500 && move==false){
		cx+=10;
		move=true;
	}
	if(cx>300 && move==true){
		cx-=10;
		move=false;
	}*/
}
/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	//itoa(mx,a,10);
	//itoa(my,b,10);
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	printf(" *** Welcome to your 1st Program!!!");

	if(key == ' ')
	{
		move=1;
	}
	if(key == 's'){
		move=0;
	}
	if(key == 'b'){
		move=2;
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 
	iSetTimer(100, TextMove);
	iInitialize(800, 400, "demooo");
	
	//
	printf(" *** Welcome to your 1st Program!!!");  
	return 0;
}	