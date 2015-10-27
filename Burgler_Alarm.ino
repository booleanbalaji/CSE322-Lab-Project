int led=13;
int light=2;
int acc=3;
int infra_r=A3;
int infra_e=7;
int buzz=8;
int touch=6;
void setup()
{
	pinMode(led, OUTPUT);
	pinMode(light, INPUT);
	pinMode(buzz, OUTPUT);
	pinMode(infra_r, INPUT);
	pinMode(infra_e, OUTPUT);
	pinMode(acc, INPUT);
	Serial.begin(9600);
}
void loop()
{
	if(light>0)
	{
		int val=analogRead(infra_r);
		Serial.println(val);
		if(val>=1005)
		{
			
		if(digitalRead(touch))
		{
			digitalWrite(led, HIGH);
			digitalWrite(buzz, HIGH);
			delay(500);
			digitalWrite(led, LOW);
			digitalWrite(buzz, HIGH);
		}
		}
	}
	else
	{
		digitalWrite(led, LOW);
		digitalWrite(buzz, LOW);
	}
}