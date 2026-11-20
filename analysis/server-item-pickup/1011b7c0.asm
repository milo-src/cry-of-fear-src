
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b7c0 <.text+0x11a7c0>:
1011b7c0:	55                   	push   ebp
1011b7c1:	8b ec                	mov    ebp,esp
1011b7c3:	56                   	push   esi
1011b7c4:	57                   	push   edi
1011b7c5:	8b f9                	mov    edi,ecx
1011b7c7:	6a 00                	push   0x0
1011b7c9:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1011b7cc:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011b7d2:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b7d5:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b7d8:	8b 01                	mov    eax,DWORD PTR [ecx]
1011b7da:	ff 90 94 00 00 00    	call   DWORD PTR [eax+0x94]
1011b7e0:	8b f0                	mov    esi,eax
1011b7e2:	85 f6                	test   esi,esi
1011b7e4:	7e 49                	jle    0x1011b82f
1011b7e6:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1011b7e9:	89 b7 e0 01 00 00    	mov    DWORD PTR [edi+0x1e0],esi
1011b7ef:	f3 0f 10 81 b4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1b4]
1011b7f6:	00 
1011b7f7:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1011b7fe:	9f                   	lahf
1011b7ff:	f6 c4 44             	test   ah,0x44
1011b802:	7b 2b                	jnp    0x1011b82f
1011b804:	6a 64                	push   0x64
1011b806:	6a 00                	push   0x0
1011b808:	83 ec 08             	sub    esp,0x8
1011b80b:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011b812:	3f 
1011b813:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011b81a:	68 3c b5 1a 10       	push   0x101ab53c
1011b81f:	6a 03                	push   0x3
1011b821:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1011b827:	e8 c4 11 fe ff       	call   0x100fc9f0
1011b82c:	83 c4 1c             	add    esp,0x1c
1011b82f:	33 c0                	xor    eax,eax
1011b831:	85 f6                	test   esi,esi
1011b833:	5f                   	pop    edi
1011b834:	0f 9f c0             	setg   al
1011b837:	5e                   	pop    esi
1011b838:	5d                   	pop    ebp
1011b839:	c2 0c 00             	ret    0xc
