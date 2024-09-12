// ピンの定義
const int relayPin = 7;  // リレー制御ピン

void setup() {
  pinMode(relayPin, OUTPUT);  // ピンを出力として設定
  digitalWrite(relayPin, LOW);  // 初期状態はオフ
}

void loop() {
  digitalWrite(relayPin, HIGH); // リレーをONにしてポンプを動かす
  delay(10000);                 // 10秒間待つ
  digitalWrite(relayPin, LOW);  // リレーをOFFにしてポンプを停止
  delay(86400000 - 10000);      // 残りの時間（86400000ミリ秒 - 10秒）を待つ
}
