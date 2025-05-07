//week12-1-happy-bubble-3d-part1
void setup(){
  size(300,300,P3D);//開啟3D功能
}
void draw(){
  background(255);
  
  pushMatrix();//備份矩陣
  translate(mouseX,mouseY);//跟隨鼠標
  sphere(60);//半徑60的圓
  popMatrix();//還原矩陣
}
