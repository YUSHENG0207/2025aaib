//week04-4-void-mousePressed-x-y
//file-prefrence 字型要大
void setup(){
  size(600,400);
}
int x,y;
void draw(){
  background(#c0ffee);
  if(x>0){
    y+=2;
    ellipse(x,y,8,8);
  }
}
void mousePressed(){
  x=mouseX;
  y=mouseY;
}
