
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10103f00 <.text+0x102f00>:
10103f00:	56                   	push   esi
10103f01:	8b f1                	mov    esi,ecx
10103f03:	51                   	push   ecx
10103f04:	8b 16                	mov    edx,DWORD PTR [esi]
10103f06:	c7 86 dc 01 00 00 01 	mov    DWORD PTR [esi+0x1dc],0x1
10103f0d:	00 00 00 
10103f10:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10103f15:	8b 00                	mov    eax,DWORD PTR [eax]
10103f17:	89 86 e0 01 00 00    	mov    DWORD PTR [esi+0x1e0],eax
10103f1d:	f3 0f 10 86 60 01 00 	movss  xmm0,DWORD PTR [esi+0x160]
10103f24:	00 
10103f25:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10103f2c:	9f                   	lahf
10103f2d:	f6 c4 44             	test   ah,0x44
10103f30:	7b 13                	jnp    0x10103f45
10103f32:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10103f37:	ff 52 08             	call   DWORD PTR [edx+0x8]
10103f3a:	c7 46 78 40 30 10 10 	mov    DWORD PTR [esi+0x78],0x10103040
10103f41:	5e                   	pop    esi
10103f42:	c2 10 00             	ret    0x10
10103f45:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
10103f4c:	ff 52 08             	call   DWORD PTR [edx+0x8]
10103f4f:	c7 46 78 40 30 10 10 	mov    DWORD PTR [esi+0x78],0x10103040
10103f56:	5e                   	pop    esi
10103f57:	c2 10 00             	ret    0x10
