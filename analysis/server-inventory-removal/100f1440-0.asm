
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1440 <.text+0xf0440>:
100f1440:	55                   	push   ebp
100f1441:	8b ec                	mov    ebp,esp
100f1443:	83 ec 0c             	sub    esp,0xc
100f1446:	0f 57 c9             	xorps  xmm1,xmm1
100f1449:	56                   	push   esi
100f144a:	8b f1                	mov    esi,ecx
100f144c:	f3 0f 10 86 40 26 00 	movss  xmm0,DWORD PTR [esi+0x2640]
100f1453:	00 
100f1454:	0f 2e c1             	ucomiss xmm0,xmm1
100f1457:	9f                   	lahf
100f1458:	f6 c4 44             	test   ah,0x44
100f145b:	7a 11                	jp     0x100f146e
100f145d:	f3 0f 10 86 44 26 00 	movss  xmm0,DWORD PTR [esi+0x2644]
100f1464:	00 
100f1465:	0f 2e c1             	ucomiss xmm0,xmm1
100f1468:	9f                   	lahf
100f1469:	f6 c4 44             	test   ah,0x44
100f146c:	7b 3f                	jnp    0x100f14ad
100f146e:	0f 14 c9             	unpcklps xmm1,xmm1
100f1471:	83 ec 08             	sub    esp,0x8
100f1474:	66 0f d6 8e 40 26 00 	movq   QWORD PTR [esi+0x2640],xmm1
100f147b:	00 
100f147c:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100f1483:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100f1486:	89 86 48 26 00 00    	mov    DWORD PTR [esi+0x2648],eax
100f148c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f148f:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100f1496:	00 
100f1497:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f149e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f14a4:	ff 15 c0 30 22 10    	call   DWORD PTR ds:0x102230c0
100f14aa:	83 c4 0c             	add    esp,0xc
100f14ad:	c7 86 4c 26 00 00 00 	mov    DWORD PTR [esi+0x264c],0x0
100f14b4:	00 00 00 
100f14b7:	5e                   	pop    esi
100f14b8:	8b e5                	mov    esp,ebp
100f14ba:	5d                   	pop    ebp
100f14bb:	c3                   	ret
