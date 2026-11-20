
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ba510 <.text+0xb9510>:
100ba510:	55                   	push   ebp
100ba511:	8b ec                	mov    ebp,esp
100ba513:	81 ec 84 00 00 00    	sub    esp,0x84
100ba519:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100ba51e:	33 c5                	xor    eax,ebp
100ba520:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ba523:	53                   	push   ebx
100ba524:	57                   	push   edi
100ba525:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100ba528:	8b d9                	mov    ebx,ecx
100ba52a:	57                   	push   edi
100ba52b:	e8 a0 06 00 00       	call   0x100babd0
100ba530:	83 7f 0c 00          	cmp    DWORD PTR [edi+0xc],0x0
100ba534:	75 6e                	jne    0x100ba5a4
100ba536:	56                   	push   esi
100ba537:	33 f6                	xor    esi,esi
100ba539:	8d 83 e0 00 00 00    	lea    eax,[ebx+0xe0]
100ba53f:	90                   	nop
100ba540:	83 38 00             	cmp    DWORD PTR [eax],0x0
100ba543:	74 1c                	je     0x100ba561
100ba545:	46                   	inc    esi
100ba546:	83 c0 04             	add    eax,0x4
100ba549:	83 fe 20             	cmp    esi,0x20
100ba54c:	7c f2                	jl     0x100ba540
100ba54e:	5e                   	pop    esi
100ba54f:	5f                   	pop    edi
100ba550:	5b                   	pop    ebx
100ba551:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ba554:	33 cd                	xor    ecx,ebp
100ba556:	e8 58 36 08 00       	call   0x1013dbb3
100ba55b:	8b e5                	mov    esp,ebp
100ba55d:	5d                   	pop    ebp
100ba55e:	c2 04 00             	ret    0x4
100ba561:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100ba567:	50                   	push   eax
100ba568:	ff 77 04             	push   DWORD PTR [edi+0x4]
100ba56b:	e8 f0 01 06 00       	call   0x1011a760
100ba570:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100ba576:	50                   	push   eax
100ba577:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100ba57d:	89 84 b3 e0 00 00 00 	mov    DWORD PTR [ebx+esi*4+0xe0],eax
100ba584:	ff 77 08             	push   DWORD PTR [edi+0x8]
100ba587:	e8 d2 0f 0b 00       	call   0x1016b55e
100ba58c:	b9 01 00 00 00       	mov    ecx,0x1
100ba591:	83 c4 10             	add    esp,0x10
100ba594:	3b c1                	cmp    eax,ecx
100ba596:	0f 4c c1             	cmovl  eax,ecx
100ba599:	89 84 b3 60 01 00 00 	mov    DWORD PTR [ebx+esi*4+0x160],eax
100ba5a0:	89 4f 0c             	mov    DWORD PTR [edi+0xc],ecx
100ba5a3:	5e                   	pop    esi
100ba5a4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ba5a7:	5f                   	pop    edi
100ba5a8:	33 cd                	xor    ecx,ebp
100ba5aa:	5b                   	pop    ebx
100ba5ab:	e8 03 36 08 00       	call   0x1013dbb3
100ba5b0:	8b e5                	mov    esp,ebp
100ba5b2:	5d                   	pop    ebp
100ba5b3:	c2 04 00             	ret    0x4
