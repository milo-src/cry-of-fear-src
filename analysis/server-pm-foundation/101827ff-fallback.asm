
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101827ff <.text+0x1817ff>:
101827ff:	8d 54 24 04          	lea    edx,[esp+0x4]
10182803:	e8 7d 8c 00 00       	call   0x1018b485
10182808:	52                   	push   edx
10182809:	9b d9 3c 24          	fstcw  WORD PTR [esp]
1018280d:	74 6d                	je     0x1018287c
1018280f:	66 81 3c 24 7f 02    	cmp    WORD PTR [esp],0x27f
10182815:	74 05                	je     0x1018281c
10182817:	e8 39 8c 00 00       	call   0x1018b455
1018281c:	3d 00 00 f0 3f       	cmp    eax,0x3ff00000
10182821:	73 2d                	jae    0x10182850
10182823:	d9 e8                	fld1
10182825:	d8 c1                	fadd   st,st(1)
10182827:	d9 e8                	fld1
10182829:	d8 e2                	fsub   st,st(2)
1018282b:	de c9                	fmulp  st(1),st
1018282d:	d9 fa                	fsqrt
1018282f:	d9 c9                	fxch   st(1)
10182831:	d9 f3                	fpatan
10182833:	83 3d 70 31 23 10 00 	cmp    DWORD PTR ds:0x10233170,0x0
1018283a:	0f 85 9e 8c 00 00    	jne    0x1018b4de
10182840:	ba 0d 00 00 00       	mov    edx,0xd
10182845:	8d 0d f0 f4 1e 10    	lea    ecx,ds:0x101ef4f0
1018284b:	e9 9b 8c 00 00       	jmp    0x1018b4eb
