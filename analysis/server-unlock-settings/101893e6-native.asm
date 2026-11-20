
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101893e6 <.text+0x1883e6>:
101893e6:	8b ff                	mov    edi,edi
101893e8:	55                   	push   ebp
101893e9:	8b ec                	mov    ebp,esp
101893eb:	83 ec 28             	sub    esp,0x28
101893ee:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
101893f3:	33 c5                	xor    eax,ebp
101893f5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101893f8:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
101893fb:	53                   	push   ebx
101893fc:	56                   	push   esi
101893fd:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10189400:	89 45 d8             	mov    DWORD PTR [ebp-0x28],eax
10189403:	33 c0                	xor    eax,eax
10189405:	57                   	push   edi
10189406:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10189409:	83 f8 20             	cmp    eax,0x20
1018940c:	0f 83 ba 00 00 00    	jae    0x101894cc
10189412:	c6 44 05 dc 00       	mov    BYTE PTR [ebp+eax*1-0x24],0x0
10189417:	40                   	inc    eax
10189418:	83 f8 20             	cmp    eax,0x20
1018941b:	7c ef                	jl     0x1018940c
1018941d:	8a 1e                	mov    bl,BYTE PTR [esi]
1018941f:	0f b6 d3             	movzx  edx,bl
10189422:	8b ca                	mov    ecx,edx
10189424:	83 e2 07             	and    edx,0x7
10189427:	c1 e9 03             	shr    ecx,0x3
1018942a:	0f b6 44 0d dc       	movzx  eax,BYTE PTR [ebp+ecx*1-0x24]
1018942f:	0f ab d0             	bts    eax,edx
10189432:	46                   	inc    esi
10189433:	88 44 0d dc          	mov    BYTE PTR [ebp+ecx*1-0x24],al
10189437:	84 db                	test   bl,bl
10189439:	75 e2                	jne    0x1018941d
1018943b:	85 ff                	test   edi,edi
1018943d:	75 05                	jne    0x10189444
1018943f:	8b 7d d8             	mov    edi,DWORD PTR [ebp-0x28]
10189442:	8b 3f                	mov    edi,DWORD PTR [edi]
10189444:	0f b6 17             	movzx  edx,BYTE PTR [edi]
10189447:	33 c0                	xor    eax,eax
10189449:	8b ca                	mov    ecx,edx
1018944b:	40                   	inc    eax
1018944c:	83 e1 07             	and    ecx,0x7
1018944f:	c1 ea 03             	shr    edx,0x3
10189452:	d3 e0                	shl    eax,cl
10189454:	8b df                	mov    ebx,edi
10189456:	84 44 15 dc          	test   BYTE PTR [ebp+edx*1-0x24],al
1018945a:	74 26                	je     0x10189482
1018945c:	8b f7                	mov    esi,edi
1018945e:	80 3f 00             	cmp    BYTE PTR [edi],0x0
10189461:	8b de                	mov    ebx,esi
10189463:	74 1d                	je     0x10189482
10189465:	8d 7e 01             	lea    edi,[esi+0x1]
10189468:	33 c0                	xor    eax,eax
1018946a:	0f b6 17             	movzx  edx,BYTE PTR [edi]
1018946d:	40                   	inc    eax
1018946e:	8b ca                	mov    ecx,edx
10189470:	8b f7                	mov    esi,edi
10189472:	83 e1 07             	and    ecx,0x7
10189475:	c1 ea 03             	shr    edx,0x3
10189478:	d3 e0                	shl    eax,cl
1018947a:	8b df                	mov    ebx,edi
1018947c:	84 44 15 dc          	test   BYTE PTR [ebp+edx*1-0x24],al
10189480:	75 dc                	jne    0x1018945e
10189482:	80 3f 00             	cmp    BYTE PTR [edi],0x0
10189485:	8b f3                	mov    esi,ebx
10189487:	74 25                	je     0x101894ae
10189489:	0f b6 16             	movzx  edx,BYTE PTR [esi]
1018948c:	33 c0                	xor    eax,eax
1018948e:	8b ca                	mov    ecx,edx
10189490:	40                   	inc    eax
10189491:	83 e1 07             	and    ecx,0x7
10189494:	c1 ea 03             	shr    edx,0x3
10189497:	d3 e0                	shl    eax,cl
10189499:	46                   	inc    esi
1018949a:	84 44 15 dc          	test   BYTE PTR [ebp+edx*1-0x24],al
1018949e:	75 09                	jne    0x101894a9
101894a0:	8b fe                	mov    edi,esi
101894a2:	80 3f 00             	cmp    BYTE PTR [edi],0x0
101894a5:	75 e2                	jne    0x10189489
101894a7:	eb 05                	jmp    0x101894ae
101894a9:	c6 07 00             	mov    BYTE PTR [edi],0x0
101894ac:	8b fe                	mov    edi,esi
101894ae:	8b 45 d8             	mov    eax,DWORD PTR [ebp-0x28]
101894b1:	2b f3                	sub    esi,ebx
101894b3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101894b6:	f7 de                	neg    esi
101894b8:	1b f6                	sbb    esi,esi
101894ba:	33 cd                	xor    ecx,ebp
101894bc:	23 f3                	and    esi,ebx
101894be:	89 38                	mov    DWORD PTR [eax],edi
101894c0:	5f                   	pop    edi
101894c1:	8b c6                	mov    eax,esi
101894c3:	5e                   	pop    esi
101894c4:	5b                   	pop    ebx
101894c5:	e8 e9 46 fb ff       	call   0x1013dbb3
101894ca:	c9                   	leave
101894cb:	c3                   	ret
101894cc:	e8 77 48 fb ff       	call   0x1013dd48
101894d1:	cc                   	int3
