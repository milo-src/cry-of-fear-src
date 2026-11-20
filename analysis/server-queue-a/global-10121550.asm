
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10121550 <.text+0x120550>:
10121550:	55                   	push   ebp
10121551:	8b ec                	mov    ebp,esp
10121553:	83 ec 70             	sub    esp,0x70
10121556:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1012155b:	33 c5                	xor    eax,ebp
1012155d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10121560:	53                   	push   ebx
10121561:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10121564:	56                   	push   esi
10121565:	57                   	push   edi
10121566:	8b f9                	mov    edi,ecx
10121568:	e8 63 ef ff ff       	call   0x101204d0
1012156d:	6a 01                	push   0x1
1012156f:	68 30 b9 21 10       	push   0x1021b930
10121574:	57                   	push   edi
10121575:	68 ec 6d 1e 10       	push   0x101e6dec
1012157a:	8b cb                	mov    ecx,ebx
1012157c:	e8 8f 5a ff ff       	call   0x10117010
10121581:	85 c0                	test   eax,eax
10121583:	74 75                	je     0x101215fa
10121585:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10121588:	33 f6                	xor    esi,esi
1012158a:	89 45 90             	mov    DWORD PTR [ebp-0x70],eax
1012158d:	c7 47 04 00 00 00 00 	mov    DWORD PTR [edi+0x4],0x0
10121594:	85 c0                	test   eax,eax
10121596:	7e 4a                	jle    0x101215e2
10121598:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1012159f:	00 
101215a0:	6a 03                	push   0x3
101215a2:	68 a0 ba 21 10       	push   0x1021baa0
101215a7:	8d 45 94             	lea    eax,[ebp-0x6c]
101215aa:	8b cb                	mov    ecx,ebx
101215ac:	50                   	push   eax
101215ad:	68 fc 6d 1e 10       	push   0x101e6dfc
101215b2:	e8 59 5a ff ff       	call   0x10117010
101215b7:	85 c0                	test   eax,eax
101215b9:	74 3f                	je     0x101215fa
101215bb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101215c0:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
101215c3:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
101215c9:	8d 45 d4             	lea    eax,[ebp-0x2c]
101215cc:	2b c1                	sub    eax,ecx
101215ce:	50                   	push   eax
101215cf:	8d 45 94             	lea    eax,[ebp-0x6c]
101215d2:	2b c1                	sub    eax,ecx
101215d4:	8b cf                	mov    ecx,edi
101215d6:	50                   	push   eax
101215d7:	e8 94 f0 ff ff       	call   0x10120670
101215dc:	46                   	inc    esi
101215dd:	3b 75 90             	cmp    esi,DWORD PTR [ebp-0x70]
101215e0:	7c be                	jl     0x101215a0
101215e2:	5f                   	pop    edi
101215e3:	5e                   	pop    esi
101215e4:	b8 01 00 00 00       	mov    eax,0x1
101215e9:	5b                   	pop    ebx
101215ea:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101215ed:	33 cd                	xor    ecx,ebp
101215ef:	e8 bf c5 01 00       	call   0x1013dbb3
101215f4:	8b e5                	mov    esp,ebp
101215f6:	5d                   	pop    ebp
101215f7:	c2 04 00             	ret    0x4
101215fa:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101215fd:	33 c0                	xor    eax,eax
101215ff:	5f                   	pop    edi
10121600:	5e                   	pop    esi
10121601:	33 cd                	xor    ecx,ebp
10121603:	5b                   	pop    ebx
10121604:	e8 aa c5 01 00       	call   0x1013dbb3
10121609:	8b e5                	mov    esp,ebp
1012160b:	5d                   	pop    ebp
1012160c:	c2 04 00             	ret    0x4
