
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101490 <.text+0x100490>:
10101490:	55                   	push   ebp
10101491:	8b ec                	mov    ebp,esp
10101493:	83 e4 f8             	and    esp,0xfffffff8
10101496:	51                   	push   ecx
10101497:	53                   	push   ebx
10101498:	8b d9                	mov    ebx,ecx
1010149a:	56                   	push   esi
1010149b:	57                   	push   edi
1010149c:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
101014a2:	e8 d9 62 f1 ff       	call   0x10017780
101014a7:	85 c0                	test   eax,eax
101014a9:	74 7f                	je     0x1010152a
101014ab:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
101014b1:	e8 da 62 f1 ff       	call   0x10017790
101014b6:	85 c0                	test   eax,eax
101014b8:	0f 45 d8             	cmovne ebx,eax
101014bb:	33 f6                	xor    esi,esi
101014bd:	8d bb 70 03 00 00    	lea    edi,[ebx+0x370]
101014c3:	83 fe 04             	cmp    esi,0x4
101014c6:	72 04                	jb     0x101014cc
101014c8:	8b c3                	mov    eax,ebx
101014ca:	eb 07                	jmp    0x101014d3
101014cc:	8b cf                	mov    ecx,edi
101014ce:	e8 bd 62 f1 ff       	call   0x10017790
101014d3:	85 c0                	test   eax,eax
101014d5:	74 4a                	je     0x10101521
101014d7:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
101014da:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101014dd:	f3 0f 10 09          	movss  xmm1,DWORD PTR [ecx]
101014e1:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
101014e6:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
101014eb:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
101014f0:	f3 0f 59 c0          	mulss  xmm0,xmm0
101014f4:	f3 0f 59 c9          	mulss  xmm1,xmm1
101014f8:	f3 0f 58 c1          	addss  xmm0,xmm1
101014fc:	0f 57 c9             	xorps  xmm1,xmm1
101014ff:	0f 5a c0             	cvtps2pd xmm0,xmm0
10101502:	66 0f 2e c8          	ucomisd xmm1,xmm0
10101506:	77 06                	ja     0x1010150e
10101508:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1010150c:	eb 05                	jmp    0x10101513
1010150e:	e8 7d a9 06 00       	call   0x1016be90
10101513:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
10101518:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1010151c:	0f 2f c8             	comiss xmm1,xmm0
1010151f:	73 14                	jae    0x10101535
10101521:	46                   	inc    esi
10101522:	83 c7 08             	add    edi,0x8
10101525:	83 fe 05             	cmp    esi,0x5
10101528:	7c 99                	jl     0x101014c3
1010152a:	33 c0                	xor    eax,eax
1010152c:	5f                   	pop    edi
1010152d:	5e                   	pop    esi
1010152e:	5b                   	pop    ebx
1010152f:	8b e5                	mov    esp,ebp
10101531:	5d                   	pop    ebp
10101532:	c2 08 00             	ret    0x8
10101535:	5f                   	pop    edi
10101536:	5e                   	pop    esi
10101537:	b8 01 00 00 00       	mov    eax,0x1
1010153c:	5b                   	pop    ebx
1010153d:	8b e5                	mov    esp,ebp
1010153f:	5d                   	pop    ebp
10101540:	c2 08 00             	ret    0x8
