
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a220 <.text+0x119220>:
1011a220:	55                   	push   ebp
1011a221:	8b ec                	mov    ebp,esp
1011a223:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011a228:	56                   	push   esi
1011a229:	be 01 00 00 00       	mov    esi,0x1
1011a22e:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
1011a234:	7c 56                	jl     0x1011a28c
1011a236:	53                   	push   ebx
1011a237:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1011a23a:	57                   	push   edi
1011a23b:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1011a23e:	66 90                	xchg   ax,ax
1011a240:	56                   	push   esi
1011a241:	e8 3a f4 ff ff       	call   0x10119680
1011a246:	83 c4 04             	add    esp,0x4
1011a249:	85 c0                	test   eax,eax
1011a24b:	74 2f                	je     0x1011a27c
1011a24d:	8b 10                	mov    edx,DWORD PTR [eax]
1011a24f:	8b c8                	mov    ecx,eax
1011a251:	ff 92 d4 00 00 00    	call   DWORD PTR [edx+0xd4]
1011a257:	85 c0                	test   eax,eax
1011a259:	74 21                	je     0x1011a27c
1011a25b:	6a 00                	push   0x0
1011a25d:	57                   	push   edi
1011a25e:	ff 35 8c 64 22 10    	push   DWORD PTR ds:0x1022648c
1011a264:	6a 05                	push   0x5
1011a266:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011a26c:	53                   	push   ebx
1011a26d:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1011a273:	83 c4 14             	add    esp,0x14
1011a276:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011a27c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011a281:	46                   	inc    esi
1011a282:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
1011a288:	7e b6                	jle    0x1011a240
1011a28a:	5f                   	pop    edi
1011a28b:	5b                   	pop    ebx
1011a28c:	5e                   	pop    esi
1011a28d:	5d                   	pop    ebp
1011a28e:	c3                   	ret
