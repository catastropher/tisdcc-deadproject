#ifdef TI83P
# include <ti83pdefs.h>
# include <ti83p.h>


void GrBufClr() __naked
{
	__asm
	push iy
	push ix
	push hl
	push de
	push bc
	push af
	ld iy,#flags___dw
	BCALL(_GrBufClr___db)
	pop af
	pop bc
	pop de
	pop hl
	pop ix
	pop iy
	ret
	__endasm;
}

#endif
