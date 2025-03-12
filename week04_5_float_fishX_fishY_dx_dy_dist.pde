//week04-5-float-fishX-fishY-dx-dy-dist
void setup(){
  size(600,400);
}
int x,y;
float fishX=300,fishY=200;
void draw(){
  background(#c0ffee);
  ellipse(fishX,fishY,20,10);
  if(x>0){
    y+=2;
    if(y>400)x=0;
    ellipse(x,y,8,8);
    float dx=x-fishX,dy=y-fishY;
    float d=dist(x,y,fishX,fishY);
    fishX+=dx/d*4;
    fishY+=dy/d*4;
  }
}
void mousePressed(){
  x=mouseX;
  y=mouseY;
}
