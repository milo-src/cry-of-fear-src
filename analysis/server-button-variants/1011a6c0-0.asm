
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a6c0 <.text+0x1196c0>:
1011a6c0:	55                   	push   ebp
1011a6c1:	8b ec                	mov    ebp,esp
1011a6c3:	81 ec 84 00 00 00    	sub    esp,0x84
1011a6c9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011a6ce:	33 c5                	xor    eax,ebp
1011a6d0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1011a6d3:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1011a6d6:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]
1011a6dc:	53                   	push   ebx
1011a6dd:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1011a6e0:	2b d1                	sub    edx,ecx
1011a6e2:	57                   	push   edi
1011a6e3:	8a 01                	mov    al,BYTE PTR [ecx]
1011a6e5:	8d 49 01             	lea    ecx,[ecx+0x1]
1011a6e8:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
1011a6ec:	84 c0                	test   al,al
1011a6ee:	75 f3                	jne    0x1011a6e3
1011a6f0:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1011a6f6:	33 ff                	xor    edi,edi
1011a6f8:	56                   	push   esi
1011a6f9:	8b f0                	mov    esi,eax
1011a6fb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1011a700:	50                   	push   eax
1011a701:	e8 e6 4e 05 00       	call   0x1016f5ec
1011a706:	8a 06                	mov    al,BYTE PTR [esi]
1011a708:	83 c4 04             	add    esp,0x4
1011a70b:	d9 1c bb             	fstp   DWORD PTR [ebx+edi*4]
1011a70e:	84 c0                	test   al,al
1011a710:	74 15                	je     0x1011a727
1011a712:	46                   	inc    esi
1011a713:	3c 20                	cmp    al,0x20
1011a715:	74 08                	je     0x1011a71f
1011a717:	8a 06                	mov    al,BYTE PTR [esi]
1011a719:	84 c0                	test   al,al
1011a71b:	75 f5                	jne    0x1011a712
1011a71d:	eb 08                	jmp    0x1011a727
1011a71f:	47                   	inc    edi
1011a720:	8b c6                	mov    eax,esi
1011a722:	83 ff 03             	cmp    edi,0x3
1011a725:	7c d9                	jl     0x1011a700
1011a727:	5e                   	pop    esi
1011a728:	83 ff 02             	cmp    edi,0x2
1011a72b:	73 17                	jae    0x1011a744
1011a72d:	8d 57 01             	lea    edx,[edi+0x1]
1011a730:	b9 03 00 00 00       	mov    ecx,0x3
1011a735:	2b ca                	sub    ecx,edx
1011a737:	8d 3c 93             	lea    edi,[ebx+edx*4]
1011a73a:	c1 e1 02             	shl    ecx,0x2
1011a73d:	c1 e9 02             	shr    ecx,0x2
1011a740:	33 c0                	xor    eax,eax
1011a742:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1011a744:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011a747:	5f                   	pop    edi
1011a748:	33 cd                	xor    ecx,ebp
1011a74a:	5b                   	pop    ebx
1011a74b:	e8 63 34 02 00       	call   0x1013dbb3
1011a750:	8b e5                	mov    esp,ebp
1011a752:	5d                   	pop    ebp
1011a753:	c3                   	ret
