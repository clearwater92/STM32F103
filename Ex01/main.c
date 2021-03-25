#include "stm32f10x.h"
#include<stdio.h>
#define BitSet(arg,posn) ((arg) | (1L << (posn)))
#define BitClr(arg,posn) ((arg) & ~(1L << (posn)))
int main() {
	RCC->APB2ENR |= (1 << 4);
	GPIOC->CRH &= ~((1 << 23) | (1 << 22) | (1 << 20));
	GPIOC->CRH |= (1 << 21);

	while (1) {
		GPIOC->ODR ^= (1 << 13);
	}
}
