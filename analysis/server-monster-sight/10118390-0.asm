
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118390 <.text+0x117390>:
10118390:	55                   	push   ebp
10118391:	8b ec                	mov    ebp,esp
10118393:	6a 01                	push   0x1
10118395:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
1011839b:	83 c4 04             	add    esp,0x4
1011839e:	33 c9                	xor    ecx,ecx
101183a0:	85 c0                	test   eax,eax
101183a2:	75 02                	jne    0x101183a6
101183a4:	5d                   	pop    ebp
101183a5:	c3                   	ret
101183a6:	53                   	push   ebx
101183a7:	56                   	push   esi
101183a8:	57                   	push   edi
101183a9:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
101183af:	be 01 00 00 00       	mov    esi,0x1
101183b4:	39 b7 94 00 00 00    	cmp    DWORD PTR [edi+0x94],esi
101183ba:	0f 8e 98 00 00 00    	jle    0x10118458
101183c0:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
101183c3:	05 50 01 00 00       	add    eax,0x150
101183c8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
101183cf:	00 
101183d0:	83 b8 b0 fe ff ff 00 	cmp    DWORD PTR [eax-0x150],0x0
101183d7:	75 6d                	jne    0x10118446
101183d9:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
101183dc:	85 d2                	test   edx,edx
101183de:	74 08                	je     0x101183e8
101183e0:	85 90 d8 00 00 00    	test   DWORD PTR [eax+0xd8],edx
101183e6:	74 5e                	je     0x10118446
101183e8:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
101183eb:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
101183ef:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
101183f2:	77 52                	ja     0x10118446
101183f4:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
101183f9:	0f 2f 40 04          	comiss xmm0,DWORD PTR [eax+0x4]
101183fd:	77 47                	ja     0x10118446
101183ff:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
10118404:	0f 2f 40 08          	comiss xmm0,DWORD PTR [eax+0x8]
10118408:	77 3c                	ja     0x10118446
1011840a:	f3 0f 10 40 f4       	movss  xmm0,DWORD PTR [eax-0xc]
1011840f:	0f 2f 03             	comiss xmm0,DWORD PTR [ebx]
10118412:	77 32                	ja     0x10118446
10118414:	f3 0f 10 40 f8       	movss  xmm0,DWORD PTR [eax-0x8]
10118419:	0f 2f 43 04          	comiss xmm0,DWORD PTR [ebx+0x4]
1011841d:	77 27                	ja     0x10118446
1011841f:	f3 0f 10 40 fc       	movss  xmm0,DWORD PTR [eax-0x4]
10118424:	0f 2f 43 08          	comiss xmm0,DWORD PTR [ebx+0x8]
10118428:	77 1c                	ja     0x10118446
1011842a:	8b 90 2c ff ff ff    	mov    edx,DWORD PTR [eax-0xd4]
10118430:	85 d2                	test   edx,edx
10118432:	74 12                	je     0x10118446
10118434:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10118437:	89 14 8f             	mov    DWORD PTR [edi+ecx*4],edx
1011843a:	41                   	inc    ecx
1011843b:	3b 4d 0c             	cmp    ecx,DWORD PTR [ebp+0xc]
1011843e:	7d 18                	jge    0x10118458
10118440:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
10118446:	46                   	inc    esi
10118447:	05 2c 03 00 00       	add    eax,0x32c
1011844c:	3b b7 94 00 00 00    	cmp    esi,DWORD PTR [edi+0x94]
10118452:	0f 8c 78 ff ff ff    	jl     0x101183d0
10118458:	5f                   	pop    edi
10118459:	5e                   	pop    esi
1011845a:	8b c1                	mov    eax,ecx
1011845c:	5b                   	pop    ebx
1011845d:	5d                   	pop    ebp
1011845e:	c3                   	ret
