
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b320 <.text+0x11a320>:
1011b320:	55                   	push   ebp
1011b321:	8b ec                	mov    ebp,esp
1011b323:	51                   	push   ecx
1011b324:	56                   	push   esi
1011b325:	33 d2                	xor    edx,edx
1011b327:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1011b32a:	33 f6                	xor    esi,esi
1011b32c:	39 55 10             	cmp    DWORD PTR [ebp+0x10],edx
1011b32f:	7e 79                	jle    0x1011b3aa
1011b331:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011b336:	53                   	push   ebx
1011b337:	57                   	push   edi
1011b338:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
1011b33e:	66 90                	xchg   ax,ax
1011b340:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011b343:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
1011b346:	03 cb                	add    ecx,ebx
1011b348:	8d 79 01             	lea    edi,[ecx+0x1]
1011b34b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1011b350:	8a 01                	mov    al,BYTE PTR [ecx]
1011b352:	41                   	inc    ecx
1011b353:	84 c0                	test   al,al
1011b355:	75 f9                	jne    0x1011b350
1011b357:	2b cf                	sub    ecx,edi
1011b359:	46                   	inc    esi
1011b35a:	42                   	inc    edx
1011b35b:	03 f1                	add    esi,ecx
1011b35d:	3b 55 10             	cmp    edx,DWORD PTR [ebp+0x10]
1011b360:	7c de                	jl     0x1011b340
1011b362:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
1011b365:	8b cb                	mov    ecx,ebx
1011b367:	56                   	push   esi
1011b368:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b36b:	e8 60 ae ff ff       	call   0x101161d0
1011b370:	33 f6                	xor    esi,esi
1011b372:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011b375:	8b 14 b0             	mov    edx,DWORD PTR [eax+esi*4]
1011b378:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011b37d:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
1011b383:	8b c2                	mov    eax,edx
1011b385:	8d 78 01             	lea    edi,[eax+0x1]
1011b388:	8a 08                	mov    cl,BYTE PTR [eax]
1011b38a:	40                   	inc    eax
1011b38b:	84 c9                	test   cl,cl
1011b38d:	75 f9                	jne    0x1011b388
1011b38f:	2b c7                	sub    eax,edi
1011b391:	8b cb                	mov    ecx,ebx
1011b393:	40                   	inc    eax
1011b394:	50                   	push   eax
1011b395:	52                   	push   edx
1011b396:	e8 a5 ad ff ff       	call   0x10116140
1011b39b:	46                   	inc    esi
1011b39c:	3b 75 10             	cmp    esi,DWORD PTR [ebp+0x10]
1011b39f:	7c d1                	jl     0x1011b372
1011b3a1:	5f                   	pop    edi
1011b3a2:	5b                   	pop    ebx
1011b3a3:	5e                   	pop    esi
1011b3a4:	8b e5                	mov    esp,ebp
1011b3a6:	5d                   	pop    ebp
1011b3a7:	c2 0c 00             	ret    0xc
1011b3aa:	6a 00                	push   0x0
1011b3ac:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b3af:	e8 1c ae ff ff       	call   0x101161d0
1011b3b4:	5e                   	pop    esi
1011b3b5:	8b e5                	mov    esp,ebp
1011b3b7:	5d                   	pop    ebp
1011b3b8:	c2 0c 00             	ret    0xc
