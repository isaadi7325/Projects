char input = 0;
void main() {
              TRISB = 0x00;
              PORTB = 0x00;

              UART1_Init(9600);
              Delay_ms(100);

              UART1_Write_Text("Input: ");

              while(1){
                       if(UART1_Data_Ready()){
                       input = UART1_Read();
                       UART1_Write(input);
                       }

switch(input){

              case 'A':
                   PORTB.F0 = 1;
                   break;

              case 'a':
                   PORTB.F0 = 0;
                   break;

             case 'B':
                   PORTB.F0 = 1;
                   break;

             case 'b':
                   PORTB.F0 = 0;
                   break;

             case 'C':
                   PORTB.F0 = 1;
                   break;

             case 'c':
                   PORTB.F0 = 0;
                   break;

             case 'D':
                   PORTB.F0 = 1;
                   break;

             case 'd':
                   PORTB.F0 = 0;
                   break;
                  
             default:
                     break;
}}}