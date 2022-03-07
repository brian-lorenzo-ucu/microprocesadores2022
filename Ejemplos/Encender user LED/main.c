/*
 * main.c
 *
 * Created: 3/6/2022 8:58:45 PM
 * Author: blorenzo
 */
 /*	Flash User LED (PB5 esquem�tico)
		Para poder controlar el UserLED primero se deber�:
 			1) Ubicar en el esquem�tico en que puerto se encuentra especificar
 			2) Configurar correctamente el puerto: SALIDA (registro DDRx)
 			3) Setear el bit correspondiente para prender o resetearlo para apagarlo (l�gica positiva)
			
	Referencias: 
		Control de Bits en C http://www.rjhcoding.com/avrc-bit-manip.php 
		Descripci�n de registros: Datasheet - Secci�n 14.4 (Pag 100)
*/	
 
#include <xc.h>

int main(void)
{
    //Seteo bit 5 de DDRB - declara el pin 5 de PORTB como SALIDA
	DDRB |= (1<<DDB5);
	
	while(1)
    {
		//Seteo el bit 5 de PORTB - enciende el User LED
		PORTB |= (1<<PORTB5);
    }
}