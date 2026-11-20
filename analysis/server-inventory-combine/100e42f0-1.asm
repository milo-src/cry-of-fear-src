
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e4330 <.text+0xe3330>:
100e4330:	ff 36                	push   DWORD PTR [esi]
100e4332:	8b cb                	mov    ecx,ebx
100e4334:	e8 a7 0b 00 00       	call   0x100e4ee0
100e4339:	85 c0                	test   eax,eax
100e433b:	75 12                	jne    0x100e434f
100e433d:	47                   	inc    edi
100e433e:	83 c6 04             	add    esi,0x4
100e4341:	83 ff 06             	cmp    edi,0x6
100e4344:	7e ea                	jle    0x100e4330
100e4346:	5f                   	pop    edi
100e4347:	5e                   	pop    esi
100e4348:	b8 01 00 00 00       	mov    eax,0x1
100e434d:	5b                   	pop    ebx
100e434e:	c3                   	ret
100e434f:	5f                   	pop    edi
100e4350:	5e                   	pop    esi
100e4351:	33 c0                	xor    eax,eax
100e4353:	5b                   	pop    ebx
100e4354:	c3                   	ret
