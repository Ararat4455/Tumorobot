int gumar(int x, int y) {
  int z = x + y;
  return z;
}

int hanum(int f, int g) {
  int h = f - g;
  return h;
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int h = hanum(50, 34);
  Serial.println(h);
}


void loop() {
  // put your main code here, to run repeatedly:
}
