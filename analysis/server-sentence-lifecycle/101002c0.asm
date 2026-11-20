
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101002c0 <.text+0xff2c0>:
101002c0:	55                   	push   ebp
101002c1:	8b ec                	mov    ebp,esp
101002c3:	51                   	push   ecx
101002c4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101002c9:	53                   	push   ebx
101002ca:	56                   	push   esi
101002cb:	8b f1                	mov    esi,ecx
101002cd:	57                   	push   edi
101002ce:	8b b8 98 00 00 00    	mov    edi,DWORD PTR [eax+0x98]
101002d4:	6a 01                	push   0x1
101002d6:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
101002d9:	03 ba d8 01 00 00    	add    edi,DWORD PTR [edx+0x1d8]
101002df:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
101002e5:	83 c4 04             	add    esp,0x4
101002e8:	85 c0                	test   eax,eax
101002ea:	75 12                	jne    0x101002fe
101002ec:	50                   	push   eax
101002ed:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
101002f3:	83 c4 04             	add    esp,0x4
101002f6:	85 c0                	test   eax,eax
101002f8:	75 04                	jne    0x101002fe
101002fa:	33 db                	xor    ebx,ebx
101002fc:	eb 03                	jmp    0x10100301
101002fe:	8b 58 7c             	mov    ebx,DWORD PTR [eax+0x7c]
10100301:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10100304:	83 ba d8 01 00 00 00 	cmp    DWORD PTR [edx+0x1d8],0x0
1010030b:	74 2c                	je     0x10100339
1010030d:	8b cf                	mov    ecx,edi
1010030f:	8d 41 01             	lea    eax,[ecx+0x1]
10100312:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10100315:	8a 01                	mov    al,BYTE PTR [ecx]
10100317:	41                   	inc    ecx
10100318:	84 c0                	test   al,al
1010031a:	75 f9                	jne    0x10100315
1010031c:	2b 4d fc             	sub    ecx,DWORD PTR [ebp-0x4]
1010031f:	83 f9 01             	cmp    ecx,0x1
10100322:	76 15                	jbe    0x10100339
10100324:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10100327:	57                   	push   edi
10100328:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1010032e:	e8 bd c7 ff ff       	call   0x100fcaf0
10100333:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10100336:	83 c4 08             	add    esp,0x8
10100339:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010033e:	8b 8a d4 01 00 00    	mov    ecx,DWORD PTR [edx+0x1d4]
10100344:	8b b8 98 00 00 00    	mov    edi,DWORD PTR [eax+0x98]
1010034a:	03 f9                	add    edi,ecx
1010034c:	85 c9                	test   ecx,ecx
1010034e:	0f 84 a8 00 00 00    	je     0x101003fc
10100354:	8b cf                	mov    ecx,edi
10100356:	8d 51 01             	lea    edx,[ecx+0x1]
10100359:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10100360:	8a 01                	mov    al,BYTE PTR [ecx]
10100362:	41                   	inc    ecx
10100363:	84 c0                	test   al,al
10100365:	75 f9                	jne    0x10100360
10100367:	2b ca                	sub    ecx,edx
10100369:	83 f9 01             	cmp    ecx,0x1
1010036c:	0f 86 8a 00 00 00    	jbe    0x101003fc
10100372:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10100375:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1010037b:	6a 00                	push   0x0
1010037d:	ff 35 50 65 22 10    	push   DWORD PTR ds:0x10226550
10100383:	6a 01                	push   0x1
10100385:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1010038b:	57                   	push   edi
1010038c:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10100392:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10100395:	83 c4 10             	add    esp,0x10
10100398:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
1010039f:	00 
101003a0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101003a5:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
101003ab:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101003ae:	f3 0f 2c 80 54 01 00 	cvttss2si eax,DWORD PTR [eax+0x154]
101003b5:	00 
101003b6:	50                   	push   eax
101003b7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101003bd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101003c0:	f3 0f 2c 80 58 01 00 	cvttss2si eax,DWORD PTR [eax+0x158]
101003c7:	00 
101003c8:	50                   	push   eax
101003c9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101003cf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101003d2:	f3 0f 2c 80 5c 01 00 	cvttss2si eax,DWORD PTR [eax+0x15c]
101003d9:	00 
101003da:	50                   	push   eax
101003db:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101003e1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101003e4:	f3 0f 2c 80 50 01 00 	cvttss2si eax,DWORD PTR [eax+0x150]
101003eb:	00 
101003ec:	50                   	push   eax
101003ed:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101003f3:	83 c4 14             	add    esp,0x14
101003f6:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
101003fc:	5f                   	pop    edi
101003fd:	5e                   	pop    esi
101003fe:	5b                   	pop    ebx
101003ff:	8b e5                	mov    esp,ebp
10100401:	5d                   	pop    ebp
10100402:	c2 10 00             	ret    0x10
