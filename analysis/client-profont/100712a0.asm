
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

100712a0 <.text+0x702a0>:
100712a0:	55                   	push   ebp
100712a1:	8b ec                	mov    ebp,esp
100712a3:	81 ec 84 01 00 00    	sub    esp,0x184
100712a9:	a1 00 06 19 10       	mov    eax,ds:0x10190600
100712ae:	33 c5                	xor    eax,ebp
100712b0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100712b3:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100712b6:	56                   	push   esi
100712b7:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100712ba:	50                   	push   eax
100712bb:	e8 90 f5 00 00       	call   0x10080850
100712c0:	83 c4 08             	add    esp,0x8
100712c3:	e8 e8 f5 00 00       	call   0x100808b0
100712c8:	68 00 01 00 00       	push   0x100
100712cd:	8b f0                	mov    esi,eax
100712cf:	e8 8c f7 00 00       	call   0x10080a60
100712d4:	50                   	push   eax
100712d5:	8d 85 7c fe ff ff    	lea    eax,[ebp-0x184]
100712db:	50                   	push   eax
100712dc:	e8 1f d5 08 00       	call   0x100fe800
100712e1:	8d 85 7c fe ff ff    	lea    eax,[ebp-0x184]
100712e7:	68 4c ef 14 10       	push   0x1014ef4c
100712ec:	50                   	push   eax
100712ed:	e8 fe 29 06 00       	call   0x100d3cf0
100712f2:	83 c4 14             	add    esp,0x14
100712f5:	85 c0                	test   eax,eax
100712f7:	0f 84 97 00 00 00    	je     0x10071394
100712fd:	68 58 ef 14 10       	push   0x1014ef58
10071302:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
10071307:	e8 04 b8 ff ff       	call   0x1006cb10
1007130c:	85 c0                	test   eax,eax
1007130e:	74 26                	je     0x10071336
10071310:	68 58 ef 14 10       	push   0x1014ef58
10071315:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1007131a:	e8 f1 b7 ff ff       	call   0x1006cb10
1007131f:	50                   	push   eax
10071320:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
10071326:	68 60 ef 14 10       	push   0x1014ef60
1007132b:	50                   	push   eax
1007132c:	e8 cf b5 f9 ff       	call   0x1000c900
10071331:	83 c4 0c             	add    esp,0xc
10071334:	eb 43                	jmp    0x10071379
10071336:	0f 10 05 9c ef 14 10 	movups xmm0,XMMWORD PTR ds:0x1014ef9c
1007133d:	66 a1 d4 ef 14 10    	mov    ax,ds:0x1014efd4
10071343:	66 89 45 b4          	mov    WORD PTR [ebp-0x4c],ax
10071347:	a0 d6 ef 14 10       	mov    al,ds:0x1014efd6
1007134c:	0f 11 85 7c ff ff ff 	movups XMMWORD PTR [ebp-0x84],xmm0
10071353:	88 45 b6             	mov    BYTE PTR [ebp-0x4a],al
10071356:	0f 10 05 ac ef 14 10 	movups xmm0,XMMWORD PTR ds:0x1014efac
1007135d:	0f 11 45 8c          	movups XMMWORD PTR [ebp-0x74],xmm0
10071361:	0f 10 05 bc ef 14 10 	movups xmm0,XMMWORD PTR ds:0x1014efbc
10071368:	0f 11 45 9c          	movups XMMWORD PTR [ebp-0x64],xmm0
1007136c:	f3 0f 7e 05 cc ef 14 	movq   xmm0,QWORD PTR ds:0x1014efcc
10071373:	10 
10071374:	66 0f d6 45 ac       	movq   QWORD PTR [ebp-0x54],xmm0
10071379:	68 00 01 00 00       	push   0x100
1007137e:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
10071384:	50                   	push   eax
10071385:	8d 85 7c fe ff ff    	lea    eax,[ebp-0x184]
1007138b:	50                   	push   eax
1007138c:	e8 6f d4 08 00       	call   0x100fe800
10071391:	83 c4 0c             	add    esp,0xc
10071394:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071399:	85 c0                	test   eax,eax
1007139b:	0f 84 83 00 00 00    	je     0x10071424
100713a1:	8b 90 2c 14 00 00    	mov    edx,DWORD PTR [eax+0x142c]
100713a7:	85 d2                	test   edx,edx
100713a9:	74 79                	je     0x10071424
100713ab:	8d 8d 7c fe ff ff    	lea    ecx,[ebp-0x184]
100713b1:	81 c2 d4 00 00 00    	add    edx,0xd4
100713b7:	8a 01                	mov    al,BYTE PTR [ecx]
100713b9:	8d 49 01             	lea    ecx,[ecx+0x1]
100713bc:	88 02                	mov    BYTE PTR [edx],al
100713be:	8d 52 01             	lea    edx,[edx+0x1]
100713c1:	84 c0                	test   al,al
100713c3:	75 f2                	jne    0x100713b7
100713c5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713ca:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713d0:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x437f0000
100713d7:	00 7f 43 
100713da:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713df:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713e5:	c6 80 1c 0f 00 00 00 	mov    BYTE PTR [eax+0xf1c],0x0
100713ec:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100713f1:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
100713f7:	c6 80 1d 0f 00 00 00 	mov    BYTE PTR [eax+0xf1d],0x0
100713fe:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071403:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
10071409:	c7 80 20 0f 00 00 00 	mov    DWORD PTR [eax+0xf20],0x0
10071410:	00 00 00 
10071413:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10071418:	8b 80 2c 14 00 00    	mov    eax,DWORD PTR [eax+0x142c]
1007141e:	89 b0 bc 00 00 00    	mov    DWORD PTR [eax+0xbc],esi
10071424:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10071427:	b8 01 00 00 00       	mov    eax,0x1
1007142c:	33 cd                	xor    ecx,ebp
1007142e:	5e                   	pop    esi
1007142f:	e8 8c 2e 04 00       	call   0x100b42c0
10071434:	8b e5                	mov    esp,ebp
10071436:	5d                   	pop    ebp
10071437:	c3                   	ret
