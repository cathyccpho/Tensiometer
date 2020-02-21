#define datanumber 10
float data[datanumber];
float inputNum;
float sumOfArray;
float mean;
float h_mean;
int ainput=A0;
//xlinx
void setup() {
 pinMode(ainput, INPUT_PULLUP); //輸入腳
 Serial.begin(9600); //連接serial port
 Serial.println("connected"); //成功連接顯示
}

void loop() 

{
   for (inputNum = 0; inputNum < sizeof(datanumber); inputNum++) {
     data[datanumber] = analogRead(ainput);
     Serial.println(analogRead(ainput));
   }
   float mean[sizeof(datanumber)];
   float sum_of_mean=0;
   for(int i=0;i<datanumber;i++){
     mean[i]=1/data[i];
     sum_of_mean+=mean[i];
   }
   h_mean= datanumber/sum_of_mean;

   Serial.println("H_mean:");
   Serial.println(h_mean);         
   
   
    //  if (inputNum >= datanumber)
    //     {                                   
    //         //hmean= n/1/x1+1/x2+1/x3.....
    //         int mean1 = 1/data[1]; //把array的內容變成1/x1
    //         int mean2 = 1/data[2]; 
    //         int mean3 = 1/data[3]; 
    //         int mean4 = 1/data[4]; 
    //         int mean5 = 1/data[5]; 
    //         int mean6 = 1/data[6]; 
    //         int mean7 = 1/data[7]; 
    //         int mean8 = 1/data[8]; 
    //         int mean9 = 1/data[9]; 
    //         int mean10 = 1/data[10]; 
    //        h_mean= datanumber/(mean1+mean2+mean3+mean4+mean5+mean6+mean7+mean8+mean9+mean10) ; //計算 h_mean
    //         Serial.println("H_mean:");
    //         Serial.println(h_mean);         
    // }     
      
     
           delay(1000); //
}
