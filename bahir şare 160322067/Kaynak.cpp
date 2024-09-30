#include "glew.h"
#include "freeglut.h"
#include <iostream>
#include <string>
#include <ctime>
//#include <deque>

using namespace std;

int xr, yr;
int hx, hy, hiz, hy1, hx1, hy2, hx2, hy3, hx3;
int a = 1; int a1 = 1; int a2 = 1; int a3 = 1;
int hak = 3;
int puan = 0;
float r, g, b,r1, b1, g1, r2, b2, g2,r3, b3, g3;
bool carpisma = false;
int yon = 1;//1 sol 0 sað
int yon1 = 1;
int yon2 = 1;
int yon3 = 1;

void print_str(int x,int y,void* font,const char* string, ...)
{
	int len, i;
	va_list st;
	va_start(st, string);
	char str[1024];
	vsprintf_s(str, string, st);
	va_end(st);

	glRasterPos2f(x,y );
	len = (int)strlen(str);
	for (i = 0; i < len; i++)
	glutBitmapCharacter(font, str[i]);
}
void helikopter(){
		glBegin(GL_QUADS);
		glColor3f(r, g, b);
		glVertex2f(a*7.5 + hx, 10 + hy);// gövde
		glVertex2f(a * 27.5 + hx, 10 + hy);
		glVertex2f(a * 27.5 + hx, 30 + hy);
		glVertex2f(a * 7.5 + hx, 30 + hy);

		glVertex2f(a * 27.5 + hx, 15 + hy);//kuyruk
		glVertex2f(a * 47.5 + hx, 15 + hy);
		glVertex2f(a * 47.5 + hx, 25 + hy);
		glVertex2f(a * 27.5 + hx, 25 + hy);

		glVertex2f(a * 16.25 + hx, 30 + hy); // pervane baðlantý
		glVertex2f(a * 18.75 + hx, 30 + hy);
		glVertex2f(a * 18.75 + hx, 35 + hy);
		glVertex2f(a * 16.25 + hx, 35 + hy);
		glColor3f(0, 0.1, 0.9);
		glVertex2f(a * 8.5 + hx, 15 + hy);// cam
		glVertex2f(a * 17.5 + hx, 15 + hy);
		glVertex2f(a * 17.5 + hx, 25 + hy);
		glVertex2f(a * 8.5 + hx, 25 + hy);
		glEnd();
		glBegin(GL_LINES);
		glColor3f(0, 0, 0);
		glLineWidth(3.0f);
		glVertex2f(a * 7.5 + hx, 0 + hy);
		glVertex2f(a * 27.5 + hx, 0 + hy);
		glVertex2f(a * 12.5 + hx, 10 + hy);
		glVertex2f(a * 12.5+ hx, 0 + hy);
		glVertex2f(a * 22.5 + hx, 10 + hy);
		glVertex2f(a * 22.5 + hx, 0 + hy);
		glVertex2f(a * 18.75 + hx, 35 + hy);
		glVertex2f(a * 16.25 + hx, 35 + hy);
		glEnd();
		glLineWidth(1.5f);
		glBegin(GL_LINES);
		glColor3f(0, 0, 0);
		glVertex2f(a * 0 + hx, 30 + hy);//pervane
		glVertex2f(a * 33.5 + hx, 40 + hy);
		glVertex2f(a * 0 + hx, 40 + hy);
		glVertex2f(a * 33.5 + hx, 30 + hy);
		glVertex2f(a * 42.5 + hx, 22 + hy);//arka pervane
		glVertex2f(a * 52.5 + hx, 28 + hy);
		glVertex2f(a * 42.5 + hx, 28 + hy);
		glVertex2f(a * 52.5 + hx, 22 + hy);
		glEnd();
		glLineWidth(3.0f);
		glColor3f(1.0, 1.0,1.0);
		print_str(a * 22 + hx, 15 + hy, GLUT_BITMAP_HELVETICA_10, "0");
}
void helikopter1() {

	glBegin(GL_QUADS);
	glColor3f(r1, g1, b1);
	glVertex2f(a1 * 7.5 + hx1, 10 + hy1);// gövde
	glVertex2f(a1 * 27.5 + hx1, 10 + hy1);
	glVertex2f(a1 * 27.5 + hx1, 30 + hy1);
	glVertex2f(a1 * 7.5 + hx1, 30 + hy1);

	glVertex2f(a1 * 27.5 + hx1, 15 + hy1);//kuyruk
	glVertex2f(a1 * 47.5 + hx1, 15 + hy1);
	glVertex2f(a1 * 47.5 + hx1, 25 + hy1);
	glVertex2f(a1 * 27.5 + hx1, 25 + hy1);

	glVertex2f(a1 * 16.25 + hx1, 30 + hy1); // pervane baðlantý
	glVertex2f(a1 * 18.75 + hx1, 30 + hy1);
	glVertex2f(a1 * 18.75+ hx1, 35 + hy1);
	glVertex2f(a1 * 16.25 + hx1, 35 + hy1);
	glColor3f(0, 0, 1);
	glVertex2f(a1 * 8.5 + hx1, 15 + hy1);// cam
	glVertex2f(a1 * 17.5 + hx1, 15 + hy1);
	glVertex2f(a1 * 17.5 + hx1, 25 + hy1);
	glVertex2f(a1 * 8.5 + hx1, 25 + hy1);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glLineWidth(3.0f);
	glVertex2f(a1 * 7.5 + hx1, 0 + hy1);
	glVertex2f(a1 * 27.5 + hx1, 0 + hy1);
	glVertex2f(a1 * 12.5 + hx1, 10 + hy1);
	glVertex2f(a1 * 12.5 + hx1, 0 + hy1);
	glVertex2f(a1 * 22.5 + hx1, 10 + hy1);
	glVertex2f(a1*22.5 + hx1, 0 + hy1);
	glVertex2f(a1*18.75 + hx1, 35 + hy1);
	glVertex2f(a1*16.25 + hx1, 35 + hy1);
	glEnd();
	glLineWidth(1.5f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(a1*0 + hx1, 30 + hy1);//pervane
	glVertex2f(a1*33.5 + hx1, 40 + hy1);
	glVertex2f(a1*0 + hx1, 40 + hy1);
	glVertex2f(a1*33.5 + hx1, 30 + hy1);
	glVertex2f(a1*42.5 + hx1, 22 + hy1);//arka pervane
	glVertex2f(a1*52.5 + hx1, 28 + hy1);
	glVertex2f(a1*42.5 + hx1, 28 + hy1);
	glVertex2f(a1*52.5 + hx1, 22 + hy1);
	glEnd();
	glPointSize(5.0f);
	glColor3f(1.0, 1.0, 1.0);
	print_str(a1*22 + hx1, 15 + hy1, GLUT_BITMAP_HELVETICA_10, "1");

}
void helikopter2() {


	glBegin(GL_QUADS);
	glColor3f(r2, g2, b2);
	glVertex2f(a2*7.5 + hx2, 10 + hy2);// gövde
	glVertex2f(a2 * 27.5 + hx2, 10 + hy2);
	glVertex2f(a2 * 27.5 + hx2, 30 + hy2);
	glVertex2f(a2 * 7.5 + hx2, 30 + hy2);

	glVertex2f(a2 * 27.5 + hx2, 15 + hy2);//kuyruk
	glVertex2f(a2 * 47.5 + hx2, 15 + hy2);
	glVertex2f(a2 * 47.5 + hx2, 25 + hy2);
	glVertex2f(a2 * 27.5 + hx2, 25 + hy2);

	glVertex2f(a2 * 16.25 + hx2, 30 + hy2); // pervane baðlantý
	glVertex2f(a2 * 18.75 + hx2, 30 + hy2);
	glVertex2f(a2 * 18.75 + hx2, 35 + hy2);
	glVertex2f(a2 * 16.25 + hx2, 35 + hy2);
	glColor3f(0, 0, 1);
	glVertex2f(a2 * 8.5 + hx2, 15 + hy2);// cam
	glVertex2f(a2 * 17.5 + hx2, 15 + hy2);
	glVertex2f(a2 * 17.5 + hx2, 25 + hy2);
	glVertex2f(a2 * 8.5 + hx2, 25 + hy2);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glLineWidth(3.0f);
	glVertex2f(a2 * 7.5 + hx2, 0 + hy2);
	glVertex2f(a2 * 27.5 + hx2, 0 + hy2);
	glVertex2f(a2 * 12.5 + hx2, 10 + hy2);
	glVertex2f(a2 * 12.5 + hx2, 0 + hy2);
	glVertex2f(a2 * 22.5 + hx2, 10 + hy2);
	glVertex2f(a2 * 22.5 + hx2, 0 + hy2);
	glVertex2f(a2 * 18.75 + hx2, 35 + hy2);
	glVertex2f(a2 * 16.25 + hx2, 35 + hy2);
	glEnd();
	glLineWidth(1.5f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(a2 * 0 + hx2, 30 + hy2);//pervane
	glVertex2f(a2 * 33.5 + hx2, 40 + hy2);
	glVertex2f(a2 * 0 + hx2, 40 + hy2);
	glVertex2f(a2 * 33.5 + hx2, 30 + hy2);
	glVertex2f(a2 * 42.5 + hx2, 22 + hy2);//arka pervane
	glVertex2f(a2 * 52.5 + hx2, 28 + hy2);
	glVertex2f(a2 * 42.5 + hx2, 28 + hy2);
	glVertex2f(a2 * 52.5 + hx2, 22 + hy2);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	print_str(a2 * 22 + hx2, 15 + hy2, GLUT_BITMAP_HELVETICA_10, "2");
}
void helikopter3() {
	glBegin(GL_QUADS);
	glColor3f(r3, g3, b3);
	glVertex2f(a3 * 7.5 + hx3, 10 + hy3);// gövde
	glVertex2f(a3 * 27.5 + hx3, 10 + hy3);
	glVertex2f(a3 * 27.5 + hx3, 30 + hy3);
	glVertex2f(a3 * 7.5 + hx3, 30 + hy3);

	glVertex2f(a3 * 27.5 + hx3, 15 + hy3);//kuyruk
	glVertex2f(a3 * 47.5 + hx3, 15 + hy3);
	glVertex2f(a3 * 47.5 + hx3, 25 + hy3);
	glVertex2f(a3 * 27.5 + hx3, 25 + hy3);

	glVertex2f(a3 * 16.25 + hx3, 30 + hy3); // pervane baðlantý
	glVertex2f(a3 * 18.75 + hx3, 30 + hy3);
	glVertex2f(a3 * 18.75 + hx3, 35 + hy3);
	glVertex2f(a3 * 16.25 + hx3, 35 + hy3);
	glColor3f(0, 0, 1);
	glVertex2f(a3 * 8.5 + hx3, 15 + hy3);// cam
	glVertex2f(a3 * 17.5 + hx3, 15 + hy3);
	glVertex2f(a3 * 17.5 + hx3, 25 + hy3);
	glVertex2f(a3 * 8.5 + hx3, 25 + hy3);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glLineWidth(3.0f);
	glVertex2f(a3 * 7.5 + hx3, 0 + hy3);
	glVertex2f(a3 * 27.5 + hx3, 0 + hy3);
	glVertex2f(a3 * 12.5 + hx3, 10 + hy3);
	glVertex2f(a3 * 12.5 + hx3, 0 + hy3);
	glVertex2f(a3 * 22.5 + hx3, 10 + hy3);
	glVertex2f(a3 * 22.5 + hx3, 0 + hy3);
	glVertex2f(a3 * 18.75 + hx3, 35 + hy3);
	glVertex2f(a3 * 16.25 + hx3, 35 + hy3);
	glEnd();
	glLineWidth(1.5f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(a3 * 0 + hx3, 30 + hy3);//pervane
	glVertex2f(a3 * 33.5 + hx3, 40 + hy3);
	glVertex2f(a3 * 0 + hx3, 40 + hy3);
	glVertex2f(a3 * 33.5 + hx3, 30 + hy3);
	glVertex2f(a3 * 42.5 + hx3, 22 + hy3);//arka pervane
	glVertex2f(a3 * 52.5 + hx3, 28 + hy3);
	glVertex2f(a3 * 42.5 + hx3, 28 + hy3);
	glVertex2f(a3 * 52.5 + hx3, 22 + hy3);
	glEnd();
	
	glColor3f(1.0, 1.0, 1.0);
	print_str(a3 * 22 + hx3, 15 + hy3, GLUT_BITMAP_HELVETICA_12, "3");

}
void hel_ciz(int p) {
	float kirmizi[4];
	float yesil[4];
	float mavi[4];
	
	for (int i = 0; i < 4; i++) {
		kirmizi[i] = (rand() % 10) / 10.0;
		yesil[i] = (rand() % 10) / 10.0;
		mavi[i] = (rand() % 10) / 10.0;
	}
	switch (p) {
		case 0:{
			r = kirmizi[0]; b = mavi[0]; g = yesil[0]; hy = rand() % 50 + 240; cout << "0 numaralý "<< endl;
			yon = rand() % 2;
			if (yon == 1) {
				hx = rand() % 20 + 479;
				a = 1;
			}
			else {
				hx = rand() % 20 - 69;
				a = -1;
			}
		}
		case 1: { r1 = kirmizi[1]; b1 = mavi[1]; g1 = yesil[1]; hy1 = rand() % 50 + 341; cout << "1 numara"<< endl;
			yon1 = rand() % 2;
			if (yon1 == 1) {
				hx1 = rand() % 20 + 479;
				a1 = 1;
			}

			else {
				hx1 = rand() % 20 - 69;
				a1 = -1;

			}
			break;
		}
		case 2: { r2 = kirmizi[2]; b2 = mavi[2]; g2 = yesil[2]; hy2 = rand() % 50 + 441; cout << "2 numara hx2=" << hx2 << endl;
			yon2 = rand() % 2;
			if (yon2 == 1) {
				hx2 = rand() % 20 + 479;
				a2 = 1;
			}
			else {
				hx2 = rand() % 20 - 69;
				a2 = -1;
			}
			break;
		}
		case 3: {
			r3 = kirmizi[3]; b3 = mavi[3]; g3 = yesil[3]; hy3 = rand() % 50 + 543; cout << "3 numara " << endl;
			yon3 = rand() % 2; 
			if (yon3 == 1) {
				hx3 = rand() % 20 + 479;
				a3 = 1;
			}
			else {
				hx3 = rand() % 20 - 69;
				a3 = -1;
			}
			break;
		}
		case 4: {
			r = kirmizi[0]; r1 = kirmizi[1]; r2 = kirmizi[2]; r3 = kirmizi[3];
			b = mavi[0]; b1 = mavi[1]; b2 = mavi[2]; b3 = mavi[3];
			g = yesil[0]; g1 = yesil[1]; g2 = yesil[2]; g3 = yesil[3];
			hy = rand() % 50 + 240;
			hy1 = rand() % 50 + 341;
			hy2 = rand() % 50 + 442;
			hy3 = rand() % 50 + 543;
			yon = rand() % 2;
			yon1 = rand() % 2;
			yon2 = rand() % 2;
			yon3 = rand() % 2;
			if (yon == 1) {
				hx = rand() % 20 + 479;
				a = 1;
			}
			else {
				hx = rand() % 20 - 69;
				a = -1;
			}	
			if (yon1 == 1) {
				hx1 = rand() % 20 + 479;
				a1 = 1;
			}
			else {
				hx1 = rand() % 20 - 69;
				a1 = -1;
			}
			if (yon2 == 1) {
				hx2 = rand() % 20 + 479;
				a2 = 1;
			}
			else {
				hx2 = rand() % 20 - 69;
				a2 = -1;
			}
			if (yon3 == 1) {
				hx3 = rand() % 20 + 479;
				a3 = 1;
			}
			else {
				hx3 = rand() % 20 - 69;
				a3 = -1;
			} 
		break; 
		}
	}
}
void carpisma_kontrol(void) {
	if (carpisma) {
		hak--;
		yr = rand() % 187 + 0;
		xr = rand() % 431 + 0;
		hel_ciz(4);
		carpisma = false;
	}
}
void ucak() {
	glColor3f(0.5, 0.5, 1);
	glBegin(GL_QUADS);
	glVertex2f(0+ xr, 32 + yr); //ön kanat
	glVertex2f(50 + xr, 32 + yr);
	glVertex2f(50 + xr, 35 + yr);
	glVertex2f(0 + xr, 35 + yr); 
	glVertex2f( 23.75+ xr, 50 + yr);//gövde
	glVertex2f( 23.75+ xr, 0 + yr);
	glVertex2f( 26.75+ xr, 0+ yr);
	glVertex2f(26.75 + xr, 50 + yr);
	glVertex2f(10.25 + xr, 5.5 + yr);//arka kanat
	glVertex2f(39.5 + xr, 5.5 + yr);
	glVertex2f(39.5 + xr, 8 + yr);
	glVertex2f(10.25 + xr, 8 + yr);
	glEnd();
}
void anasayfa(void) {
	print_str(300,610, GLUT_BITMAP_HELVETICA_18, "Puan:%d", puan);
	print_str(370,610, GLUT_BITMAP_HELVETICA_18, "Kalan Hak:%d", hak);
	glBegin(GL_QUADS);//baþlangýç bölgesi
	glColor3f(1, 0.98, 0.79);
	glVertex2f(0,0);
	glVertex2f(0,240);
	glVertex2f(480,240);
	glVertex2f(480,0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 1);
	glVertex2f(0,240);
	glVertex2f(480,240);
	glEnd();
}
void hel_hareket(int value) {
	if (puan == 0)
		hiz = rand() % 5 + 80;
	else {
		hiz = (rand() % 100 + 400) / (puan * 5);
	}
	if (abs(xr - hx) <= 50 && abs(yr - hy) <= 50) {
			cout << "0 num carptý" << endl;		
			carpisma= true;		
	}
	if (abs(xr - hx1) <= 50 && abs(yr - hy1) <= 50) {
		carpisma = true;
		cout << "1 num carptý" << endl;
		}
	if (abs(xr - hx2) <= 50 && abs(yr - hy2) <= 50) {
		cout << "2 num carptý" << endl;
		carpisma = true;
	}
	if (abs(xr - hx3) <= 50 && abs(yr - hy3) <= 50) {
		cout << "3 num carptý" << endl;
		carpisma = true;
	}
	if (yon == 1) {	//sola gidiþ h0
		if (hx <= -70) {
			hx = rand() % 20 + 479;
			hel_ciz(0);
		}
		else
			hx -= rand() % 3 + 3;
	}
	else if (yon == 0) {	//saða gidiþ h0
		if (hx >= 500) {
			hx = rand() % 20 - 69;
			hel_ciz(0);
		}
		else 
			hx += rand() % 3+3;
	}
	if (yon1 == 1) {	//sola gidiþ
		if (hx1 <= -70) {
			hx1 = rand() % 20 + 479;
			hel_ciz(1);
		}
		else
			hx1 -= rand() % 3 + 3;
	}
	else if (yon1 == 0) {	//saða gidiþ
		if (hx1 >= 500) {
			hx1 = rand() % 20 - 69;
			hel_ciz(1);
			
		}
		else hx1 += rand() % 2 + 3;
	}
	if (yon2 == 1) {	//sola gidiþ
		if (hx2 <= -70) {
			hx2 = rand() % 20 + 479;
			hel_ciz(2);
		}
		else
			hx2 -= rand() % 2 + 3;
	}
	else if (yon2 == 0) {	//saða gidiþ
		if (hx2 >= 500) {
			hx2 = rand() % 20 - 69;
			hel_ciz(2);
		}
		else hx2 += rand() % 2 + 3;
	}
	if (yon3 == 1) {
		if (hx3 <= -70) {
			hx3 = rand() % 20 + 479;
			//a3 = -1;
			hel_ciz(3);
		}
		else
			hx3 -= rand() % 2 + 3;
	}
	else if (yon3 == 0) {	//saða gidiþ
		if (hx3 >= 500) {
			hx3 = rand() % 20 - 69;//a3 = -1;
			hel_ciz(3);
		}
		else hx3 += rand() % 2 + 3;
	}
	glutTimerFunc(hiz, hel_hareket,0);
	glutPostRedisplay();
}
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	if (hak == 0) {
		glColor3f(1, 0, 0);
		glPointSize(5.0f);
		print_str(170, 420, GLUT_BITMAP_TIMES_ROMAN_24, "OYUN SONU");
		print_str(200, 300, GLUT_BITMAP_TIMES_ROMAN_24, "PUAN=%d", puan);
		print_str(50, 200, GLUT_BITMAP_TIMES_ROMAN_24, "Tekrar oynamak icin Enter'a basiniz" );
		print_str(50, 100, GLUT_BITMAP_TIMES_ROMAN_24, "Oyundan cikmak icin ESC tusuna basiniz");
		glFlush();
		glutSwapBuffers();
	}
	else  {
		anasayfa();
		ucak();
		carpisma_kontrol();
		helikopter();
		helikopter1();
		helikopter2();
		helikopter3();
		glFlush();
		glutSwapBuffers();
	}
}
void specialKeys(int key, int x, int y) {	
	if (key == GLUT_KEY_RIGHT) {
		if (xr >= 429)
			xr = 432;
		else
			xr = xr + 3;
		}
	else if (key == GLUT_KEY_LEFT) {
		if (xr < 3)
			xr = 0;
		else
			xr = xr - 3;
		}
	else if (key == GLUT_KEY_UP) {
		if (yr >= 637) {
			yr = rand() % 187 + 0;
			xr = rand() % 431 + 0;
			puan++;
		}
		else 
			yr = yr + 3;
		}
	else if (key == GLUT_KEY_DOWN) {
		if (yr < 27)
			yr = 0;
		else
			yr = yr - 3;
		}	
	glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y) {

	if (key == 13) {
		if (hak == 0) {
			hak = 3;
			puan = 0;
			anasayfa();
			
		}
	}
	else if(key== 27)
		exit(0);
	}
int main(int argc, char** argv)
{
	srand(time(0));
	yr = rand() % 187 + 0;
	xr = rand() % 431 + 0;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(480, 640);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("ucakçiz");
	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glutDisplayFunc(display);
	hel_ciz(4);
	gluOrtho2D(0, 480, 0, 640);
	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(keyboard);
	glutTimerFunc(hiz,hel_hareket, 0);
	srand(time(NULL));
	glutMainLoop();
	return 0;
}