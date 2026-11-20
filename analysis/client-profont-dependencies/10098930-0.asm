
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10098930 <.text+0x97930>:
10098930:	56                   	push   esi
10098931:	e8 aa ff ff ff       	call   0x100988e0
10098936:	8b f0                	mov    esi,eax
10098938:	6a 00                	push   0x0
1009893a:	6a 00                	push   0x0
1009893c:	68 80 00 00 00       	push   0x80
10098941:	8b 16                	mov    edx,DWORD PTR [esi]
10098943:	8b ce                	mov    ecx,esi
10098945:	68 80 00 00 00       	push   0x80
1009894a:	ff 92 2c 01 00 00    	call   DWORD PTR [edx+0x12c]
10098950:	6a 08                	push   0x8
10098952:	e8 74 bb 01 00       	call   0x100b44cb
10098957:	83 c4 04             	add    esp,0x4
1009895a:	85 c0                	test   eax,eax
1009895c:	74 0d                	je     0x1009896b
1009895e:	6a 00                	push   0x0
10098960:	8b c8                	mov    ecx,eax
10098962:	e8 55 b6 01 00       	call   0x100b3fbc
10098967:	8b c8                	mov    ecx,eax
10098969:	eb 02                	jmp    0x1009896d
1009896b:	33 c9                	xor    ecx,ecx
1009896d:	8b 06                	mov    eax,DWORD PTR [esi]
1009896f:	51                   	push   ecx
10098970:	8b ce                	mov    ecx,esi
10098972:	ff 90 b4 00 00 00    	call   DWORD PTR [eax+0xb4]
10098978:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1009897e:	85 c9                	test   ecx,ecx
10098980:	74 06                	je     0x10098988
10098982:	5e                   	pop    esi
10098983:	e9 28 08 01 00       	jmp    0x100a91b0
10098988:	57                   	push   edi
10098989:	68 a8 14 00 00       	push   0x14a8
1009898e:	e8 2d c4 00 00       	call   0x100a4dc0
10098993:	8b f8                	mov    edi,eax
10098995:	83 c4 04             	add    esp,0x4
10098998:	85 ff                	test   edi,edi
1009899a:	74 2c                	je     0x100989c8
1009899c:	8b 16                	mov    edx,DWORD PTR [esi]
1009899e:	8b ce                	mov    ecx,esi
100989a0:	ff 52 1c             	call   DWORD PTR [edx+0x1c]
100989a3:	8b 16                	mov    edx,DWORD PTR [esi]
100989a5:	8b ce                	mov    ecx,esi
100989a7:	50                   	push   eax
100989a8:	ff 52 18             	call   DWORD PTR [edx+0x18]
100989ab:	50                   	push   eax
100989ac:	6a 00                	push   0x0
100989ae:	6a 00                	push   0x0
100989b0:	8b cf                	mov    ecx,edi
100989b2:	e8 59 b6 00 00       	call   0x100a4010
100989b7:	8b c8                	mov    ecx,eax
100989b9:	89 0d 00 26 1b 10    	mov    DWORD PTR ds:0x101b2600,ecx
100989bf:	56                   	push   esi
100989c0:	8b 01                	mov    eax,DWORD PTR [ecx]
100989c2:	ff 50 40             	call   DWORD PTR [eax+0x40]
100989c5:	5f                   	pop    edi
100989c6:	5e                   	pop    esi
100989c7:	c3                   	ret
100989c8:	33 c9                	xor    ecx,ecx
100989ca:	89 0d 00 26 1b 10    	mov    DWORD PTR ds:0x101b2600,ecx
100989d0:	56                   	push   esi
100989d1:	8b 01                	mov    eax,DWORD PTR [ecx]
100989d3:	ff 50 40             	call   DWORD PTR [eax+0x40]
100989d6:	5f                   	pop    edi
100989d7:	5e                   	pop    esi
100989d8:	c3                   	ret
