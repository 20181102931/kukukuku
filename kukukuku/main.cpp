void setup()
{
    // put your setup code here, to run once:
    // Serial.begin(9600);
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}
//double x=0;
void loop()
{
    // 1 1  1 1  1 1  0 1  1 1 0 1  1 0  0 0
    // put your main code here, to run repeatedly:
    //短用1，长用0；HELLO
    int mos[26][4]={{1,0,2,2},{0,1,1,1},{1,0,1,0},{0,1,1,2},{1,2,2,2},{1,1,0,1},{0,0,1,2},{1,1,1,1},{1,1,2,2},{1,0,0,0},{0,1,0,2},{1,0,1,1},{0,0,2,2},{0,1,2,2},{0,0,0,2},{1,0,0,1},
        {0,0,1,0},{1,0,1,2},{1,1,1,2},{0,2,2,2},{1,1,0,2},{1,1,1,0},{1,0,0,2},{0,1,1,0},{0,1,0,0},{0,0,1,1}};
    //int mos1[10][5]={{1,0,0,0,0},{1,1,0,0,0},{1,1,1,0,0},{1,1,1,1,0},{1,1,1,1,1},{0,1,1,1,1},{0,0,1,1,1},{0,0,0,1,1},{0,0,0,0,1},{0,0,0,0,0}};
    int k,h;
    char m;
    String str = "";
    while(Serial.available()>0)//判断串口缓冲区有没有数据，>0串口接收到了数据
    {
        str =  str + char(Serial.read());
    }
    k=str.length();
    for(int j=0;j<k;j++)
    {
        m=str[j];
        if(int(m)>80)//小写
        {
            h = (int)(m) - 97;
        }else
        {
            h = (int)(m) - 65;
        }
        for(int t=0;t<4;t++)
        {
            if(mos[h][t]==1)
            {
                Serial.println("1");
                digitalWrite(13,HIGH);
                delay(400);
                digitalWrite(13,LOW);
                delay(400);
            }
            else if(mos[h][t]==0)
            {
                Serial.println("0");
                digitalWrite(13,HIGH);
                delay(1500);
                digitalWrite(13,LOW);
                delay(1500);
            }
            else
                break;
        }
    }
}
