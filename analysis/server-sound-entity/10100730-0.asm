
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100730 <.text+0xff730>:
10100730:	55                   	push   ebp
10100731:	8b ec                	mov    ebp,esp
10100733:	51                   	push   ecx
10100734:	53                   	push   ebx
10100735:	8b d9                	mov    ebx,ecx
10100737:	56                   	push   esi
10100738:	57                   	push   edi
10100739:	33 f6                	xor    esi,esi
1010073b:	c7 83 dc 00 00 00 00 	mov    DWORD PTR [ebx+0xdc],0x0
10100742:	00 00 00 
10100745:	8d bb 04 01 00 00    	lea    edi,[ebx+0x104]
1010074b:	c7 83 e0 00 00 00 ff 	mov    DWORD PTR [ebx+0xe0],0xffffffff
10100752:	ff ff ff 
10100755:	8d 4f e8             	lea    ecx,[edi-0x18]
10100758:	e8 23 fe ff ff       	call   0x10100580
1010075d:	46                   	inc    esi
1010075e:	8d 7f 20             	lea    edi,[edi+0x20]
10100761:	89 77 e0             	mov    DWORD PTR [edi-0x20],esi
10100764:	83 fe 40             	cmp    esi,0x40
10100767:	7c ec                	jl     0x10100755
10100769:	c1 e6 05             	shl    esi,0x5
1010076c:	c7 84 1e e4 00 00 00 	mov    DWORD PTR [esi+ebx*1+0xe4],0xffffffff
10100773:	ff ff ff ff 
10100777:	33 f6                	xor    esi,esi
10100779:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010077e:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
10100784:	7e 3a                	jle    0x101007c0
10100786:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
1010078d:	00 00 00 
10100790:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
10100796:	e8 e5 fe ff ff       	call   0x10100680
1010079b:	83 f8 ff             	cmp    eax,0xffffffff
1010079e:	74 54                	je     0x101007f4
101007a0:	8d 48 08             	lea    ecx,[eax+0x8]
101007a3:	46                   	inc    esi
101007a4:	a1 70 0d 23 10       	mov    eax,ds:0x10230d70
101007a9:	c1 e1 05             	shl    ecx,0x5
101007ac:	c7 04 01 00 00 80 bf 	mov    DWORD PTR [ecx+eax*1],0xbf800000
101007b3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101007b8:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
101007be:	7c d0                	jl     0x10100790
101007c0:	68 34 b5 1c 10       	push   0x101cb534
101007c5:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
101007cb:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
101007ce:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
101007d3:	83 c4 04             	add    esp,0x4
101007d6:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
101007dd:	9f                   	lahf
101007de:	f6 c4 44             	test   ah,0x44
101007e1:	7a 28                	jp     0x1010080b
101007e3:	5f                   	pop    edi
101007e4:	5e                   	pop    esi
101007e5:	c7 83 e8 00 00 00 01 	mov    DWORD PTR [ebx+0xe8],0x1
101007ec:	00 00 00 
101007ef:	5b                   	pop    ebx
101007f0:	8b e5                	mov    esp,ebp
101007f2:	5d                   	pop    ebp
101007f3:	c3                   	ret
101007f4:	68 10 ef 1d 10       	push   0x101def10
101007f9:	6a 01                	push   0x1
101007fb:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10100801:	83 c4 08             	add    esp,0x8
10100804:	5f                   	pop    edi
10100805:	5e                   	pop    esi
10100806:	5b                   	pop    ebx
10100807:	8b e5                	mov    esp,ebp
10100809:	5d                   	pop    ebp
1010080a:	c3                   	ret
1010080b:	5f                   	pop    edi
1010080c:	5e                   	pop    esi
1010080d:	c7 83 e8 00 00 00 00 	mov    DWORD PTR [ebx+0xe8],0x0
10100814:	00 00 00 
10100817:	5b                   	pop    ebx
10100818:	8b e5                	mov    esp,ebp
1010081a:	5d                   	pop    ebp
1010081b:	c3                   	ret
