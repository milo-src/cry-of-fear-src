
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000b260 <.text+0xa260>:
1000b260:	55                   	push   ebp
1000b261:	8b ec                	mov    ebp,esp
1000b263:	83 e4 f8             	and    esp,0xfffffff8
1000b266:	51                   	push   ecx
1000b267:	56                   	push   esi
1000b268:	8b f1                	mov    esi,ecx
1000b26a:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
1000b26e:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000b273:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b277:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b27b:	f3 0f 58 c8          	addss  xmm1,xmm0
1000b27f:	0f 5a c1             	cvtps2pd xmm0,xmm1
1000b282:	0f 57 c9             	xorps  xmm1,xmm1
1000b285:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b289:	77 06                	ja     0x1000b291
1000b28b:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b28f:	eb 05                	jmp    0x1000b296
1000b291:	e8 fa 0b 16 00       	call   0x1016be90
1000b296:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000b299:	0f 57 c9             	xorps  xmm1,xmm1
1000b29c:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000b2a0:	0f 57 c0             	xorps  xmm0,xmm0
1000b2a3:	0f 2e c8             	ucomiss xmm1,xmm0
1000b2a6:	9f                   	lahf
1000b2a7:	f6 c4 44             	test   ah,0x44
1000b2aa:	8b c1                	mov    eax,ecx
1000b2ac:	7a 14                	jp     0x1000b2c2
1000b2ae:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
1000b2b4:	c7 41 04 00 00 00 00 	mov    DWORD PTR [ecx+0x4],0x0
1000b2bb:	5e                   	pop    esi
1000b2bc:	8b e5                	mov    esp,ebp
1000b2be:	5d                   	pop    ebp
1000b2bf:	c2 04 00             	ret    0x4
1000b2c2:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1000b2c9:	10 
1000b2ca:	f3 0f 5e c1          	divss  xmm0,xmm1
1000b2ce:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
1000b2d2:	f3 0f 59 c8          	mulss  xmm1,xmm0
1000b2d6:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
1000b2da:	f3 0f 10 4e 04       	movss  xmm1,DWORD PTR [esi+0x4]
1000b2df:	f3 0f 59 c8          	mulss  xmm1,xmm0
1000b2e3:	5e                   	pop    esi
1000b2e4:	f3 0f 11 49 04       	movss  DWORD PTR [ecx+0x4],xmm1
1000b2e9:	8b e5                	mov    esp,ebp
1000b2eb:	5d                   	pop    ebp
1000b2ec:	c2 04 00             	ret    0x4
