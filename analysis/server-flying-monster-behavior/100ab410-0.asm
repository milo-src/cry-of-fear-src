
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab410 <.text+0xaa410>:
100ab410:	55                   	push   ebp
100ab411:	8b ec                	mov    ebp,esp
100ab413:	83 ec 44             	sub    esp,0x44
100ab416:	56                   	push   esi
100ab417:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ab41a:	8d 45 bc             	lea    eax,[ebp-0x44]
100ab41d:	57                   	push   edi
100ab41e:	50                   	push   eax
100ab41f:	6a 00                	push   0x0
100ab421:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100ab425:	8d 45 f4             	lea    eax,[ebp-0xc]
100ab428:	f3 0f 10 4e 08       	movss  xmm1,DWORD PTR [esi+0x8]
100ab42d:	8b f9                	mov    edi,ecx
100ab42f:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100ab434:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
100ab439:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100ab43e:	0f 5a c1             	cvtps2pd xmm0,xmm1
100ab441:	6a 01                	push   0x1
100ab443:	50                   	push   eax
100ab444:	56                   	push   esi
100ab445:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
100ab44a:	f2 0f 58 05 30 ac 1c 	addsd  xmm0,QWORD PTR ds:0x101cac30
100ab451:	10 
100ab452:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100ab456:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100ab45b:	e8 a0 f3 06 00       	call   0x1011a800
100ab460:	f3 0f 10 45 cc       	movss  xmm0,DWORD PTR [ebp-0x34]
100ab465:	83 c4 14             	add    esp,0x14
100ab468:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100ab46f:	9f                   	lahf
100ab470:	f6 c4 44             	test   ah,0x44
100ab473:	7b 0c                	jnp    0x100ab481
100ab475:	f3 0f 10 45 d8       	movss  xmm0,DWORD PTR [ebp-0x28]
100ab47a:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100ab47f:	eb 05                	jmp    0x100ab486
100ab481:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100ab486:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100ab489:	f6 80 a8 01 00 00 02 	test   BYTE PTR [eax+0x1a8],0x2
100ab490:	74 24                	je     0x100ab4b6
100ab492:	83 ec 08             	sub    esp,0x8
100ab495:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100ab49b:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100ab4a0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ab4a5:	56                   	push   esi
100ab4a6:	e8 85 f5 06 00       	call   0x1011aa30
100ab4ab:	83 c4 0c             	add    esp,0xc
100ab4ae:	5f                   	pop    edi
100ab4af:	5e                   	pop    esi
100ab4b0:	8b e5                	mov    esp,ebp
100ab4b2:	5d                   	pop    ebp
100ab4b3:	c2 04 00             	ret    0x4
100ab4b6:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
100ab4b9:	5f                   	pop    edi
100ab4ba:	5e                   	pop    esi
100ab4bb:	8b e5                	mov    esp,ebp
100ab4bd:	5d                   	pop    ebp
100ab4be:	c2 04 00             	ret    0x4
