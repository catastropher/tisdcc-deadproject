#ifdef TI83P
# include <ti83pdefs.h>
# include <ti83p.h>

unsigned char CkOP2Real() __naked
{
__asm
push af
push iy
ld iy,#flags___dw
BCALL(_CkOP2Real___db)
pop iy
ld l,#1
jr z,___doneZZ133
dec l
___doneZZ133:
pop af
ret
__endasm;
}

#endif
