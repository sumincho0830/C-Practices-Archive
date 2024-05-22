void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 int t = 2;
 // 솔솔 라라 솔솔 미 솔솔 미미 레 솔솔 라라 솔솔 미 솔 미 레 미 도
 int LED[] = {12, 12, 13, 13, 12, 12, 10,12, 12, 10, 10, 9, 12, 12, 13, 13, 12, 12, 10, 12, 10, 9, 10, 8};
 // LED 켜진 후 지연 시간
 int S[] = {1,1,1,1,1,1,1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1,1,2, 1,1,1,1,2};
 //LED 꺼진 후 지연 시간
 int P[] = {1,1,1,1,1,1,2,1,1,1,1,6,1,1,1,1,1,1,2,1,1,1,1,6};
 int speed = 250;

 for(int i=0;i<24;i++)
 {
  digitalWrite(LED[i],HIGH);
  delay(speed * S[i]);
  digitalWrite(LED[i],LOW);
  delay(speed * P[i]);
 }
}
