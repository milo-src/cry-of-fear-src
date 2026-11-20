
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000b230 <.text+0xa230>:
1000b230:	56                   	push   esi
1000b231:	8b f1                	mov    esi,ecx
1000b233:	ff 86 34 02 00 00    	inc    DWORD PTR [esi+0x234]
1000b239:	c7 86 2c 02 00 00 00 	mov    DWORD PTR [esi+0x22c],0x0
1000b240:	00 00 00 
1000b243:	e8 08 f9 ff ff       	call   0x1000ab50
1000b248:	85 c0                	test   eax,eax
1000b24a:	74 0a                	je     0x1000b256
1000b24c:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x80000000
1000b253:	00 00 80 
1000b256:	5e                   	pop    esi
1000b257:	c3                   	ret
