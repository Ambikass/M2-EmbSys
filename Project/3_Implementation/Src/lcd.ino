void person_detected()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Person/Object at ");   //Display the distance of the person/object from the lcd
  lcd.setCursor(0, 1);
  lcd.print("    ");
  lcd.print(distance);
  lcd.print(" cm");
  digitalWrite(Buzzer, HIGH);
  digitalWrite(LED, HIGH);
  delay(3000);
  digitalWrite(Buzzer, LOW);
  digitalWrite(LED, LOW);
}
