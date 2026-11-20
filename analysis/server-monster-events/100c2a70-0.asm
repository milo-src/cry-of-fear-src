
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2a70 <.text+0xc1a70>:
100c2a70:	55                   	push   ebp
100c2a71:	8b ec                	mov    ebp,esp
100c2a73:	56                   	push   esi
100c2a74:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c2a77:	8b c6                	mov    eax,esi
100c2a79:	57                   	push   edi
100c2a7a:	8b f9                	mov    edi,ecx
100c2a7c:	83 e8 01             	sub    eax,0x1
100c2a7f:	75 40                	jne    0x100c2ac1
100c2a81:	53                   	push   ebx
100c2a82:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100c2a88:	e8 f3 4c f5 ff       	call   0x10017780
100c2a8d:	85 c0                	test   eax,eax
100c2a8f:	74 1d                	je     0x100c2aae
100c2a91:	6a 00                	push   0x0
100c2a93:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100c2a99:	e8 a2 4c f5 ff       	call   0x10017740
100c2a9e:	68 bc 54 1d 10       	push   0x101d54bc
100c2aa3:	6a 02                	push   0x2
100c2aa5:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c2aab:	83 c4 08             	add    esp,0x8
100c2aae:	5b                   	pop    ebx
100c2aaf:	89 b7 24 02 00 00    	mov    DWORD PTR [edi+0x224],esi
100c2ab5:	89 b7 28 02 00 00    	mov    DWORD PTR [edi+0x228],esi
100c2abb:	5f                   	pop    edi
100c2abc:	5e                   	pop    esi
100c2abd:	5d                   	pop    ebp
100c2abe:	c2 04 00             	ret    0x4
100c2ac1:	89 b7 24 02 00 00    	mov    DWORD PTR [edi+0x224],esi
100c2ac7:	89 b7 28 02 00 00    	mov    DWORD PTR [edi+0x228],esi
100c2acd:	5f                   	pop    edi
100c2ace:	5e                   	pop    esi
100c2acf:	5d                   	pop    ebp
100c2ad0:	c2 04 00             	ret    0x4
