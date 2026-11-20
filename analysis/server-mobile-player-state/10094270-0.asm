
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10094270 <.text+0x93270>:
10094270:	55                   	push   ebp
10094271:	8b ec                	mov    ebp,esp
10094273:	51                   	push   ecx
10094274:	f3 0f 10 0d 28 97 1a 	movss  xmm1,DWORD PTR ds:0x101a9728
1009427b:	10 
1009427c:	53                   	push   ebx
1009427d:	8b d9                	mov    ebx,ecx
1009427f:	57                   	push   edi
10094280:	51                   	push   ecx
10094281:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10094284:	66 0f 6e 80 48 02 00 	movd   xmm0,DWORD PTR [eax+0x248]
1009428b:	00 
1009428c:	83 c0 08             	add    eax,0x8
1009428f:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10094292:	f3 0f 5f c8          	maxss  xmm1,xmm0
10094296:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1009429b:	50                   	push   eax
1009429c:	6a 00                	push   0x0
1009429e:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100942a3:	e8 08 44 08 00       	call   0x101186b0
100942a8:	8b f8                	mov    edi,eax
100942aa:	83 c4 0c             	add    esp,0xc
100942ad:	85 ff                	test   edi,edi
100942af:	74 75                	je     0x10094326
100942b1:	56                   	push   esi
100942b2:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100942b5:	be 30 21 1a 10       	mov    esi,0x101a2130
100942ba:	8b 11                	mov    edx,DWORD PTR [ecx]
100942bc:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100942c2:	03 91 98 00 00 00    	add    edx,DWORD PTR [ecx+0x98]
100942c8:	8a 02                	mov    al,BYTE PTR [edx]
100942ca:	3a 06                	cmp    al,BYTE PTR [esi]
100942cc:	75 1a                	jne    0x100942e8
100942ce:	84 c0                	test   al,al
100942d0:	74 12                	je     0x100942e4
100942d2:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
100942d5:	3a 46 01             	cmp    al,BYTE PTR [esi+0x1]
100942d8:	75 0e                	jne    0x100942e8
100942da:	83 c2 02             	add    edx,0x2
100942dd:	83 c6 02             	add    esi,0x2
100942e0:	84 c0                	test   al,al
100942e2:	75 e4                	jne    0x100942c8
100942e4:	33 c0                	xor    eax,eax
100942e6:	eb 05                	jmp    0x100942ed
100942e8:	1b c0                	sbb    eax,eax
100942ea:	83 c8 01             	or     eax,0x1
100942ed:	85 c0                	test   eax,eax
100942ef:	74 2a                	je     0x1009431b
100942f1:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100942f4:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100942f9:	83 c0 08             	add    eax,0x8
100942fc:	51                   	push   ecx
100942fd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10094302:	50                   	push   eax
10094303:	57                   	push   edi
10094304:	e8 a7 43 08 00       	call   0x101186b0
10094309:	8b f8                	mov    edi,eax
1009430b:	83 c4 0c             	add    esp,0xc
1009430e:	85 ff                	test   edi,edi
10094310:	75 a0                	jne    0x100942b2
10094312:	5e                   	pop    esi
10094313:	5f                   	pop    edi
10094314:	5b                   	pop    ebx
10094315:	8b e5                	mov    esp,ebp
10094317:	5d                   	pop    ebp
10094318:	c2 04 00             	ret    0x4
1009431b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1009431e:	8b cb                	mov    ecx,ebx
10094320:	e8 ab d9 00 00       	call   0x100a1cd0
10094325:	5e                   	pop    esi
10094326:	5f                   	pop    edi
10094327:	5b                   	pop    ebx
10094328:	8b e5                	mov    esp,ebp
1009432a:	5d                   	pop    ebp
1009432b:	c2 04 00             	ret    0x4
