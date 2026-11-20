
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003320 <.text+0x2320>:
10003320:	55                   	push   ebp
10003321:	8b ec                	mov    ebp,esp
10003323:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10003326:	83 ec 0c             	sub    esp,0xc
10003329:	0f 57 c9             	xorps  xmm1,xmm1
1000332c:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
10003330:	0f 2e c1             	ucomiss xmm0,xmm1
10003333:	9f                   	lahf
10003334:	f6 c4 44             	test   ah,0x44
10003337:	7a 4a                	jp     0x10003383
10003339:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
1000333e:	0f 2e c1             	ucomiss xmm0,xmm1
10003341:	9f                   	lahf
10003342:	f6 c4 44             	test   ah,0x44
10003345:	7a 3c                	jp     0x10003383
10003347:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000334a:	c7 00 00 00 80 3f    	mov    DWORD PTR [eax],0x3f800000
10003350:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10003357:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
1000335e:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
10003363:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10003366:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
1000336d:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10003371:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10003378:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
1000337f:	8b e5                	mov    esp,ebp
10003381:	5d                   	pop    ebp
10003382:	c3                   	ret
10003383:	57                   	push   edi
10003384:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10003387:	8d 45 f4             	lea    eax,[ebp-0xc]
1000338a:	57                   	push   edi
1000338b:	50                   	push   eax
1000338c:	51                   	push   ecx
1000338d:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
10003394:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1000339b:	c7 45 fc 00 00 80 3f 	mov    DWORD PTR [ebp-0x4],0x3f800000
100033a2:	e8 89 fa ff ff       	call   0x10002e30
100033a7:	57                   	push   edi
100033a8:	e8 23 00 00 00       	call   0x100033d0
100033ad:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100033b0:	dd d8                	fstp   st(0)
100033b2:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100033b5:	57                   	push   edi
100033b6:	e8 75 fa ff ff       	call   0x10002e30
100033bb:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100033be:	e8 0d 00 00 00       	call   0x100033d0
100033c3:	83 c4 20             	add    esp,0x20
100033c6:	dd d8                	fstp   st(0)
100033c8:	5f                   	pop    edi
100033c9:	8b e5                	mov    esp,ebp
100033cb:	5d                   	pop    ebp
100033cc:	c3                   	ret
