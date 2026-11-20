
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100990 <.text+0xff990>:
10100990:	53                   	push   ebx
10100991:	57                   	push   edi
10100992:	8b f9                	mov    edi,ecx
10100994:	51                   	push   ecx
10100995:	c7 04 24 9a 99 99 3e 	mov    DWORD PTR [esp],0x3e99999a
1010099c:	8b 07                	mov    eax,DWORD PTR [edi]
1010099e:	ff 50 08             	call   DWORD PTR [eax+0x8]
101009a1:	8b 97 e0 00 00 00    	mov    edx,DWORD PTR [edi+0xe0]
101009a7:	83 cb ff             	or     ebx,0xffffffff
101009aa:	3b d3                	cmp    edx,ebx
101009ac:	74 54                	je     0x10100a02
101009ae:	56                   	push   esi
101009af:	90                   	nop
101009b0:	8d 42 08             	lea    eax,[edx+0x8]
101009b3:	c1 e0 05             	shl    eax,0x5
101009b6:	f3 0f 10 0c 38       	movss  xmm1,DWORD PTR [eax+edi*1]
101009bb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101009c0:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
101009c4:	0f 2f c1             	comiss xmm0,xmm1
101009c7:	72 27                	jb     0x101009f0
101009c9:	0f 2e 0d d0 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a13d0
101009d0:	9f                   	lahf
101009d1:	f6 c4 44             	test   ah,0x44
101009d4:	7b 1a                	jnp    0x101009f0
101009d6:	8b c2                	mov    eax,edx
101009d8:	c1 e0 05             	shl    eax,0x5
101009db:	53                   	push   ebx
101009dc:	52                   	push   edx
101009dd:	8b b4 38 04 01 00 00 	mov    esi,DWORD PTR [eax+edi*1+0x104]
101009e4:	e8 37 fc ff ff       	call   0x10100620
101009e9:	83 c4 08             	add    esp,0x8
101009ec:	8b d6                	mov    edx,esi
101009ee:	eb 0c                	jmp    0x101009fc
101009f0:	8b da                	mov    ebx,edx
101009f2:	c1 e2 05             	shl    edx,0x5
101009f5:	8b 94 3a 04 01 00 00 	mov    edx,DWORD PTR [edx+edi*1+0x104]
101009fc:	83 fa ff             	cmp    edx,0xffffffff
101009ff:	75 af                	jne    0x101009b0
10100a01:	5e                   	pop    esi
10100a02:	83 bf e8 00 00 00 00 	cmp    DWORD PTR [edi+0xe8],0x0
10100a09:	74 43                	je     0x10100a4e
10100a0b:	6a 02                	push   0x2
10100a0d:	8b cf                	mov    ecx,edi
10100a0f:	e8 bc fc ff ff       	call   0x101006d0
10100a14:	2b 87 e4 00 00 00    	sub    eax,DWORD PTR [edi+0xe4]
10100a1a:	8b cf                	mov    ecx,edi
10100a1c:	50                   	push   eax
10100a1d:	6a 01                	push   0x1
10100a1f:	e8 ac fc ff ff       	call   0x101006d0
10100a24:	50                   	push   eax
10100a25:	6a 02                	push   0x2
10100a27:	8b cf                	mov    ecx,edi
10100a29:	e8 a2 fc ff ff       	call   0x101006d0
10100a2e:	50                   	push   eax
10100a2f:	68 a8 ee 1d 10       	push   0x101deea8
10100a34:	6a 02                	push   0x2
10100a36:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10100a3c:	83 c4 14             	add    esp,0x14
10100a3f:	8b cf                	mov    ecx,edi
10100a41:	6a 02                	push   0x2
10100a43:	e8 88 fc ff ff       	call   0x101006d0
10100a48:	89 87 e4 00 00 00    	mov    DWORD PTR [edi+0xe4],eax
10100a4e:	5f                   	pop    edi
10100a4f:	5b                   	pop    ebx
10100a50:	c3                   	ret
