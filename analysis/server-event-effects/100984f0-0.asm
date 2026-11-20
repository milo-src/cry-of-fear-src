
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100984f0 <.text+0x974f0>:
100984f0:	56                   	push   esi
100984f1:	8b f1                	mov    esi,ecx
100984f3:	51                   	push   ecx
100984f4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100984f7:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
100984fe:	00 00 00 
10098501:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10098504:	8b 16                	mov    edx,DWORD PTR [esi]
10098506:	f3 0f 10 80 58 02 00 	movss  xmm0,DWORD PTR [eax+0x258]
1009850d:	00 
1009850e:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10098515:	9f                   	lahf
10098516:	f6 c4 44             	test   ah,0x44
10098519:	7b 11                	jnp    0x1009852c
1009851b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10098520:	ff 52 08             	call   DWORD PTR [edx+0x8]
10098523:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1009852a:	5e                   	pop    esi
1009852b:	c3                   	ret
1009852c:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10098533:	ff 52 08             	call   DWORD PTR [edx+0x8]
10098536:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1009853d:	5e                   	pop    esi
1009853e:	c3                   	ret
