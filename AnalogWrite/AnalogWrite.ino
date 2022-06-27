byte Out = 3, Brightness = 0, Fade = 3, Delay = 20;

void setup()
{
    pinMode(Out, OUTPUT);
}

void loop()
{
    Brightness += Fade;
    if (Brightness == 255)
        Fade = -3;
    else if (Brightness == 0)
        Fade = 3;
    analogWrite(Out, Brightness);
    delay(Delay);
}