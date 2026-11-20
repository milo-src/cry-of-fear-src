
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101860 <.text+0x100860>:
10101860:	55                   	push   ebp
10101861:	8b ec                	mov    ebp,esp
10101863:	53                   	push   ebx
10101864:	8b d9                	mov    ebx,ecx
10101866:	56                   	push   esi
10101867:	57                   	push   edi
10101868:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
1010186e:	e8 1d 5f f1 ff       	call   0x10017790
10101873:	85 c0                	test   eax,eax
10101875:	8b d3                	mov    edx,ebx
10101877:	0f 45 d0             	cmovne edx,eax
1010187a:	39 55 08             	cmp    DWORD PTR [ebp+0x8],edx
1010187d:	75 34                	jne    0x101018b3
1010187f:	33 ff                	xor    edi,edi
10101881:	8d b3 70 03 00 00    	lea    esi,[ebx+0x370]
10101887:	8b ce                	mov    ecx,esi
10101889:	e8 02 5f f1 ff       	call   0x10017790
1010188e:	85 c0                	test   eax,eax
10101890:	74 16                	je     0x101018a8
10101892:	6a 00                	push   0x0
10101894:	8d 88 68 03 00 00    	lea    ecx,[eax+0x368]
1010189a:	e8 a1 5e f1 ff       	call   0x10017740
1010189f:	6a 00                	push   0x0
101018a1:	8b ce                	mov    ecx,esi
101018a3:	e8 98 5e f1 ff       	call   0x10017740
101018a8:	47                   	inc    edi
101018a9:	83 c6 08             	add    esi,0x8
101018ac:	83 ff 04             	cmp    edi,0x4
101018af:	7c d6                	jl     0x10101887
101018b1:	eb 3c                	jmp    0x101018ef
101018b3:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
101018b9:	e8 d2 5e f1 ff       	call   0x10017790
101018be:	85 c0                	test   eax,eax
101018c0:	75 06                	jne    0x101018c8
101018c2:	8b c3                	mov    eax,ebx
101018c4:	85 c0                	test   eax,eax
101018c6:	74 27                	je     0x101018ef
101018c8:	33 ff                	xor    edi,edi
101018ca:	8d b0 70 03 00 00    	lea    esi,[eax+0x370]
101018d0:	8b ce                	mov    ecx,esi
101018d2:	e8 b9 5e f1 ff       	call   0x10017790
101018d7:	3b c3                	cmp    eax,ebx
101018d9:	74 0b                	je     0x101018e6
101018db:	47                   	inc    edi
101018dc:	83 c6 08             	add    esi,0x8
101018df:	83 ff 04             	cmp    edi,0x4
101018e2:	7c ec                	jl     0x101018d0
101018e4:	eb 09                	jmp    0x101018ef
101018e6:	6a 00                	push   0x0
101018e8:	8b ce                	mov    ecx,esi
101018ea:	e8 51 5e f1 ff       	call   0x10017740
101018ef:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
101018f2:	6a 00                	push   0x0
101018f4:	8d 89 68 03 00 00    	lea    ecx,[ecx+0x368]
101018fa:	e8 41 5e f1 ff       	call   0x10017740
101018ff:	5f                   	pop    edi
10101900:	5e                   	pop    esi
10101901:	5b                   	pop    ebx
10101902:	5d                   	pop    ebp
10101903:	c2 04 00             	ret    0x4
